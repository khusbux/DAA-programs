#include<bits/stdc++.h>
using namespace std;
void quick(int a[], int n,int beg,int end,int loc)
{
	int left,right,temp;
	left = beg;
	right = end;
	loc = right;
	
	step2 :
		while(a[loc]<a[right] && loc!=right)
		{
			right--;
		}
		if(loc == right)
		{
			return;
		}if(a[loc]>a[right])
		{
			temp = a[loc];
			a[loc] = a[right];
			a[right] = temp;
			loc = right;
		}
	
 	goto step3;
	step3:
	 	while(a[left]<a[loc] && left!=loc)
	 	{
	 		left--;
		}
		if(loc == left)
		{
			return;
		}
		if(a[loc]<a[left])
		{
			temp = a[left];
			a[left]= a[loc];
			a[loc] = temp;
			loc = left;
		}
	goto step2;
}
void quickSort(int a[],int n)
{
	int beg=0,end, top=-1,loc=n-1;
	int lower[10],upper[10];
	if(n>1)
	{
		top++;
		lower[top]= 0;
		upper[top]=n-1;
		
	}
	while(top!=-1)
	{
		beg = lower[top];
		end = upper[top];
		top--;
		quick(a,n,beg,end,loc);
		if(beg<loc-1)
		{
			top++;
			lower[top] = beg;
			upper[top]=loc-1;
		}
		if(loc+1<end)
		{
			top++;
			lower[top]=loc+1;
			upper[top]= end;
		}	
	}
}
int main()
{
	int a[] = {44,33,11,55,77,90,60,40,22,88,66};
	quickSort(a,11);
	for(int i = 0;i<=10;i++)
	{
		cout<<a[i]<" ";
	}
}
