#include<iostream>
using namespace std;

struct mytime{
	int h=0,m=0,s=0;
};

mytime gettime(mytime t)
{
	cin>>t.h>>t.m>>t.s;
	return t;
}

mytime addtime(mytime t1, mytime t2)
{
	mytime anj;
	if((t1.s+t2.s)>=60)
	{
		anj.s=(t1.s+t2.s)-60;
		t1.m=t1.m+1;
	}
	else
	{
		anj.s=t1.s+t2.s;
	}
	if(t1.m+t2.m>=60)
	{
		anj.m=(t1.m+t2.m)-60;
		t1.h = t1.h+1;
	}
	else
	{
		anj.m = t1.m+t2.m;
	}
	anj.h = t1.h+t2.h;
	
	return anj;
}
int main()
{
	mytime tm[5];
	mytime t;
	for(int i=0; i<5; i++)
	{
		tm[i] = gettime(tm[i]);
	}
	for(int i=0;i<5;i++)
	{
		t = addtime(t,tm[i]);
	}
	cout<<t.h<<":"<<t.m<<":"<<t.s;
	
}
