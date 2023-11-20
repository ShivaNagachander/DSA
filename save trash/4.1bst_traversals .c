#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
}*ptr;
struct node* insert(struct node* ,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void main()
{
    int ch=1,res;
    ptr=NULL;
    int x;
    while(ch!=3)
    {
        printf("Enter 1 to insert an element\n");
        printf("Enter 2 to display\n");
        printf("Enter 3 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter element :\n");
                    scanf("%d",&x);
                    ptr=insert(ptr,x);
                    break;
            case 2: printf("Inorder Traversal of Resultant Tree\n");
                    inorder(ptr);
                    printf("\n");
                    printf("Preorder Traversal of Resultant Tree\n");
                    preorder(ptr);
                    printf("\n");
                    printf("Postorder Traversal of Resultant Tree\n");
                    postorder(ptr);
                    printf("\n");
                    break;
            case 3: exit(0);
            default:printf("Enter a valid Option\n");
        }
    }
}
struct node* insert(struct node* ptr,int x)
{ 
    if(ptr==NULL)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=x;
        ptr->left=NULL;
        ptr->right=NULL;
    }
    else if(x<ptr->data)
    {
        ptr->left=insert(ptr->left,x);
    }
    else if(x>ptr->data)
    {
        ptr->right=insert(ptr->right,x);
    }
    else
    printf("no duplicates allowed\n");
    return (ptr);
}
void inorder(struct node* root) 
{    
    if (root == NULL)
    return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(struct node* root)
{    
    if (root == NULL)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root)
{    
    if (root == NULL)
    return;
    preorder(root->left);
    preorder(root->right);
    printf("%d ",root->data);
}