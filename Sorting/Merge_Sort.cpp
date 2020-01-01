#include<iostream>
using namespace std;
void Merge(int a[],int first,int mid,int last)//Merge sort Logic
{	int n1=mid-first+1,n2=last-mid;
	int Left[n1+1],Right[n2+1];
	int i ,j,k;
	for(i=0;i<n1;i++)
	Left[i]=a[first+i];
	for(i=0;i<n2;i++)
	Right[i]=a[mid+i+1];
	Left[n1]=10000;
	Right[n2]=10000;
	i=0;
	j=0;
	
	for(k=first;k<=last;k++)	//Merging Step
	{
		if(Left[i]<Right[j])
		{
		a[k]=Left[i];i++;
		}
		else
		{
		a[k]=Right[j];
		j++;
		}
	
	}
		
}
void Merge_Sort(int a[],int first,int last)
{
	if(first<last)
	{
		int mid=(first+last)/2;
		Merge_Sort(a,first,mid);//Recursively Calling the Function
		Merge_Sort(a,mid+1,last);//Recursively Calling the Function
		Merge(a,first,mid,last);//Merging the Function
	}
	return ; 
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
	Merge_Sort(a,0,n-1);//Merge Sort Function
	cout<<"After Sorting the Elements are  : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
}
