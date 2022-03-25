#include<bits/stdc++.h>
using namespace std;
int powerx(int x,int n)
{
	int result =1;
	while(n>0)
	{
		if(n&1)
			result=result*x;
		n=n/2;
		x=x*x;
	}
	return x;
}
int main()
{
	int x,n;
	cin>> x>>n;
	cout<< powerx(x,n);
	return 0;
}