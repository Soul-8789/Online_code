#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	int x;
	cin>> n>>x;
	for(int i=0;i<x;i++)
		{
			int rem=n%10;
			if(rem==0)
			{
				n=n/10;
			}
			else
				n=n-1;
		}
		cout<< n;
		return 0;

}