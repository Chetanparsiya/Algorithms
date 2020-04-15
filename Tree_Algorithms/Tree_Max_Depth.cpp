#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};
struct node *createNode(int item)
{
	struct node *newnode =(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node* temp,int item)
{	
	if(temp==NULL)
	return createNode(item);
	else {
		if(item<temp->data)
		{
			temp->left=insert(temp->left,item);
		}
		else
		temp->right=insert(temp->right,item);
		return temp;
	}
}
int Max_depth(struct node* node)
{
	if(node==NULL) return 0;
	else 
	{
		int ldepth=Max_depth(node->left);
		int rdepth=Max_depth(node->right);
		if(ldepth>rdepth) return ldepth+1;
		else return rdepth+1;
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
	cout<<"Maximum Depth of Tree : "<<Max_depth(root)<<endl;
}
