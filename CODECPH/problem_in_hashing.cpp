#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
/*
int main()
{
	int n;
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>> arr[i];
	}
	unordered_map<int,int>up;
	for(int i=0;i<n;i++)
	{
		up[arr[i]]++;//int key=arr[i];  up[key]++;
	}

	for(int i=0;i<n;i++)
	{
		int key =arr[i];
		auto temp=up.find(key);
		if(temp->second==1){
		cout<< key;
	     }

     }

//cout<< "0";
return 0;
}
*/
int main()
{
	int n;
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>> arr[i];
	}
	unordered_map<int,int> up;
	for(int i=0;i<n;i++)
	{
		up[arr[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		int key=arr[i];
		auto temp=up.find(key);
		if(temp->second >1)
		   cout<<i+1<<"\n"; 
	}
	cout<< "-1";
return 0;	
}