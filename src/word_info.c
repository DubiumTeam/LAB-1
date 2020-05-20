#include "word_info.h"

/*
 * TODO: create object WordInfo from these infos
 */

WordInfo create_word_info(char *word, char *definition, char category) {
    WordInfo wi;
    strcpy(wi.word, word);
    strcpy(wi.definition, definition);
    wi.category = category;
    return wi;
}

/*
 * Print WordInfo to the screen.
 */
void print_word_info(WordInfo wi) {
    printf("%s (%c): %s\n", wi.word, wi.category, wi.definition);
}
