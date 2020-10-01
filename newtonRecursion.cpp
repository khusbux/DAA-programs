#include<bits/stdc++.h>
using namespace std;
int include, exclude;
int subsetSum(int arr[],int n,int sum)
{
	if(sum<0 || n<0)
		return 0;
	if(sum == 0)
		return 1;
	return subsetSum(arr, n-1,sum-arr[n] ) + subsetSum(arr, n-1,sum );
}
void printArray(int arr[],int n)
{
	for(int i = 0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}
int main()
{
	
	int arr[] = {3,3,4,4,5,6,7,8};
	printArray(arr, 8);
	int res = subsetSum(arr,8,8);
	cout<<res;
}
