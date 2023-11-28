//
//  main.cpp
//  red-black-tree
//
//  Created by Yassaman Ommi on 2018-11-27.
//

#include <iostream>
#include "RedBlackTree.h" // Assume the RedBlackTree class implementation is in RedBlackTree.h

int main() {
    RedBlackTree tree;

    // Insert nodes into the tree
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(12);
    tree.insert(18);

    std::cout << "Red-Black Tree structure:" << std::endl;
    tree.printTree();

    // Remove a node from the tree
    tree.remove(5);
    std::cout << "\nAfter deleting node 5:" << std::endl;
    tree.printTree();

    return 0;
}

