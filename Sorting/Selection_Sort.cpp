#include<iostream>
using namespace std;
void swap(int &a,int &b)//swapping using call by reference
{
	int temp=b;
	b=a;
	a=temp;
}
void Selection_Sort(int a[],int n)//Selection sort Logic
{	int i,j,min;
	
	for(i=0;i<n;i++)
	{	min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		swap(a[min],a[i]);	
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
	Selection_Sort(a,n);//Selection Sort Function
	cout<<"After Sorting the Elements are  : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
}
