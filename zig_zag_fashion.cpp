#include<iostream>
using namespace std;
int x,y;
void swap(int *x ,int *y )
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void zig_zag_fashion(int arr[] , int n)
{
	int flag = 1;
	for(int i=0;i<=n-2;i++)
	{
		if(flag)
		{
			if(arr[i]>arr[i+1])
			swap(&arr[i], &arr[i+1]);
		}
		else
		{
			if(arr[i]<arr[i+1])
			{
				swap(&arr[i],&arr[i+1]);
			}
		}
		flag =!flag;
	}
}
int main()
{
	int n;
	cout<<"enter the number of element:";
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"\nZigzag pattern of the array:";
		zig_zag_fashion(arr,n);
		for(int i =0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
		return 0;
}
