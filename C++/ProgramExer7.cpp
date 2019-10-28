#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct btree
{
    struct btree *left;
    struct btree *right;
    int no;
};
void postorder(struct btree *trav);
void inorder(struct btree *trav);
void preorder(struct btree *trav);
struct btree * create(struct btree *trav);
main()
{
    struct btree *root=NULL;
    char c;
    while(1)
    {
        root=create(root);
        cout<<"Do you want to continue : ";
        cin>>c;
        if(c=='n' ||c=='N')
            break;
    }
    cout<<endl<<"Inoder is    : ";inorder(root);
    cout<<endl<<"Preorder is  : ";preorder(root);
    cout<<endl<<"Postorder is : ";postorder(root);
    getch();
}
struct btree * create(struct btree *trav)
{
    if(trav==NULL)
    {
        trav=new btree;
        trav->right=NULL;
        trav->left=NULL;
        cout<<"Enter the no : ";
        cin>>trav->no;
        return(trav);
    }
    char choice;
    cout<<"Enter the left or right child : ";
    cin>>choice;
    if(choice == 'r' || choice == 'R')
    {
        trav->right=create(trav->right);
    }
    if(choice=='l' || choice=='L')
    {
        trav->left=create(trav->left);
    }
    return(trav);
}
void inorder(struct btree *trav)
{
	if(trav != NULL)
	{
		inorder(trav->left);
		cout << trav->no;
		inorder(trav->right);
	}
}
void preorder(struct btree *trav)
{
	if(trav != NULL)
	{
		cout << trav->no;
		preorder(trav->left);
		preorder(trav->right);
	}
}
void postorder(struct btree *trav)
{
	if(trav != NULL)
	{
		postorder(trav->left);
		postorder(trav->right);
		cout << trav->no;
	}
}

