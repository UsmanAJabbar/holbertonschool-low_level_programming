# C - Hash Tables
This project goes over the creation and use of hash tables. Hash Tables play an immense part in the data management side of computing.

With the help of Hash Tables, data lookup becomes a piece of cake. While looking up data is pretty fast when you know exact where it is, conflicts and issues quickly arise as the size and complexity of such a data management system is enlarged.

Hash tables come in check when a lot of data is supposed to be stored and quickly looked up. Hash tables typically make use of arrays along with a combination of singly/doubly linked lists.

At their core, Hash Tables make use of arrays to store data. Since arrays are sequential blocks of memory, we could think of these are indexes. With a number of different hashing algrorithms going around, the job of the hashing algorithm is to generate a consistent, yet random index number based off a number of factors. With the hashing algorithm generating an index number, we could always depend on the fact that the exact value trying to be added to the hash table always point to the same index. If that checks out, nows the time to either lookup for that specific data in that index or either add data to that specific index with the help of singly linked lists, especially as collisions arise.
