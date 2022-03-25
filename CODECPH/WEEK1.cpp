#include<bits/stdc++.h>
using namespace std;
void filterchars(int n,char c[])
{
	int j=0;
	while (n>0)
	{
		int lastbits=(n & 1);
		
		if(lastbits==1){
			cout<<c[j];
		}
		j++;
		n=n>>1;   
	}
}


void generatesubs(char c[])
{
	int n=strlen(c);
	for(int i=0;i<(i << n);i++)
	{
		filterchars(i,c);
	}
	return;
}

int main()
 {
 	char c[100];
 	cin>> c;
 	generatesubs(c);
 	return 0;
 }