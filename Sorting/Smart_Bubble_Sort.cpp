#include<iostream>
using namespace std;
void swap(int &a,int &b)//swap using call by reference
{
	int temp=b;
	b=a;
	a=temp;
}
void Smart_Bubble_Sort(int a[],int n)
{	int i,j;
	bool swapped=true;//idea for smart bubble sort
	for(i=0;i<n-1;i++)
	{	
		for(j=0;j<n-i-1;j++)
		{	
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				swapped=false;
			}
			
		}	
		/*if element does'nt get swapped then they are in 
			there correct relative position*/
		if(swapped)
		break;
	}
}
int main()
{
	int i,n;
	cout<<"Enter the Number of Element     : ";
	cin>>n;//input for the number
	int a[n];
	cout<<"Enter the Element               : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];//taking array input
	}
	cout<<"After Sorting the Elements are  : ";
	Smart_Bubble_Sort(a,n);//Function calling for bubble sort
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
}
