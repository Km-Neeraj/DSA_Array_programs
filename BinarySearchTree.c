#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} BST;


BST* createNode(int value) {
    BST* newNode = (BST*)malloc(sizeof(BST));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}


BST* insert(BST* root, int value) {
    if (root == NULL)
        return createNode(value);

    else 
    {
                         if(value < root->data)
        root->left = insert(root->left, value);
     else
        root->right = insert(root->right, value);
    }
    return root;
}


void inorder(BST* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}


void preorder(BST* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}


void postorder(BST* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    BST* root = NULL;
    int n, value;

    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    
    printf("\nIn-order Traversal: ");
    inorder(root);
    printf("\n");

    printf("Pre-order Traversal: ");
    preorder(root);
    printf("\n");

    printf("Post-order Traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}
