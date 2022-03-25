#include<bits/stdc++.h>
using namespace std;
struct point 
{
	int x;
	int y;
};
int main()
{
   point arr[5];
   for(int i=0;i<5;i++)
   {
   	cin>> arr[i].x>> arr[i].y;
   }
   for(int i=0;i<5;i++)
   {
   	cout<< arr[i].x<<" "<<arr[i].y<<endl;
   }
   return 0;
}