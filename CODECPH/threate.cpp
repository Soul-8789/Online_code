#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        sort(arr,arr+n);
        cout<< arr[n-1]-arr[0];
    }
    return 0;
}