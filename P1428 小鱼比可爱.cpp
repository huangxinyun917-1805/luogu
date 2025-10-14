#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//int fish[]={0};定义了一个初始大小为1的数组，后续会越界
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
