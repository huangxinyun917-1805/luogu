#include<iostream>
using namespace std;
int main()
{
	int n, flag;
	cin >> n >> flag;
	int sum = 0;
	int t;
	for (int i = 1; i <= n; i++)
	{
		t = i;
		while (t != 0)
		{
			//������ʱ����Ҫ�����λ���дӸߵ��͵�˳��
			//ֻҪ�ҵ�����+1�Ϳ�����
			if (t % 10 == flag)
			{
				sum++;
			}
			t = t / 10;
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}