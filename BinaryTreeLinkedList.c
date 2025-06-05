#include<stdio.h>
#include <stdlib.h>

// Structure for defining a Node in a Binary Tree
struct Node {
    int data; // Data stored in the node
    struct Node* left; // Pointer to the left child node
    struct Node* right; // Pointer to the right child node
};

// Function to create a new node in the Binary Tree
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node)); // Allocate memory for a new node
    node->data = data; // Assign the data to the new node
    node->left = NULL; // Initialize left child as NULL
    node->right = NULL; // Initialize right child as NULL
    return node; // Return the new node
}

// Function to print the nodes of a Binary Tree in an In-Order traversal manner
void print_In_Order(struct Node* node) {
    if (node == NULL) return; // If the current node is NULL, exit the function

    print_In_Order(node->left); // Recursively traverse the left subtree
    printf("%d ", node->data); // Print the data of the current node
    print_In_Order(node->right); // Recursively traverse the right subtree
}

// Main function to demonstrate In-Order traversal of a Binary Tree
int main() {
    // Create a Binary Tree with some nodes
    struct Node* root = newNode(10); // Root node with data 10
    root->left = newNode(20); // Left child node of the root with data 20
    root->right = newNode(30); // Right child node of the root with data 30
    root->left->left = newNode(40); // Left child of node with data 20 with data 40
    root->left->right = newNode(50); // Right child of node with data 20 with data 50

    printf("Traversal of a binary tree: \n");
    print_In_Order(root); // Print the nodes of the Binary Tree in In-Order traversal

    return 0; // Indicate successful completion of the program
}
