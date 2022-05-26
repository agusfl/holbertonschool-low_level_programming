# Hash Tables

Learning objectives:
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Environment
 
* Language: C
* Operating System: Ubuntu 20.04 LTS
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
* Compiler: gcc 
 > **Note:** The code will be compiled using the options: -Wall -Werror -Wextra -pedantic -std=gnu89

## Description of each file:

| Files          |Desription
|:----------------|:-------------------------------:|
|hash_tables.h |Hold prototypes of functions, libraries headers and struct used.
|0-hash_table_create.c |Function that creates a ``hash table``.
|1-djb2.c |Function implementing the ``djb2`` algotithm.
|2-key_index.c |Function that gives you the ``index`` of a ``key``.
|3-hash_table_set.c |Function that **adds** an element to the hash table.
|4-hash_table_get.c |Function that **retrieves** a ``value`` associated with a ``key``.
|5-hash_table_print.c |Function that **prints** a hash table.
|6-hash_table_delete.c |Function that **deletes** a ``hash table``.
|100-sorted_hash_table.c |Function that **sorts** a hash table.

## Authors :pen:

* [Agustin Flom](https://www.linkedin.com/in/agustin-f/)
