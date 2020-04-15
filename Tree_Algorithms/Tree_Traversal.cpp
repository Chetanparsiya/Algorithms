#include<bits/stdc++.h>
using namespace std;

struct node//node structure
{
	int data;
	struct node *left,*right;
};
struct node *createNode(int item)//Creating the node
{
	struct node *newnode =(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node* temp,int item)//Inserting the node
{	
	if(temp==NULL)
	return createNode(item);
	else {
		if(item<temp->data)
		{
			temp->left=insert(temp->left,item);//if data is less then root it is inserted in left subtree
		}
		else
		temp->right=insert(temp->right,item);//if data is greater then root it is inserted in right subtree
		return temp;
	}
}
void Pre_Order(node *root)//Preorder Traversal (+AB)
{
	if(root!=NULL)
	{	cout<<root->data<<" ";//Recursively printing the value
		Pre_Order(root->left);//Recursively Calling left Subtree
		Pre_Order(root->right);//Recursively Calling Right Subtree
		
	}
}
void Post_Order(node* root)//PostOrder Traversal (AB+)
{
	if(root!=NULL)
	{
		Post_Order(root->left);//Recursively Calling left Subtree
		Post_Order(root->right);//Recursively Calling Right Subtree
		cout<<root->data<<" ";//Recursively Printing the value
	}
}
void In_Order(node* root)//Inorder Traversal (A+B)
{
	if(root!=NULL)
	{
		In_Order(root->left);//Recursively Calling left Subtree
		cout<<root->data<<" ";//Recursively printing the value
		In_Order(root->right);.//Recursively Calling Right Subtree
	}
}
int main()
{	int ch1,data;
	struct node *root=NULL;
	cout<<"Enter the data : ";
	cin>>data;
	
	root=insert(root,data);
	do
	{	
		cout<<"Enter the data : ";
		cin>>data;	
		insert(root,data);
		cout<<"Enter the Choice : ";
		cin>>ch1;
	}while(ch1==1);
	cout<<"Preorder Traversal  : ";Pre_Order(root);cout<<endl;
	cout<<"Postorder Traversal : ";Post_Order(root);cout<<endl;
	cout<<"InOrder Traversal   : ";In_Order(root);cout<<endl;
			cin>>ch1;
}

