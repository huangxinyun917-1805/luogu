#include<iostream>
using namespace std;

//只是找最小值不用排序 

int findMin(int arr[],int n)
{
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<findMin(arr,n)<<endl;
	return 0;
}
