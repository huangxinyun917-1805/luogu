#include<iostream>
using namespace std;

int bubbleSort(arr)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(arr[i]<arr[i+1])
			{
				int t=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=t;
			}
		}
	}
	return arr[n-1];
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
	cout<<bubbleSort(arr)<<endl;
	
	system("pause");
	return 0;
}
