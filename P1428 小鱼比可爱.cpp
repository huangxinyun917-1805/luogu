#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//int fish[]={0};������һ����ʼ��СΪ1�����飬������Խ��
	int fish[n];
	 
	for(int i=0;i<n;i++)
	{
		int cute;
		cin>>cute;
		fish[i]=cute;
	}
	for(int i=0;i<n;i++)
	{
		int buru=0;
		for(int j=0;j<i;j++)
		{
			if(fish[j]<fish[i])
			{
				buru++;
			}
		}
		cout<<buru<<" ";
	}
	
	return 0;
}
