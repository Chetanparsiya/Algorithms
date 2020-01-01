#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void Heapify(int a[],int n,int i)
{
	int largest=i;
	int leftChild=2*i+1;//Computing Left Child
	int rightChild=2*i+2;//Computing Right Child
	if(leftChild<n&&a[leftChild]>largest)//if LeftChild is Greater than Root
	largest=leftChild;
	if(rightChild<n&&a[rightChild]>largest)//if RightChild is Greater than Root
	largest=rightChild;
	if(largest!=i)//if the Largest is Changed
	{
	swap(a[largest],a[i]);
	Heapify(a,n,largest);
}}
void Heap_Sort(int a[],int n)
{	int i;	
for(i=n/2-1;i>=0;i--)//Starting from the non-leaves root
	Heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(a[i],a[0]);
		Heapify(a,i,0);
	}

}

int main()
{
	int i,n;
	cout<<"Enter the Number of Elements    : ";	
	cin>>n;//input for the number
	int a[n];
	cout<<"Enter the Element               : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];//taking array input
	}
	Heap_Sort(a,n);//Heap Sort Function
	cout<<"After Sorting the Elements are  : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
}
