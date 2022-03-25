#include<bits/stdc++.h>
using namespace std;
void count_frequency(int arr[],int n)
{
  	unordered_map<int,int> mp;
  	for(int i=0;i<n;i++)
  		mp[arr[i]]++;
  	for(auto x:mp)
  		cout<< x.first<< " "<< x.second<<endl;
}
void print_arr(int arr[],int n)
{
	for(auto i=0;i<n;i++)
	{
		cout<< arr[i]<<" ";

	}
	cout<< endl;
}

int main()
{
    int n,x,pos;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
   { 
   cin>>arr[i];
   }
print_arr(arr,n);
 count_frequency(arr,n);
	return 0;
}

