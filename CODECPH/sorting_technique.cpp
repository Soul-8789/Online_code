#include<bits/stdc++.h>
using namespace std;
//Bubble sort

void bubbleSort(int arr[],int n)
{
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = key;
    }
}
void selection(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
				swap(arr[j],arr[i]);
		}
	}
}
void merge(int arr[],int l,int m,int e)
{
	
}
void mergesort(int arr[],int l,int e)
{
	if(l>=e)
		return;
	int m=l+(e-l)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,e);
	merge(arr,l,m,e);
}
int main()
{
 int n;
 cin>> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
 	cin>> arr[i];
 }
// bubbleSort(arr);
 //insertionSort(arr,n);
 selection(arr,n);
 for(int i=0;i<n;i++)
 {
 	cout<< arr[i]<<" "; 
 }
 return 0;
}