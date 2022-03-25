#include<bits/stdc++.h>
using namespace std;
#define Max 1000
bool has[Max+1][2];
//in hashing  d s
//search--O(1)
/*
void insert(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0)
		{
			has[arr[i]][0]=1;
		}
		else
			has[arr[i]][1]=1;
	}
}
bool search(int x)
{
	if(x>=0)
	{
		if(has[x][0]==1)
			return true;
		else
			return false;
	}
	else  
	{
		x=abs(x);
		if(has[x][1]==1)
			return true;
		else
			return false;
	}
}
int main()
{
  //key-> hash fuction->hash table creadted
	//how to access
	// key ->  hasing function(some logic) ->get index
 int arr[]={-1,9,2,-5,3,1};
 int n =sizeof (arr)/sizeof(arr[0]);
 insert(arr,n);
 int find = -3;
 if(search(find))
 {
 	cout<< "Element is present"<< endl;
 }     
 else
 {
 	cout<<"Element is not present"<<endl;
 }
return 0;
}
*/
int main()
{
	int n;
	cin>> n;
	  
}