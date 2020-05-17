#include "word_info.h"

/*
 * TODO: create object WordInfo from these infos
 */
WordInfo create_word_info(char *word, char *definition, char category) {
    // ADD YOUR CODE HERE

}

/*
 * Print WordInfo to the screen.
 */
void print_word_info(WordInfo wi) {
    printf("%s (%c): %s\n", wi.word, wi.category, wi.definition);
}
