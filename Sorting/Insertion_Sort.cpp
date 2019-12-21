#include<iostream>
using namespace std;

void Insertion_Sort(int a[],int n)//Insertion sort Logic
{	int temp,i,j;
	
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp=a[i];
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}	
		a[j+1]=temp;
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
	Insertion_Sort(a,n);//Insertion Sort Function
	cout<<"After Sorting the Elements are  : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
