#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,coin=0;
	//a��ͬһ����ֵ��b���˼���ļ��� 
	int k;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		coin+=b;
		a++;//coin+��b֮��a�ۼ�����+1 
		if(b==a)//��b����a��� 
		{
			b++;
			a=0;//a�ؿ����� 
		}
	}
	cout<<coin<<endl;
	return 0;
}
