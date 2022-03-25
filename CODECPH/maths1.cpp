#include<bits/stdc++.h>
using namespace std;
/*
void multiply(int *a,int &n,int no)
{
int carry=0;
for(int i=0;i<n;i++)
{
	int product =a[i]*no +carry;
	a[i]=product%10;
	carry=product/10;
}
while(carry)
{
	a[n]=carry%10;
	carry=carry/10;
	n++;
}
}
void big_factorial(int number)
{
	int  *a = new int[1000];
	for(int i=0;i<1000;i++)
	{
		a[i] = 0;
	}
	 a[0]=1;
	int n = 1;
	for(int i=2;i<=number;i++)
	{
		multiply(a,n,i);
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<< a[i];
	}
	delete [] a;
	return ;
}
*/


/*
int main()
{
	
	int n;
	cin>> n;
	while(n--)
	{
      int l;
      cin>> l;
      string s;
      cin>> s;
      int count=0;
      for(int i=0;i<l;)
      {
      	if(s[i]==s[i+1])
      		{
      	    count++;
      	    i=i+2;
         	}
      	else
      	{
      		count++;
      		i++;
      	}

      }
      cout<< count<<"\n";

	}	
	return 0;
}
*/


int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int n,x,y,z;
	    int arr[n];
	    int count=0;
	    cin>>n>>x>>y>>z;
	    for(int i=0;i<n;i++)
	    {
	        cin>> arr[i];
	    }
	   
	    int sum1=x+y+z;
	     sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        if(sum1<0)
	        {
	            break;
	        }
	        else
	        {
	        	count++;
	            sum1=sum1-arr[i];
	           
	        }
	    }
	    cout<<count<<"\n";   
	}
	return 0;
}
