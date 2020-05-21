#include "utils.h"
#include "hash_table.h"


/**
 * Compute the hash key of a word by mapping the first letter to an integer.
 * There are N=26 possible keys (only low-case letters are considered, it is
 * assumed that all capital letters have been changed using lower_case). If a
 * character not in [a-z] is given, -1 is returned.
 * 
 * Return the hash key (0-25) or -1.
*/
int hash_function(char* word) {
    int key = word[0] - 'a';
    
    // If value not in range (0-25) character is not alpha, so return -1
    if( (key<0) || (key>25)) { 
        key=-1; 
    }
    return key;
}


/**
 * Initialize the members of the HashTable struct: its size and all the lists
*/
void init_table(HashTable* dictionary) {
    dictionary = malloc(sizeof(HashTable)); //Do not cast!
    //Check if memory is allocated
    if(dictionary != NULL) {
        for(int i=0; i<N; i++) {
            init_list (&(dictionary->list[i]) )
        }
        dictionary->size = 0;
    }
    else {

        // Memory not allocated, set some error state to handle 
    }
}

/**
 * Clear all lists leaving the HashTable struct as if it was just initialized.
*/
void clear_table(HashTable* dictionary) {
    if(dictionary != NULL) {
        //Memory not allocated, set some error state to handle and break     
        for(int i=0; i<N; i++) {
            clear_list ( &dictionary->list[i] )
        }
        dictionary->size = 0;
    }
    else {
        // Memory not allocated, set some error state to handle 
        printf("No memory could be allocated for a dictionary");
    }
}

/**
 * Look for the WordInfo corresponding to a word by checking which list to search
 * and calling find_in_list.
 * 
 * Return a pointer to the WordInfo if found or NULL otherwise.
*/
WordInfo* find_word_info(HashTable dictionary, char* word) {
    Node *hit;

    for (int i=0; i<N; i++) {
        hit = find_in_list ( dictionary.list[i], word); 
        if ( hit ) {
            return &(hit->data);
        }
    }
    return NULL;
}

/**
 * Insert a WordInfo into the dictionary except if a WordInfo with the same word
 * already exists in the dictionary.
 * 
 * Return true if insertion was succesful or false otherwise.
*/
bool insert_word_info(HashTable* dictionary, WordInfo wi) {
    int key;
    bool hit;
    
    key = hash_function(wi.word);
    hit = find_in_list(dictionary->list[key], wi.word);
    if (!hit) {
        insert_into_list(&(dictionary->list[key]), wi);
        (dictionary->size)++;
        return true;
    }
    return false;
}

/**
 * Delete the WordInfo corresponding to word from the dictionary by checking from
 * which list to delete it and calling delete_from_list.
 * 
 * Return true if a WordInfo for the given word was present in the dictionary
 * and could be deleted succesfully or false otherwise.
*/
bool delete_word_info(HashTable* dictionary, char* word) {
    int key;
    bool hit;
    
    key = hash_function(word);
    hit = delete_from_list( &(dictionary->list[key]), word);
    return hit;

}

/**
 * Print the number of words in the dictionary followed by the information of
 * each word, one per line. In the case that there are no words in the
 * dictionary it prints "The dictionary is empty".
*/
void print_table(HashTable dictionary) {
    if (dictionary.size) {
        printf("Dictionary's current size: %d words", dictionary.size);
        for (int i=0; i<N; i++ ) {
            print_list(dictionary.list[i]);
        }
    }
    else {
        printf("The dictionary is empty");
    }
}

/*
 * Save content of the dictionary to file
 * write line: 
 */
void save_dictionary_to_file(HashTable dictionary, char *filepath){
    FILE *fd;
    WordInfo wi;

    if (dictionary.size) {
        printf("Dictionary's current size: %d words", dictionary.size);
        fd = fopen("C:/temp/dictionary.txt","w");
        if (!fd) {
            printf("Error opening file");
            return;
        }
        
        for (int i=0; i<N; i++ ) {
            LinkedList *l;
            Node *index;

            l = & (dictionary.list[i] );
            if (l->start != NULL) {    
                for (index = l->start; index->next != NULL; index = index->next) {            
                    fprintf(fd, "%s\t%s\t%c\n", index->data.word, index->data.definition, index->data.category);                            
                }    
            }            
        }
        
        fclose(fd);
        printf("Completed! Saved the dictionary to \"%s\"\n", filepath);
        printf("Dictionary has %i words.\n", dictionary.size);    
    }
    else {
        printf("The dictionary is empty");
    }
}