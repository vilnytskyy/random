#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest.h"

#include "Node.h"

TEST_CASE("Example 1 - Set")
{
    // Example 1 - Node (e) with two parents (b and c)
    std::cout << "Example 1:\n\n";

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(e);

    a->setLeft(b);
    a->setRight(c);

    std::cout << "Org: " + getDebugString(a) << std::endl;

    Set helperSet;

    std::cout << "Set: " + getDebugString(fixTreeSet(a, helperSet)) << std::endl;
}

TEST_CASE("Example 1 - Map")
{
    // Example 1 - Node (e) with two parents (b and c)

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(e);

    a->setLeft(b);
    a->setRight(c);

    Map helperMap;

    std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}

TEST_CASE("Example 2 - Set")
{
    // Example 2 - Node (e) with two parents (b and c) but is both the left and right child of one parent (c)
    std::cout << "\nExample 2:\n\n";

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(e);
    c->setRight(e);

    a->setLeft(b);
    a->setRight(c);

    std::cout << "Org: " + getDebugString(a) << std::endl;

    Set helperSet;

    std::cout << "Set: " + getDebugString(fixTreeSet(a, helperSet)) << std::endl;
}

TEST_CASE("Example 2 - Map")
{
    // Example 2 - Node (e) with two parents (b and c) but is both the left and right child of one parent (c)

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(e);
    c->setRight(e);

    a->setLeft(b);
    a->setRight(c);

    Map helperMap;

    std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}

TEST_CASE("Example 3 - Set")
{
    // Example 3 - Node (e) with three parents (b, c, d)
    std::cout << "\nExample 3:\n\n";

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    
    d->setLeft(e);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(e);

    a->setLeft(b);
    a->setRight(c);

    std::cout << "Org: " + getDebugString(a) << std::endl;

    Set helperSet;

    std::cout << "Set: " + getDebugString(fixTreeSet(a, helperSet)) << std::endl;

    // Map helperMap;

    // std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}

TEST_CASE("Example 3 - Map")
{
    // Example 3 - Node (e) with three parents (b, c, d)

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    
    d->setLeft(e);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(e);

    a->setLeft(b);
    a->setRight(c);

    Map helperMap;

    std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}

TEST_CASE("Example 4 - Set")
{
    // Example 4 - Node (h) with four parents (d, e, f, g) and each parent has both left and right children as (h) 
    std::cout << "\nExample 4:\n\n";

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    Node *h = new Node(8);

    d->setLeft(h);
    d->setRight(h);

    e->setLeft(h);
    e->setRight(h);

    f->setLeft(h);
    f->setRight(h);

    g->setLeft(h);
    g->setRight(h);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(f);
    c->setRight(g);

    a->setLeft(b);
    a->setRight(c);

    std::cout << "Org: " + getDebugString(a) << std::endl;

    Set helperSet;

    std::cout << "Set: " + getDebugString(fixTreeSet(a, helperSet)) << std::endl;
}

TEST_CASE("Example 4 - Map")
{
    // Example 4 - Node (h) with four parents (d, e, f, g) and each parent has both left and right children as (h) 

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    Node *h = new Node(8);

    d->setLeft(h);
    d->setRight(h);

    e->setLeft(h);
    e->setRight(h);

    f->setLeft(h);
    f->setRight(h);

    g->setLeft(h);
    g->setRight(h);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(f);
    c->setRight(g);

    a->setLeft(b);
    a->setRight(c);

    Map helperMap;

    std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}
    
TEST_CASE("Example 5 - Set")
{
    // Example 5 - Nodes (h, i) with four parents (d, e, f, g) and each left child is (h) and each right child is (i)
    std::cout << "\nExample 5:\n\n";

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    Node *h = new Node(8);
    Node *i = new Node(9);


    d->setLeft(h);
    d->setRight(i);

    e->setLeft(h);
    e->setRight(i);

    f->setLeft(h);
    f->setRight(i);

    g->setLeft(h);
    g->setRight(i);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(f);
    c->setRight(g);

    a->setLeft(b);
    a->setRight(c);

    std::cout << "Org: " + getDebugString(a) << std::endl;

    Set helperSet;

    std::cout << "Set: " + getDebugString(fixTreeSet(a, helperSet)) << std::endl;
}

TEST_CASE("Example 5 - Map")
{
    // Example 5 - Nodes (h, i) with four parents (d, e, f, g) and each left child is (h) and each right child is (i)

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    Node *h = new Node(8);
    Node *i = new Node(9);


    d->setLeft(h);
    d->setRight(i);

    e->setLeft(h);
    e->setRight(i);

    f->setLeft(h);
    f->setRight(i);

    g->setLeft(h);
    g->setRight(i);

    b->setLeft(d);
    b->setRight(e);

    c->setLeft(f);
    c->setRight(g);

    a->setLeft(b);
    a->setRight(c);

    Map helperMap;

    std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}

TEST_CASE("Example 6 - Set")
{
    // Example 6 - The input tree is already a binary tree
    std::cout << "\nExample 6:\n\n";

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    c->setLeft(f);
    c->setRight(g);

    b->setLeft(d);
    b->setRight(e);

    a->setLeft(b);
    a->setRight(c);

    std::cout << "Org: " + getDebugString(a) << std::endl;

    Set helperSet;

    std::cout << "Set: " + getDebugString(fixTreeSet(a, helperSet)) << std::endl;

    // Map helperMap;

    // std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}

TEST_CASE("Example 6 - Map")
{
    // Example 6 - The input tree is already a binary tree

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    c->setLeft(f);
    c->setRight(g);

    b->setLeft(d);
    b->setRight(e);

    a->setLeft(b);
    a->setRight(c);

    Map helperMap;

    std::cout << "Map: " + getDebugString(fixTreeMap(a, helperMap)) << std::endl;
}