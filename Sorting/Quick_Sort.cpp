#include<iostream>
using namespace std;
int partition(int a[],int first,int last)//Quick sort Logic
{	
	int pivot=a[first];
	int k=first-1;
	for(int i=first;i<=last;i++)
	{
		if(a[i]<pivot)
		{
			k++;
			swap(a[k],a[i]);
		}
	}
	swap(a[++k],pivot);
	return k;
}
void Quick_Sort(int a[],int first,int last)
{
	if(first<last)
	{
		int pos=partition(a,first,last);
		Quick_Sort(a,first,pos-1);//Recursively Calling the Function
		Quick_Sort(a,pos+1,last);//Recursively Calling the Function
		
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
	Quick_Sort(a,0,n-1);//Merge Sort Function
	cout<<"After Sorting the Elements are  : ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
}
