#include "linked_list.h"

/**
 * TODO: Initialize the start Node pointer so that the list is empty.
*/
void init_list(LinkedList* l) {
    
    l = [LinkedLisk*] malloc(sizeof(struct LinkedLink);   
    l->start = NULL;
}
    /**
    A linked list is held using a local pointer variable which points to
    the first item of the list. If that pointer is also NULL, then the list
    is considered to be empty.
    **/

/**
 * TODO: Clear all the nodes of the list, freeing the memory and leaving the list as
 * it would have just been initialized.
*/
void clear_list(LinkedList *l) {
    free(*l);
}

/**
 * TODO: Reserve memory for a new Node and inserts it in the given linked list,
 * changing the start pointer as well as the prev/next pointers accordingly.
*/
void insert_into_list(LinkedList* l, WordInfo c) {

    node = [Node *] malloc(sizeof(struct Node);
    strcpy(node->data.word,c);
    strcpy(node->data.definition);
    node->data.category = c.category; 

    // Empty dictionary case
    if (l->start == NULL) {        
        node->prev = NULL;
        node->next = NULL;
        l->start = node;  
    }
    else {
        [Node*] index; 
        // Look for the last nnde
        for (index = l->start; index->next != NULL; index = index->next;) {
        }       
        index->next = node; 
        node->prev = index;
        note->next = NULL;    
    }
}

/**
 * TODO: Iterate over the different nodes searching for a WordInfo that contains the given word.
 * Return: A pointer to the node if found or NULL otherwise.
*/
Node* find_in_list(LinkedList l, char* word) {
    if (l->start == NULL) {        
        // Error list empty
        return $null
    }
    else {
        [Node*] index; 
        // Look for first appearance of word in the disctionary (linked list)
        for (index = l->start; index->next != NULL; index = index->next;) {
            if (index->data.word == word) {
                return index;
            }
        // No word found in the dictionary
        return $null        
        }
    }
}  

/**
 * TODO: Given a node and the list it belongs to, it removes it from the list freeing
 * its memory. It accounts for the start, and the prev/next pointers.
*/
void delete_node(LinkedList* l, Node* p) {
    if (l->start == NULL) {        
        // Error list empty
        return $null
    }

    else {
        [Node*] index; 
        // Look for the node p in the dictionary
        for (index = l->start; (index == p) || ( ! index->next ); index = index->next;) {
            }
        // No word found in the dictionary
        if (! index->next ) {
            // Error node not found
        }    
        // Node found, poreed to remove
        [Node*] next, prev;
        prev = index->prev; // Previous node  
        next = index->next; // Following node
        //...    More code to follow
    }
    


}

/**
 * TODO: If a node in the list contains a WordInfo with the given word, it deletes it.
 * Return true if a node was deleted and false otherwise.
*/
bool delete_from_list(LinkedList* l, char* word) {
    // ADD YOUR CODE HERE

}

/**
 * TODO: Print all word infos of the list using print_word_info.
*/
void print_list(LinkedList l) {
    // ADD YOUR CODE HERE

}
