#ifndef NODE_H
#define NODE_H
#include <string>
#include <unordered_set>
#include <unordered_map>

class Node
{
private:
    int data;
    Node *left;
    Node *right;

public:
    Node();
    Node(int data);
    Node(int d, Node *left, Node *right);

    int getData();
    Node *getLeft();
    Node *getRight();

    void setData(int d);
    void setLeft(Node *l);
    void setRight(Node *r);
};

// using String will create a string
using String = std::string;

// using Set will create a unordered set of Node pointers
using Set = std::unordered_set<Node *>;

// using Map will create a unordered map of Node pointer keys and # of occurances
using Map = std::unordered_map<Node *, int>;

/**
    Fixes a given tree if a node in the tree has more than one parent.
    @param n pointer to the root node of a tree
    @param s reference to a set of node pointers    
    @return the pointer to the root node of the fixed tree 
*/
Node *fixTreeSet(Node *n, Set &s);

/**
    Fixes a given tree if a node in the tree has more than one parent.
    @param n pointer to the root node of a tree
    @param m reference to a map of node pointer keys and # of occurances
    @return the pointer to the root node of the fixed tree 
*/
Node *fixTreeMap(Node *n, Map &m);

/**
    Gets the debug string of a given tree.
    @param n pointer to the root node of a tree   
    @return the debug string of a tree 
*/
String getDebugString(Node *n);
#endif