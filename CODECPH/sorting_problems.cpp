#include<bits/stdc++.h>
using namespace std;

void repeating_missing(int arr[],int n)
{
 int missing,repeating,i;
    for ( i=0;i<n;i++ ) {
       int temp = arr[abs(arr[i])- 1];
        if (temp < 0 ) {
            repeating = abs(arr[i]);
            break;
        }
        arr[abs(arr[i])- 1] = -arr[abs(arr[i]- 1)];
    }

    for (i=0;i<n;i++) {
        if (arr[i] > 0 )
            missing = i+1;
    }
cout<<repeating<< " " <<missing;
}

void print_arr(int arr[],int n)
{
	for(auto i=0;i<n;i++)
	{
		cout<< arr[i]<<" ";

	}
	cout<< endl;
}

int main()
{
    int n,x,pos;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
   { 
   cin>>arr[i];
   }
print_arr(arr,n);
 repeating_missing(arr,n);
 //  print_arr(arr,n);
	return 0;
}

