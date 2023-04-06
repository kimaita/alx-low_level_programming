# C - Hash tables

**[Hash tables](https://en.wikipedia.org/wiki/Hash_table)** are abstract data structures that implement an associative array/dictionary/map i.e a `key:value` pairing of data. A key is generated for each value and is then used as an index for the value in the hashtable(array). This key is used for insertions and lookups, providing Θ(1) time complexity.

**[Hash functions](https://en.wikipedia.org/wiki/Hash_function)** are used to generate the key for a value. A singular hash function is used for an instance of a hashtable and should _ideally_ produce hash codes(keys) that are unique for each value, but this isn't always the case.  

**[Collisions](https://en.wikipedia.org/wiki/Hash_collision)** occur when two values produce the same key for a given hash function meaning that they would map to the same index in the hash table. There is thus a need for a mechanisms to handle these collisions.  

**[Chaining](https://en.wikipedia.org/wiki/Hash_table#Separate_chaining)** is a method for resolving collisions by storing data that maps to the same index in a linked list at that index, instead of the singular value. Accessing the value would then be a two-step process of computing and accessing the index, then traversing the linked list to find the data.

## Implementation

* [hash_tables](./hash_tables.h) defines the structure of our hash table and it's nodes.  
The hash table, `hash_table_s`, consists of an integer `size` defining its size and an array of pointers to nodes `array`.  
The nodes, `hash_node_s`, consist of a `key`(character array), `value`(character array) and pointer `next` pointing to the next node.
* [hash_table_create](./0-hash_table_create.c) creates a hashtable of given size
