#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#define MAX_WORD_LENGTH 50
#define MAX_DEFINITION_LENGTH 100
#define MAX_LENGTH MAX_WORD_LENGTH+MAX_DEFINITION_LENGTH+5
#define N 26 


// STRUCTURES DEFINITION

typedef struct {
    char word[MAX_WORD_LENGTH];
    char definition[MAX_DEFINITION_LENGTH];
    char category; // Part of speech
} WordInfo;

typedef struct _Node {
    WordInfo data;
    struct _Node* next;
    struct _Node* prev;
} Node;

typedef struct {
    Node* start;
} LinkedList;

typedef struct {
    LinkedList list[N];
    int size;
} HashTable;


//  FUNCTION IMPLEMENTATION

WordInfo create_word_info(char *word, char *definition, char category) {
    WordInfo wi;
    strcpy(wi.word, word);
    strcpy(wi.definition, definition);
    wi.category = category;
    return wi;
}

void init_list(LinkedList* l) {
    l = malloc(sizeof(struct LinkedLink));
    l->start = NULL;
}

void clear_list(LinkedList *l) {
    // ADD YOUR CODE HERE

}

void insert_into_list(LinkedList* l, WordInfo c) {
    Node *node(void) = malloc(sizeof(Node));
    strcpy(node->data.word, c.word);
    strcpy(node->data.definition, c.definition);
    node->data.category = c.category;

    // Empty dictionary case
    if (l->start == NULL) {
        node->prev = NULL;
        node->next = NULL;
        l->start = node;
    }
    else {
        Node * index;
        // Look for the last nnde
        for (index = l->start; index->next != NULL; index = index->next) {
        }
        index->next = node;
        node->prev = index;
        node->next = NULL;
    }
}

// MAIN FUNCTION

int main(void) {
  printf("Hello World\n");
  return 0;
}