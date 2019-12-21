#include<iostream>
using namespace std;
void swap(int &a,int &b)//swapping using call by reference
{
	int temp=b;
	b=a;
	a=temp;
}
void Bubble_Sort(int a[],int n)//Bubble sort Logic
{	int i,j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}	
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
	Bubble_Sort(a,n);//Bubble Sort Function
	cout<<"After Sorting the Elements are  : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
}
