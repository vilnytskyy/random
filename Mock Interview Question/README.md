# Mock Interview Question
Something along the lines of: Suppose a tree structure has a node with more than one parent. How can you change this tree structure to form a binary tree?

## Code Documentation
- For reference to a tree structure I used the simple Node class found in Node.h and Node.cpp that Professor Zamansky made way back in freshman year.

- For reference to my getDebugString() function I used a similar function that Professor Zamansky made around the same time as the Node class.

- For reference to my implementation of the fixTreeSet() and fixTreeMap() functions I based them off of the discussions during the mock interview and the general direction of what the code should have looked like.
    - The fixTreeSet(), fixTreeMap(), and getDebugString() function headers can be found in the Node.h file and the function implementations can be found in the Node.cpp file

## Things to Note
- **Q**: For solution of DFS traversal, removing an edge if the node has already been visited, what would the runtime complexity of the solution be?
    - **A**: O(n)

- In my implementation of the solution to this question I manipulate the input tree instead of creating a copy of the input tree and manipulating the copy. Hence why for my tests I had to test my set and map solutions separately.

- This implementation sets the node data as an integer type but other data types like strings and objects could work with a bit of tweaking.

- I decided to use unordered sets/maps because I don't believe having ordered sets/maps would really beneficial in the scope of this question. 

- I implemented a solution for both sets and maps because I realized that you don't really need maps to get a solution and both solutions are pretty similar.

## Output
If you were to compile and run the tests I made for this program, the output would look like this:

    Example 1:

    Org:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 5 ,  , 3 , 1
    Set:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 3 , 1
    Map:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 3 , 1

    Example 2:

    Org:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 5 ,  ,  , 5 , 3 , 1
    Set:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 3 , 1
    Map:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 3 , 1

    Example 3:

    Org:  ,  , 5 ,  , 4 ,  ,  , 5 , 2 ,  ,  , 5 ,  , 3 , 1
    Set:  ,  , 5 ,  , 4 ,  , 2 ,  ,  , 3 , 1
    Map:  ,  , 5 ,  , 4 ,  , 2 ,  ,  , 3 , 1

    Example 4:

    Org:  ,  , 8 ,  ,  , 8 , 4 ,  ,  , 8 ,  ,  , 8 , 5 , 2 ,  ,  , 8 ,  ,  , 8 , 6 ,  ,  , 8 ,  ,  , 8 , 7 , 3 , 1
    Set:  ,  , 8 ,  , 4 ,  ,  , 5 , 2 ,  ,  , 6 ,  ,  , 7 , 3 , 1
    Map:  ,  , 8 ,  , 4 ,  ,  , 5 , 2 ,  ,  , 6 ,  ,  , 7 , 3 , 1

    Example 5:

    Org:  ,  , 8 ,  ,  , 9 , 4 ,  ,  , 8 ,  ,  , 9 , 5 , 2 ,  ,  , 8 ,  ,  , 9 , 6 ,  ,  , 8 ,  ,  , 9 , 7 , 3 , 1
    Set:  ,  , 8 ,  ,  , 9 , 4 ,  ,  , 5 , 2 ,  ,  , 6 ,  ,  , 7 , 3 , 1
    Map:  ,  , 8 ,  ,  , 9 , 4 ,  ,  , 5 , 2 ,  ,  , 6 ,  ,  , 7 , 3 , 1

    Example 6:

    Org:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 6 ,  ,  , 7 , 3 , 1
    Set:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 6 ,  ,  , 7 , 3 , 1
    Map:  ,  , 4 ,  ,  , 5 , 2 ,  ,  , 6 ,  ,  , 7 , 3 , 1

Key:
Org - Original/input tree debug string.
Set - Fixed tree using fixTreeSet() function debug string.
Map - Resulting tree using fixTreeMap() function debug string.
"" - When a Node is equal to Null.