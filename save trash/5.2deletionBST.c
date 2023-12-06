#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*ptr;

struct node *insertion(struct node*ptr,int element);
void inOrderTraversal(struct node *ptr);
struct node *deleteNode(struct node *ptr, int element);
struct node *minValueNode(struct node *ptr);

int main()
{
    struct node *ptr=NULL;
    int element;
    int ch;
	while(1){
    printf ("enter choice 1:insertion | 2.display inorder traversal | | 3: Delete Element | 4: Exit: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
           printf ("enter element:");
           scanf("%d",&element);
           ptr=insertion(ptr,element);
           break;
        case 2:
            inOrderTraversal(ptr);
            printf("\n");
            break;
        case 3:
            printf("Enter element to delete: ");
            scanf("%d", &element);
            ptr = deleteNode(ptr, element);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
    }
}
}
//insertion
struct node *insertion(struct node *ptr,int element)
{
    if(ptr == NULL)
    {
       ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=element;
       ptr->left=NULL;
       ptr->right=NULL;
    }
    else if(element < ptr->data)
    {
        ptr->left=insertion(ptr->left,element); 
    }
    else if(element > ptr->data)
    {
        ptr->right=insertion(ptr->right,element);
    }
    else
    {
    printf("data exists\n");
    }
	return ptr;
}
//inorder traversal
void inOrderTraversal(struct node *ptr)
{
    if (ptr == NULL) {
        return;
    }
    inOrderTraversal(ptr->left);
    printf("%d ", ptr->data);
    inOrderTraversal(ptr->right);
}
//deletion
struct node *deleteNode(struct node *ptr, int element)
{
    if (ptr == NULL) {
        return;
    }
    else if (element < ptr->data) {
        ptr->left = deleteNode(ptr->left, element);
    } else if (element > ptr->data) {
        ptr->right = deleteNode(ptr->right, element);
    } else {
        if (ptr->left == NULL) {
            struct node *temp = ptr->right;
            free(ptr);
            return temp;
        } else if (ptr->right == NULL) {
            struct node *temp = ptr->left;
            free(ptr);
            return temp;
        }
        struct node *temp = minValueNode(ptr->right);
        ptr->data = temp->data;
        ptr->right = deleteNode(ptr->right, temp->data);
    }
    return ptr;
}
//minimum value node
struct node *minValueNode(struct node *ptr)
{
    struct node *current = ptr;

    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}
