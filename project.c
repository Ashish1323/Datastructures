#define tester(num) printf("%d\n", num); //*

char *strlwr(char *str) // Remove this if you get a compilation error
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}

struct Node;
struct Trie;
typedef struct Node* NodePointer;
@@ -136,65 +124,27 @@ void n_add_contact(NodePointer parent, char* new_name, char* new_phone){
	// If phone number is already filled in.
	if (new_node->phone != NULL){

		int yn;
		printf("Contact already exists.\nDo you want to update the phone no.? (Yes - 1): ");
		scanf("%d", &yn);
		if (yn != 1) return;
		char yn;
		printf("Contact already exists.\nDo you want to update the phone no.?: ");
		scanf(" %c", &yn);
		if (yn != 'y' && yn != 'Y') return;
	}

	// Filling in phone number at for the last symbol.
	new_node->phone = new_phone;	
}

// Returns true if key presents in the dictionary, else returns false
bool n_search_contact( NodePointer root, const char *key)
{/*
    NodePointer temp = root;
    int i;
    for (i = 0; i < strlen(key); i++)
    {
        int index = CHAR_TO_INDEX(key[i]);
        if (temp->children[index] == NULL)
            return false;
        temp = temp->children[index];
    }
    return (temp != NULL && temp->phone);*/
}

// Used for prefix search to get the root.
NodePointer n_traverse_till(NodePointer root, const char *key)
{/*
    NodePointer temp = root;
    int i;
    for (i = 0; i < strlen(key); i++)
    {
        int index = CHAR_TO_INDEX(key[i]);
        if (temp->children[index] == NULL)
        {
            printf("\nNo Words present with the given Prefix: %s \n",key);
            return NULL;
        }
        temp = temp->children[index];
    }
    return temp;*/
}

// To check the words are having only alphabets and converts to lower case.
char* is_valid(char* input){

    int i;
    for(i=0;input[i];i++){
        if(!isalpha(input[i])){
            printf("\n\nNot a valid Word !!!\n\n");
    for(int i = 0; input[i] ; ++i){

        if(isalpha(input[i]) == false)
            return NULL;
        }

        input[i] = tolower(input[i]);
    }
    return strlwr(input);
    return input;
}

void n_display_all_contacts(NodePointer parent, char* buffer, int level){
@@ -215,34 +165,70 @@ void n_display_all_contacts(NodePointer parent, char* buffer, int level){
		current = current->sibling;
	} while (current);
}
/*
// To display all words present in the dictionary.
void n_display_all_contacts(NodePointer root, char *buffer, int buffIndex)
{
    bool flag=true;

    int i;
    
    for(i = 0; i < SYMBOL_SIZE; i++)
    {
        if(root->children[i] != NULL)
        {
                buffer[buffIndex] = i + 'a';
                n_display_all_contacts(root->children[i], buffer, buffIndex + 1);
        }
        
        if(root->phone && flag)
        {
                buffer[buffIndex] = '\0';
                if(strlen(buffer) > 0)
                {
                    printf("---> %s %s\n", buffer, root->phone);
                    flag=false;
                }
        }
    }
// Returns address of the child of parent that contains symbol as 'data'
NodePointer ll_find(NodePointer parent, char data){

	if (parent->child == NULL) return NULL;

	NodePointer current = parent->child;

	do{
		if (current->symbol == data) return current;

		current = current->sibling;

	}while (current);

	return NULL;	
}
*/

// Reads characters one by one and offers auto complete suggestions
void n_search_contact_by_prefix(NodePointer root){

	char search_string[MAX_NAME_LEN] = "";
	char yn;

	NodePointer node = root; int i;

	for (i = 0; ; ++i){ // TODO i shouldnt exceed MAX_NAME_LEN 

		scanf(" %c", &search_string[i]); // Again doesn't read spaces

		node = ll_find(node, search_string[i]);

		if (node == NULL){

			printf("None found.\n");
			break;
		}

		else{

			char suggestion[MAX_NAME_LEN];
			strcpy(search_string, suggestion);
			NodePointer current = node; int j = i;
			while (current->child){

				suggestion[++j] = current->child->symbol;
				current = current->child;
			}
			printf("Suggestion: %s", suggestion);

			scanf(" %c", &yn);
			if (yn == 'y' || yn == 'Y'){

				// TODO Display record
				printf("Record = %s\n", suggestion);
				return;
			}
		}
		scanf(" %c", &yn);
		if (yn != 'y' && yn != 'Y')
			break;
	}
}

void t_constructor(Trie* trie){

	trie->root = create_node(0);	
@@ -258,60 +244,16 @@ void t_add_contact(Trie* trie){
    	char* new_phone = (char*) calloc(MAX_PHONE_LEN, sizeof *new_phone);
    	scanf("%s", new_phone);
    	//TODO: check validity of phone no
    	n_add_contact(trie->root, strlwr(new_contact_name), new_phone);
    	n_add_contact(trie->root, new_contact_name, new_phone);
    }

    else
    	printf("Name does not meet validity criteria.\n");
}

void t_search_prefix(Trie* trie){
void t_search_contact_by_prefix(Trie* trie){

	char prefix[MAX_NAME_LEN];
	scanf("%s", prefix);

    if (is_valid(prefix)){

    	char buffer[MAX_NAME_LEN];
    	strcpy(buffer, prefix);

    	NodePointer prefix_root = n_traverse_till(trie->root, prefix);

    	if (prefix_root != NULL){

    		n_display_all_contacts(prefix_root, buffer, strlen(prefix));
		}
	}        
}

void t_search_contact(Trie* trie){

	char item[MAX_NAME_LEN];
	int yn;
	scanf("%s", item);

	if (is_valid(item)){

		if (n_search_contact(trie->root, item))
			printf("\n%s is present in the contacts list.\n", item);

		else{

			printf("\n%s is not present in the contacts list.\n", item);

			printf("\nShall I add it ? (Yes - 1 or No - 0):");
			scanf("%d", &yn);

			if (yn == 1){

				char* new_phone = (char*) calloc(MAX_PHONE_LEN, sizeof *new_phone);
    			scanf("%s", new_phone);
    			//TODO: check validity of phone no
    			n_add_contact(trie->root, strlwr(item), new_phone);
			}

		}
	}
	n_search_contact_by_prefix(trie->root);
}

void t_display_all_contacts(Trie* trie){
@@ -335,11 +277,9 @@ int main()
        {
        case 1: t_add_contact(&trie); break;

        case 2: t_search_prefix(&trie); break;

        case 3: t_search_contact(&trie); break;
        case 2: t_search_contact_by_prefix(&trie); break;

        case 4: t_display_all_contacts(&trie); break;
        case 3: t_display_all_contacts(&trie); break;

        default: option = 0;
