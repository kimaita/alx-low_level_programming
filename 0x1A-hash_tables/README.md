# C - Hash tables

**[Hash tables](https://en.wikipedia.org/wiki/Hash_table)** are abstract data structures that implement an associative array/dictionary/map i.e a `key:value` pairing of data. A key is generated for each value and is then used as an index for the value in the hashtable(array). This key is used for insertions and lookups, providing Θ(1) time complexity.

**[Hash functions](https://en.wikipedia.org/wiki/Hash_function)** are used to generate the key for a value. A singular hash function is used for an instance of a hashtable and should _ideally_ produce hash codes(keys) that are unique for each value, but this isn't always the case.  

**[Collisions](https://en.wikipedia.org/wiki/Hash_collision)** occur when two values produce the same key for a given hash function meaning that they would map to the same index in the hash table. There is thus a need for a mechanisms to handle these collisions.  

**[Chaining](https://en.wikipedia.org/wiki/Hash_table#Separate_chaining)** is a method for resolving collisions by storing data that maps to the same index in a linked list at that index, instead of the singular value. Accessing the value would then be a two-step process of computing and accessing the index, then traversing the linked list to find the data.

## Implementation

* [hash_tables](./hash_tables.h) defines the structure of our hash table and it's nodes.  
  * The hash table, `hash_table_s`, consists of an integer `size` defining its size and an array of pointers to nodes `array`.  
  * The nodes, `hash_node_s`, consist of a `key`(character array), `value`(character array) and pointer `next` pointing to the next node.
* [hash_table_create](./0-hash_table_create.c) creates a hashtable of given size
* [djb2](./1-djb2.c) is the provided hashing algorithm. [Source](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)
* [key_index](./2-key_index.c) generates an index given a key.
* [hash_table_set](./3-hash_table_set.c) adds an element to the hash table, with collisions added to the beginning of the linked list.
* [hash_table_get](./4-hash_table_get.c) gets a value from the hash table given the key
* [hash_table_print](./5-hash_table_print.c) prints a hash table ordered by array occurence then list occurence.  
  **Example:**

  ```c
  hash_table_t *ht;

  ht = hash_table_create(1024);
  hash_table_print(ht);
  hash_table_set(ht, "c", "fun");
  hash_table_set(ht, "python", "awesome");
  hash_table_set(ht, "Bob", "and Kris love asm");
  hash_table_set(ht, "N", "queens");
  hash_table_set(ht, "Asterix", "Obelix");
  hash_table_set(ht, "Betty", "Cool");
  hash_table_set(ht, "98", "Battery Street");
  hash_table_set(ht, "synaphea", "Bloop");
  hash_table_set(ht, "joyful", "Bleep");
  hash_table_set(ht, "dram", "first");
  hash_table_set(ht, "vivency", "second");
  hash_table_set(ht, "neurospora", "Weird name");
  hash_table_set(ht, "heliotropes", "Cliche");
  hash_table_print(ht);
  ```

  **Output:**

  ```bash
  {}
  {'Betty': 'Cool', 'python': 'awesome', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Bob': 'and Kris love asm', 'Asterix': 'Obelix', 'joyful': 'Bleep', 'synaphea': 'Bloop', 'heliotropes': 'Cliche', 'neurospora': 'Weird name', 'vivency': 'second', 'dram': 'first'}
  ```
  
* [hash_table_delete](./6-hash_table_delete.c) deletes a hash table
