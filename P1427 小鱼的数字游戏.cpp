#include<iostream>
using namespace std;
int main()
{
	//int arr[]={0};���� arr �Ĵ�С����ʼ��Ϊֻ��1��Ԫ��
	int arr[1000];//ʹ���㹻��Ĺ̶���С���� 
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
