#include<iostream>
using namespace std;
int main()
{
	//int arr[]={0};数组 arr 的大小被初始化为只有1个元素
	int arr[1000];//使用足够大的固定大小数组 
	int l=0;
	while(true)
	{
		int x;
		cin>>x;
		if(x==0)
		{
			break;
		}
		arr[l]=x;
		l++;
	}
	for(int i=l-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
