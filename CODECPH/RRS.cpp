#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long n;
    cin>> n;
    vector<long long> v;
    if(n==1 || n==2||n==3 || n==4||n==5 || n==6||n==7 || n==8||n==9 || n==0){
            cout<< n;
            return 0;
        }
        else
        {
    while(n>0)
    {

        int rem=0;
        rem=n%10;
        if(rem<5)
        {
            v.push_back(rem);
        }
        else{
            v.push_back(9-rem);
        }
        n/=10;
        }
    }
    for(int i=v.size()-1;i>=0;i--)
    {
       if(v[v.size()-1]==0)
       {
        cout<<'9';
       }
       else
        cout<<v[i];
    }
    return 0;
}