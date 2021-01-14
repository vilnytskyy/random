#include "Node.h"

Node::Node()
{
    data = 0;
    left = nullptr;
    right = nullptr;
}

Node::Node(int data)
{
    this->data = data;
    left = nullptr;
    right = nullptr;
}

Node::Node(int data, Node *l, Node *r)
{
    this->data = data;
    left = l;
    right = r;
}

int Node::getData()
{
    return data;
}

Node *Node::getLeft()
{
    return left;
}

Node *Node::getRight()
{
    return right;
}

void Node::setData(int d)
{
    data = d;
}

void Node::setLeft(Node *l)
{
    left = l;
}

void Node::setRight(Node *r)
{
    right = r;
}

/**
    Fixes a given tree if a node in the tree has more than one parent.
    @param n pointer to the root node of a tree
    @param s reference to a set of node pointers    
    @return the pointer to the root node of the fixed tree 
*/
Node *fixTreeSet(Node *n, Set &s)
{
    // base case
    if (n == nullptr)
    {
        return n;
    }

    // check if the left node pointer of n is already in the set
    if (s.find(n->getLeft()) != s.end() && n->getLeft() != nullptr)
    {
        // remove the edge between n and the left node pointer of n
        n->setLeft(nullptr);
    }
    else
    {
        // recurse through the left node pointer of n and insert result in set s
        s.insert(fixTreeSet(n->getLeft(), s));
    }

    // check if the right node pointer of n is already in the set
    if (s.find(n->getRight()) != s.end() && n->getRight() != nullptr)
    {
        // remove the edge between n and the right node pointer of n
        n->setRight(nullptr);
    }
    else
    {
        // recurse through the right node pointer of n and insert result in set s
        s.insert(fixTreeSet(n->getRight(), s));
    }

    // insert n in set s
    s.insert(n);

    return n;
}

/**
    Fixes a given tree if a node in the tree has more than one parent.
    @param n pointer to the root node of a tree
    @param m reference to a map of node pointer keys and # of occurances
    @return the pointer to the root node of the fixed tree 
*/
Node *fixTreeMap(Node *n, Map &m)
{
    // base case
    if (n == nullptr)
    {
        return n;
    }

    // check if the left node pointer of n is already in the map
    if (m[n->getLeft()] > 0 && n->getLeft() != nullptr)
    {
        // std::cout << "left: " + std::to_string(n->getData()) << std::endl;

        // remove the edge between n and the left node pointer of n
        n->setLeft(nullptr);
    }
    else
    {
        // recurse through the left node pointer of n and insert result in map m
        ++m[fixTreeMap(n->getLeft(), m)];
    }

    // check if the right node pointer of n is already in the map
    if (m[n->getRight()] > 0 && n->getRight() != nullptr)
    {
        // std::cout << "right: " + std::to_string(n->getData()) << std::endl;

        // remove the edge between n and the right node pointer of n
        n->setRight(nullptr);
    }
    else
    {
        // recurse through the right node pointer of n and insert result in map m
        ++m[fixTreeMap(n->getRight(), m)];
    }

    // insert n in map m
    ++m[n];

    return n;
}

/**
    Gets the debug string of a given tree.
    @param n pointer to the root node of a tree   
    @return the debug string of a tree 
*/
String getDebugString(Node *n)
{
    String a{""};
    String b{""};
    String c{""};

    // base case
    if (n == nullptr)
    {
        return "";
    }
    else
    {
        /** 
            postorder traversal
            1. recurse left
            2. recurse right
            3. process the node
        */

        a = getDebugString(n->getLeft());
        b = getDebugString(n->getRight());
        c = std::to_string(n->getData());

        // return the debug string of n
        return a + " , " + b + " , " + c;
    }
}