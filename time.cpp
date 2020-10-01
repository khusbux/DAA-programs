#include<iostream>
using namespace std;
struct anjtime
{
	int h,m,s
	string s
}
void timeDiff(int h1, int m1,int s1,int h2, int m2, int s2)
{
	int h,m,s;
	if(s1<s2)
	{
		m=m-1;
		s1=s1+60;
		s= s1-s2;
	}
	else
	{
		s = s1- s2;
	}
	if(m1<m2)
	{
		h=h-1;
		m1=m1+60;
		m= m1-m2;
	}
	else
	{
		m = m1- m2;
	}
	h = h1-h2;
	
	 cout<<h<<":"<<m<<":"<<s;
}
int main()
{
	int a,b,c,p,q,r;
	cin>>a>>b>>c>>p>>q>>r;
	timeDiff(a,b,c,p,q,r);
	
}

