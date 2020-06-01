# C - Hash Tables
This project goes over the creation and use of hash tables. Hash Tables play an immense part in the data management side of computing.

With the help of Hash Tables, data lookup becomes a piece of cake. While looking up data is pretty fast when you know exact where it is, conflicts and issues quickly arise as the size and complexity of such a data management system is enlarged.

Hash tables come in check when a lot of data is supposed to be stored and quickly looked up. Hash tables typically make use of arrays along with a combination of singly/doubly linked lists.

At their core, Hash Tables make use of arrays to store data. Since arrays are sequential blocks of memory, we could think of these are indexes. With a number of different hashing algrorithms going around, the job of the hashing algorithm is to generate a consistent, yet random index number based off a number of factors. With the hashing algorithm generating an index number, we could always depend on the fact that the exact value trying to be added to the hash table always point to the same index. If that checks out, nows the time to either lookup for that specific data in that index or either add data to that specific index with the help of singly linked lists, especially as collisions arise.

This folder right here, contains all the logic to accommadate the main files offered in the Holberton School curriculum.

## Overview
- 0-hash_table_create.c
Contains the necessary logic to create the hash table with the help of malloc and arrays.

- 1-djb2.c
Contains the djb2 algorithm that generates indexes for use with our hash tables.

- 2-key_index.c
Contains the logic that uses the djb2 algrorithm to generate indexes as well as return them for other functions when called.

- 3-hash_table_set.c
Contains the core logic that creates and adds data to the hash table initially created by hash_table_create.

- 4-hash_table_get.c
Contains logic to allow lookup throughout the hash table and return the value associated with a given key.

- 5-hash_table_print.c
Prints all the data in the hash tables.

- 6-hash_table_delete.c
Contains all the logic to free the memory allocated by number 0 and 3 of this project.

### Written by
Usman Abdul Jabbar Shaikh
