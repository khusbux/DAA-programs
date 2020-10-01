#include<bits/stdc++.h>
using namespace std;
void swap(int *x ,int *y)
{
	int temp=*x;
	*x = *y;
	*y = temp;
}
void printArray(int *a, int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
void SelectionSort(int *a , int n)
{
	int i,j,min;
	for(i =0;i<=n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				swap(&a[min],&a[j]);
			}
		}
	}
}

int main()
{
	int a[]={14,33,10,35,19,42,44},n;
	n= sizeof(a)/sizeof(a[0]);
	printArray(a,n);
	SelectionSort(a, n);
	printArray(a,n);
}
