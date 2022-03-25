#include<bits/stdc++.h>
using namespace std;
//str.length
void decitobina(string str)
{
	//string num=str;
	int base=1;
	int ans =0;
	int n=str.length();
	for(int i=n-1;i>=0;i--)
	{
		ans =ans+((int)(str[i]-'0')*base);
		base =base*2;
	}
	cout<< ans;

}



int main()
{
string str;
cin>> str;
decitobina(str);
return 0;
}