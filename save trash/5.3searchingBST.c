#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insertion(struct node *ptr, int element);
void inOrderTraversal(struct node *ptr);
struct node *search(struct node *ptr, int key);

int main()
{
    struct node *ptr = NULL;
    int element;
    int ch;
    int searchKey;

    while (1)
    {
        printf("enter choice 1:insertion | 2.display inorder traversal | 3: Search | 4: Exit: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element:");
            scanf("%d", &element);
            ptr = insertion(ptr, element);
            break;
        case 2:
            inOrderTraversal(ptr);
            printf("\n");
            break;
        case 3:
            printf("Enter element to search: ");
            scanf("%d", &searchKey);
            if (search(ptr, searchKey) != NULL)
            {
                printf("Element found in the tree.\n");
            }
            else
            {
                printf("Element not found in the tree.\n");
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }
}

struct node *insertion(struct node *ptr, int element)
{
    if (ptr == NULL)
    {
        ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = element;
        ptr->left = NULL;
        ptr->right = NULL;
    }
    else if (element < ptr->data)
    {
        ptr->left = insertion(ptr->left, element);
    }
    else if (element > ptr->data)
    {
        ptr->right = insertion(ptr->right, element);
    }
    else
    {
        printf("data exists\n");
    }
    return ptr;
}

// inorder traversal
void inOrderTraversal(struct node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    inOrderTraversal(ptr->left);
    printf("%d ", ptr->data);
    inOrderTraversal(ptr->right);
}

// search
struct node *search(struct node *ptr, int key)
{
    if (ptr == NULL || ptr->data == key)
    {
        return ptr;
    }

    if (key < ptr->data)
    {
        return search(ptr->left, key);
    }

    return search(ptr->right, key);
}
