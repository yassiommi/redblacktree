# Red-Black Tree Implementation in C++

This is a C++ implementation of a Red-Black Tree data structure that provides insertion, removal, and visualization functionalities. The Red-Black Tree is a self-balancing binary search tree that maintains balanced properties, ensuring efficient operations such as insertion, deletion, and searching in O(log n) time complexity.

Note: This implementation provides a basic structure for a Red-Black Tree. It's essential to handle various edge cases and thoroughly test the functionalities when using this code in real-world applications.

## Usage

1. Clone or download the repository containing the Red-Black Tree C++ code.
2. Ensure you have a C++ compiler installed to build and run the code.
3. Include the `RedBlackTree.h` file in your project where you need to use a Red-Black Tree data structure.
4. Use the provided `RedBlackTree` class to create a Red-Black Tree object, insert nodes, remove nodes, and visualize the tree structure.

## Functionality

### Red-Black Tree Operations

- **Insertion**: Use the `insert()` method to add nodes to the Red-Black Tree.
- **Removal**: Utilize the `remove()` method to delete nodes from the Red-Black Tree.
- **Visualization**: The `printTree()` function can be used to display the current structure of the Red-Black Tree.

## Example

Here's an example of how to use the Red-Black Tree implementation:

```cpp
#include <iostream>
#include "RedBlackTree.h"

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
```

The output will be:

```
Red-Black Tree structure:

          18(RED)

     15(BLACK)

          12(RED)

10(BLACK)

          7(RED)

     5(BLACK)

          3(RED)

After deleting node 5:

          18(RED)

     15(BLACK)

          12(RED)

10(BLACK)

     7(BLACK)

          3(RED)
Program ended with exit code: 0
```
