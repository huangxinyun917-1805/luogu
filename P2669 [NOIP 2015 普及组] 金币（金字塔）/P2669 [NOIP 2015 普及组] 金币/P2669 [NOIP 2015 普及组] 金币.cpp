#include<iostream>
using namespace std;
int main()
{
	//数形结合按照金字塔一层一层计算

	int k;
	cin >> k;
	int day = 0;
	int coin = 0;
	for (int i = 1; i <= k; i++)
	{
		coin += i * i;
		day += i;
		if (day > k)
		{
			coin -= (day - k) * i;
			break;
		}
	}
	cout << coin << endl;

	system("pause");
	return 0;
}