#include<bits/stdc++.h>
using namespace std;
void print_power_set(string str)
{
	int n=str.length();
	int powsize=pow(2,n);
	for(int counter=0;counter<powsize;counter++)
	{
		for(int j=0;j<n;j++)
		{
			if(counter&(1<<j)!=0)
				cout<< str[j];
		}
		cout<<"\n";
	}
}
int main()
{
	string str;
	cin>> str;
print_power_set(str);
return 0;
}