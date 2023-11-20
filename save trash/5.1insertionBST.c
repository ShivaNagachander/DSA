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

int main()
{
    struct node *ptr=NULL;
    int element;
    int ch;
	while(1){
    printf ("enter choice 1:insertion | 2.display inorder traversal | | 3:Exit: ");
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

