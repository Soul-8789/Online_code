#include<bits/stdc++.h>
using namespace std;

/*
 void merge(int arr[],int l,int mid,int r)
 {
 	int n1=mid-l+1;
 	int n2 =r-mid;

 	int a[n1];
 	int b[n2];//temp array

 	for(int i=0;i<n1;i++)
 	{
 		a[i]=arr[l+i];
 	}
 	for(int i=0;i<n2;i++)
 	{
 		b[i]=arr[mid+1+i];
 	}
 	int i=0;
 	int j=0;
 	int k=l;
 	while(i<n1 && j<n2)
 	{
 		if(a[i]<b[j])
 		{
 			arr[k]=a[i];
 			k++; 
 			i++;
 		}
 		else
 		{
 			arr[k]=b[j];
 			k++;
 			j++;
 		}
 	}
 	while(i<n1)
 	{
 		arr[k]=a[i];
 			k++; 
 			i++;
 	}

   while(j<n2)
   {
   	arr[k]=b[j];
 			k++; 
 			j++;
   }
 }
 void mergesort(int arr[],int l,int r)
 {
 	
 	if(l<r)
 	{
 		int mid =(l+r)/2;
 		mergesort(arr,l,mid);
 		mergesort(arr,mid+1,r);

 		merge(arr,l,mid,r);
 	}
 }
 

int parition(int arr[],int l,int r)
{
	int pivot = arr[r];
	int i=l-1;
    for(int j=l;j<r;i++)
    {
    	if(arr[i]<pivot)
    	{
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void Quick_sort(int arr[],int l,int r)
{
	if(l<r)
	{
		int par=parition(arr,l,r);
		Quick_sort(arr,l,par-1);
		Quick_sort(arr,par+1,r);
	}
}
*/
void count_sort(int arr[],int n)
{
	int k=arr[0];
	for(int i=0;i<n;i++)
	{
		k=max(k,arr[i]);
	}
	int count[10]={0};
	for(int i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	for(int i=0;i<=k;i++)
	{
     count[i]+=count[i-1];
	}
   int out[n];
   for(int i=n-1;i>=0;i--)
   {
   	out[--count[arr[i]]]=arr[i];
   }
   for(int i=0;i<n;i++)
   {
   	arr[i]=out[i];
   }
}
int main()
{

int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>> arr[i];
}
//Quick_sort(arr,0,7);
//mergesort(arr,0,7);
count_sort(arr,n);
for(int i=0;i<n;i++)
{
	cout<< arr[i]<<" ";
}
return 0;
}