#include<iostream>
#include<vector> 

using namespace std;

int min(int x,int y)
{
   return x<y?x:y;
}
 int T[1000][2000]={{0}};

int subsetsum(vector<int> s,int n,int sum,int T[][2000])
{
    if(n==0 && sum==0)
    return 1;
    
    if(n==0 && sum>0)
    return 0;
    
    if(T[n][sum]==1)
    {
    	return T[n][sum];
	}
    if (sum>=s[n-1])
    {
	T[n][sum]=subsetsum(s,n-1,sum-s[n-1],T) + subsetsum(s,n-1,sum,T);
    return T[n][sum];
	}
	else
	{
		T[n][sum]=subsetsum(s,n-1,sum,T);
		return T[n][sum];
	}

    
    return T[n][sum];
}
int main()
{ 
    int sum;
    cin>>sum;
    
    vector <int> v;
    for(int i=3;i<=sum;i++)
    {  int k=sum/i; 
	   if(k>1)
	   {
	     while(k)
	     {
	     	v.push_back(i);
	     	k--;
		 }
	   }
	   else
	   v.push_back(i);
	}
    int l=v.size();
    
    cout<<subsetsum(v,l,sum,T);
  
}
