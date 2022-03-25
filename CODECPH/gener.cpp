#include<bits/stdc++.h>
using namespace std;
void printpermutation(string s,string ans)
{
	if(s.length()==0)
	{
		cout<< ans<<"\n";
		return;
	}
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		string ros=s.substr(0,i)+s.substr(i+1);

		printpermutation(ros,ans+ch);
	}

}
int countpath(int s,int e)
{
	if(s==e)
	{
		return 1;
	}
	if(s>e)
	{
		return 0;
	}
	int cnt=0;
	for(int i=1;i<=6;i++)
	{
	cnt+=countpath(s+i,e);
     }
     return cnt;
}
int countmaze(int n,int i,int j)
{
	if(i==n-1 && j==n-1)
	{
		return 1;
	}
	if(i>=n ||j>=n)
	{
		return 0;
	}

	 return countmaze(n,i+1,j)+countmaze(n,i,j+1);
}
int tilingproblem(int n){
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	return tilingproblem(n-1)+tilingproblem(n-2);
}
 int friendspairing(int n)
 {
 	if(n==0 || n==1||n==2)
 	{
          return n;
 	}
 	return  friendspairing(n-1)+friendspairing(n-2)*(n-1);
 }
 int knapsack(int value[],int wt[],int n,int W)
 {
 	if(n==0||W==0)
 	{
 		return 0;
 	}
 	if(wt[n-1]>W)
 	{
 		return knapsack(value,wt,n-1,W);
 	}

 
 return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
 } 






 int main()
 {
   
   
   //cout<< knapsack(value,wt,3,W);

   //cout<<friendspairing(4);

   //cout<< tilingproblem(4);
   //cout<<countmaze(3,0,0);

   //cout<< countpath(0,3);
  // printpermutation(s,ans);
   return 0;
 }