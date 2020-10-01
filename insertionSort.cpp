#include<bits/stdc++.h>
#include<ctime>
using namespace std;
void swap(int *x , int *y)
{
	int temp;
	temp = *x;
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
void InsertionSort(int *a , int n)
{
	int i,j,koo;
	for(int i=1; i<n;i++)
	{
		koo = i;
		for(int j=i-1; j>=0;j--)
		{
			if(a[koo]<a[j])
			{
				swap(&a[koo],&a[j]);
				koo = j;
			}
			else
				break;
		}
	}	
}
int main()
{
	int a[]={12,11,13,5,6},n;
	n= sizeof(a)/sizeof(a[0]);
	printArray(a,n);
	InsertionSort(a, n);
	printArray(a,n);
}
