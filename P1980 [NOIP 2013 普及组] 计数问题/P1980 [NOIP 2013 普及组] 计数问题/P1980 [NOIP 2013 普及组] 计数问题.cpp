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
			//遍历的时候不需要纠结多位数中从高到低的顺序
			//只要找到数字+1就可以了
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