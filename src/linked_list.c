#include "linked_list.h"

/**
 * TODO: Initialize the start Node pointer so that the list is empty.
*/
void init_list(LinkedList* l) {    
    l = malloc(sizeof(LinkedList));   
    l->start = NULL;
}
/**
A linked list is held using a local pointer variable which points to
the first item of the list. If that pointer is also NULL, then the list
is considered to be empty.
**/

/**
 * Clear all the nodes of the list, freeing the memory and leaving the list as
 * it would have just been initialized.
*/
void clear_list(LinkedList *l) {
    Node* index;     
    if (l->start == NULL) {        
    // Error list empty. Do nothing
    }
    else {
        // Look for first appearance of word in the disctionary (linked list)
        for (index = l->start; index->next != NULL; index = index->next) {
            free (*index);
        }
        free (*index);       // Freeing memory for last node
        l->start == NULL;    // List initialized
    
    }   
}
   

/**
 * Reserve memory for a new Node and inserts it in the given linked list,
 * changing the start pointer as well as the prev/next pointers accordingly.
*/
void insert_into_list(LinkedList* l, WordInfo c) {      
    Node* index,node;

    node = malloc(sizeof(Node));
    strcpy(node->data.word,c.word);
    strcpy(node->data.definition, c.definition);
    node->data.category = c.category; 

    // Empty dictionary case
    if (l->start == NULL) {        
        node->prev = NULL;
        node->next = NULL;
        l->start = node;  
    }
    else {        
        // Look for the last nnde
        for (index = l->start; index->next != NULL; index = index->next;) {
        }       
        index->next = node; 
        node->prev = index;
        note->next = NULL;    
    }
}

/**
 * Iterate over the different nodes searching for a WordInfo that contains the given word.
 * Return: A pointer to the node if found or NULL otherwise.
*/
Node* find_in_list(LinkedList *l, char* word) {
    Node* index; 
    if (l->start == NULL) {        
        // Error list empty
    }
    else {        
        // Look for first appearance of word in the disctionary (linked list)
        for (index = l->start; index->next != NULL; index = index->next;) {
            if (index->data.word == word) {
                return index;
            }
        }
    }
    return NULL;
}  

/**
 * Given a node and the list it belongs to, it removes it from the list freeing
 * its memory. It accounts for the start, and the prev/next pointers.
*/
void delete_node(LinkedList* l, Node* p) {
    Node* index, prev, next; 

    if (l->start == NULL) {        
        // Error list empty, no node to delete        
    }
    else {
        // Look for the node p in the dictionary
        for (index = l->start; (index != p) || ( ! index->next ); index = index->next) {
            }        
        
        if ( index == p ) {
            // Node found, proceed to remove
            prev = index->prev;   // Previous node  
            next = index->next;   // Following node
            prev->next = next; 
            if (next != NULL) {
               next->prev = prev;     
            }
            
            free(*index);
            return;            
        }    
        else  {
           // Node not found
        }     
    }    
}

/**
 * If a node in the list contains a WordInfo with the given word, it deletes it.
 * Return true if a node was deleted and false otherwise.
*/
bool delete_from_list(LinkedList* l, char* word) {
    Node* index, prev, next; 

    if (l->start == NULL) {        
        // Error list empty
        return FALSE;
    }
    else {
        // Look for first appearance of word in the disctionary (linked list)
        for (index = l->start; index->next != NULL; index = index->next;) {            
            if (index->data.word == word) {                
                prev = index->prev;
                next = index->next;
                prev->next = next;
                // Last node (next == NULL ?)
                if (next) {
                    next->prev = prev;
                }
                free(*index)
                return TRUE;        
            }
        }
        // No word found in the dictionary
        return FALSE;    
    }
}

/**
 * Print all word infos of the list using print_word_info.
*/
void print_list(LinkedList l) {
    if (l->start == NULL) {        
    // Error list empty    
    }
    else {
        for (index = l->start; index->next != NULL; index = index->next;) {            
            printf ("%s [%c]: \t %s ",index->data.word, index->data.category, index->data.definition )
            )            
        }    
    }
}
