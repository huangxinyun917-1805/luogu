#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,coin=0;
	//a：同一个数值的b发了几天的计数 
	int k;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		coin+=b;
		a++;//coin+过b之后，a累计天数+1 
		if(b==a)//当b加了a天后 
		{
			b++;
			a=0;//a重开计数 
		}
	}
	cout<<coin<<endl;
	return 0;
}
