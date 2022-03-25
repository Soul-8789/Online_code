#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pi;
#define F first 
#define S second
 #define PB push_back
 #define MP make_pair

#define REP(i,a,b) for (int i = a; i <=b; i++)

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll l,r,a;
        cin>>l>>r>>a;
         ll mx;
           
            mx=floor(r/a) +(r-l)%a;
        if(l>a){
        cout<< mx-1<<"\n";
        }    
        else{
        cout<< mx+1<<"\n";
          }
    }
    return 0;

}