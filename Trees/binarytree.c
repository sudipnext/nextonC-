#include <stdio.h>
#include <stdlib.h>

// creating a structure to store bst
struct node
{
    int data;
    struct node *left, *right; /* data */
};

// creating a node
struct node *create(int num)
{
    // memory allocation for the temp
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->left = temp->right = NULL;
}

// insertion of a node
struct node *insert(struct node *root, int num)
{
    if (root == NULL)
    {
        return create(num);
    }
    if (num < root->data)
    {
        root->left = insert(root->left, num);
    }
    else
    {
        root->right = insert(root->right, num);
    }
    return root;
}
// Traversals
// Preorder
struct node *preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d -> ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
// inorder
struct node *inOrder(struct node *root)
{
    if (root != NULL)
    {
        preOrder(root->left);
        printf("%d -> ", root->data);
        preOrder(root->right);
    }
}
struct node *postOrder(struct node *root)
{
    if (root != NULL)
    {
        preOrder(root->left);
        preOrder(root->right);
        printf("%d -> ", root->data);
    }
}
// deleting a node
// first we need a maxm of left or min of right so
struct node *findMin(struct node *root)
{
    struct node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
struct node *delete(struct node *root, int num)
{
    if (root == NULL)
    {
        return root;
    }
    if (num < root->data)
    {
        root->left = delete (root->left, num);
    }
    else if (num > root->data)
    {
        root->right = delete (root->right, num);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, num);

    }
    return root;
}
int main()
{

    struct node *root = NULL;
    root = insert(root, 80);
    root = insert(root, 40);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 60);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 90);
    root = insert(root, 100);
    root = insert(root, 120);

    printf("InOrder Traversal:-\n");
    inOrder(root);
    delete(root, 30);
    printf("\n");
    inOrder(root);
    // preOrder(root);
    // printf("PreOrder Traversal\n");
    // printf("PostOrder Traversal\n");
    // postOrder(root);

    return 0;
}