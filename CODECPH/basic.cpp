#include<bits/stdc++.h>
using namespace std;
int transition(int arr[],int n)
{
	int l=0;
	int e=n-1;
	while(l<=e){
	int m=(e+l)/2;
	if(arr[m]==0 || arr[m+1]==1)
		return m;
	else if (arr[m]==1)
	{
		if(arr[m-1]==0)
		{
			return m-1;
		}
	} 
    else
    	continue;
    }
}
int main()
{

int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>> arr[i];
}
return 0;
}