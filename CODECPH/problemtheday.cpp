#include<bits/stdc++.h>
using namespace std;
long long findRank(string str) {
        //code here
        int cnt=0;
         string s(str);
         sort(s.begin(), s.end());  
         cout<< s<<" "<<str<<"\n";
      while(1){ 
      cnt++; 
       	if(s==str)
      	{
      	
      		break;
      	}
      	else{
      		
         next_permutation(s.begin(), s.end());
     }
         cout<< s<< " "<< str<<"\n";
       } 
    return cnt;
    }
int main()
{
	string str;
	cin>> str;
	cout<< findRank(str);
	return 0;
}