#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int *temp = x;
	x = y;
	y= temp;
}
void sort(int arr[],int p)
{
	int i,j;
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			if(arr[i]<arr[j])
			{
				swap(arr[i],arr[j]);
			}
		}
	}
}
int merge_array(int arr1[],int arr2[], int arr3[],int m,int n)
{

	for(int i=0;i<m;i++)
    {
		arr3[i] = arr1[i];
    }
	for(int i =0;i < m+n;i++)
	{
		arr3[i+m] = arr2[i];
	}
}
int main()
{
	int m,n;
	cout<<"enter the size of array 1:";
	cin>>m;
	cout<<"enter the size of array 2:";
	cin>>n;
	int arr1[m],arr2[n];
	int arr3[m+n],i;
	cout<<"enter the input of array 1:";
	for(i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter the input of array 2:";
	for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	merge_array(arr1,arr2,arr3,m,n);
	cout<<"the merge sort array is :";
	sort(arr3,m+n);
	for(i=0;i<n+m;i++)
	{
		cout<<arr3[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
