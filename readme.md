## OBJECTIVES 

The objective of this practical assignment is to implement a program that is used to **store and manage information of a dictionary**. You will have to implement the necessary data structures to model the words and the dictionary. 

## PROBLEM 

We want to implement a dictionary to store information on words. The information to be stored includes the word itself (string), its definition (string), and its parts of speech or category (a char) (noun `N`, verb ‘V’, adjective `J` or adverb `R`). 

We want to: 
(i) store the data about the words in an efficient manner, 
(ii) retrieve the information about a word using the word as a search key, and 
(iii) list the information about the words in the dictionary. 



## TASKS 

**Task 1** Implement the appropriate data structures to represent the information about the words: the word, its definition, and its category. 

**Task 2** Implement the necessary functions to manipulate a double chained list which stores the information from Task 1. All functions to implement are specified in the file linked_list.h. The first session dedicated to this lab will be dedicated to the implementation of the linked list. 

**Task 3** Implement the data structure for the dictionary which has to be implemented as a hash table of size N (=26 as the letters in the alphabet) of pointers to lists. The hash function takes the first letter of a word and returns a number between 0 and 25 as hash value. The value 0 is for words starting with “a”, 1 is for “b”,.... while the value 25 is for words starting with “z”. 

> NOTE THAT before calling the hash function you have to lowercase the word. We consider valid only those words which start with a letter. 
>
> Note that as many words start with the same letter, their hash values will be identical (collision), this is why the hash table has to support chaining. Implement the necessary operation to initialize the dictionary, insert a word, search for a word, etc. Note that the dictionary cannot contain duplicate entries (since it is a Set!). The image below shows an instance of a hash table. The following words have been inserted: “ant”, “cat”, “zappy”, “coal”, y “access”; each item of information contains the word, its definition, and its category. 
>
> ● Words “ant” and “access” go to “bucket” 0 since they start with “a”. 
>
> ● Words “cat” and “coal” go to “bucket” 2 since they start with “c”. 
>
> ● Words “zappy” goes to “bucket” 25 since it starts with “z”.

### MAIN PROGRAM 

The provided main() function contains a menu to verify that the hash table works correctly. This menu allows you to: 

> ● Load dictionary from file. 
>
> ● Find a word and its information from the dictionary. 
>
> ● Delete a word from the dictionary. 
>
> ● Insert new word with its information into the dictionary. 
>
> ● List the content of the whole dictionary. 
>
> ● Test whether the program you have implemented correctly. 
>
> ● Exit the program. 
