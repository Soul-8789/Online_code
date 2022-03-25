#include<bits/stdc++.h>
using namespace std;
long long findRank(string str) {
        //code here
        int cnt=0;
         string s(str);
         sort(s.begin(), s.end());  
      while(1){  
      	if(s==str)
      	{
      		cnt++;
      		break;
      	}
         next_permutation(s.begin(), s.end());
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