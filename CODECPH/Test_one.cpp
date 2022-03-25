#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 int target,count=0;
 cin>> target;
 int arr[7];
 for(int i=0;i<7;i++)
 {
    cin>>arr[i];
 }
for(int i=0;i<7;i++){
    if(arr[i]>=target)
    {
        count++;
        break;
    }
    else
    {
       
        target=target-arr[i];
         count++;
    }

}
cout<< count<<endl;
return 0;
 }