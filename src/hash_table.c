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
}

/**
 * Initialize the members of the HashTable struct: its size and all the lists
*/
void init_table(HashTable* dictionary) {
    dictionary = malloc(sizeof(HashTable)); //Do not cast!
    //Check if memory is allocated
    if(dictionary != NULL) {
        for(int i=0; i<N; i++) {
            init_list (dictionary->list[i])
        }
        dictionary.size = 0;
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
            clear_list (dictionary->list[i])
        }
        dictionary.size = 0;
    }
    else {
        // Memory not allocated, set some error state to handle 
    }
}

/**
 * Look for the WordInfo corresponding to a word by checking which list to search
 * and calling find_in_list.
 * 
 * Return a pointer to the WordInfo if found or NULL otherwise.
*/
WordInfo* find_word_info(HashTable dictionary, char* word) {

    


    return NULL;
}

/**
 * TODO: Insert a WordInfo into the dictionary except if a WordInfo with the same word
 * already exists in the dictionary.
 * 
 * Return true if insertion was succesful or false otherwise.
*/
bool insert_word_info(HashTable* dictionary, WordInfo wi) {
    // ADD YOUR CODE HERE

}

/**
 * TODO: Delete the WordInfo corresponding to word from the dictionary by checking from
 * which list to delete it and calling delete_from_list.
 * 
 * Return true if a WordInfo for the given word was present in the dictionary
 * and could be deleted succesfully or false otherwise.
*/
bool delete_word_info(HashTable* dictionary, char* word) {
    // ADD YOUR CODE HERE

}

/**
 * TODO: Print the number of words in the dictionary followed by the information of
 * each word, one per line. In the case that there are no words in the
 * dictionary it prints "The dictionary is empty".
*/
void print_table(HashTable dictionary) {
    // ADD YOUR CODE HERE

}

/*
 * TODO: Save content of the dictionary to file
 * write line: fprintf(fd, "%s\t%s\t%c\n", wi.word, wi.definition, wi.category);
 */
void save_dictionary_to_file(HashTable dictionary, char *filepath){
    // ADD YOUR CODE HERE


//    printf("Dictionary has %i words.\n", dictionary.size);
//    printf("Completed! Saved the dictionary to \"%s\"\n", filepath);
}