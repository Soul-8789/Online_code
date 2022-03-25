#include<bits/stdc++.h>
using namespace std;
int fib(int n,int dp[])
{
	if(n==0|| n==1)
		{
			return n;  
		}
    if(dp[n]!=0){
    	return dp[n];
    }
	int ans;
	ans =fib(n-1,dp)+fib(n-2,dp );
	return dp[n]=ans;
}
int fibBU(int n)
{
	int dp[100]={0};
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int fibspaceopti(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
int a=0;int b=1;
int c;
for(int i=2;i<=n;i++)
{
	c=a+b;
	a=b;
	b=c;
}
return c;
}
int minsteps(int n,int dp[])
{
	//basecase
	if(n==1){
		return 0;
	}
	//Rec case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	//look up approach
	if(dp[n]!=0)
		{
			return dp[n];
		}
    if(n%3==0){
    	op1=minsteps(n/3,dp)+1;
    }
    if(n%2==0)
    {
    	op2=minsteps(n/2,dp)+1;
    }
    op3=minsteps(n-1,dp)+1;
    int ans=min(min(op1,op2),op3);
    return dp[n]=ans;
}

int minstepsBU(int n){
 int dp[100]={0};
 dp[1]=0;
 for(int i=2;i<=n;i++)
 {
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
  
    if(n%3==0){
    	op1=dp[i/3];
    }
    if(n%2==0)
    {
    	op2=dp[i/2];
    }
    op3=dp[i-1];
    dp[i]=min(min(op1,op2),op3)+1;
}
    return dp[n];

 }

int main()
{
	int n;
	cin>> n;
	int dp[100]={0};
	cout<<minsteps(n,dp)<<"\n" ;
	cout<< minstepsBU(n);
	//cout<<fibspaceopti(n);
	//cout<< fib(n,dp)<<"\n";
	//cout<< fibBU(n)<<"\n";
	return 0; 
}