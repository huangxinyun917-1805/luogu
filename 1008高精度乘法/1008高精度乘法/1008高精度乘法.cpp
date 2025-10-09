#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int a1[250] = { 0 };
	int a2[250] = { 0 };
	int a3[500] = { 0 };//注意结果的位数

	for (int i = 0; i < s1.size(); i++)
	{
		a1[i] = s1[s1.size() - i - 1] - '0';
	}
	for (int i = 0; i < s2.size(); i++)
	{
		a2[i] = s2[s2.size() - i - 1] - '0';
	}

	for (int j = 0; j < s2.size(); j++)
	{
		for (int i = 0; i < s1.size(); i++)
		{
			a3[i + j] += a1[i] * a2[j];
			if (a3[i + j] > 10)
			{
				a3[i + j + 1] += a3[i + j] / 10;
				a3[i + j] = a3[i + j] % 10;
			}
		}
	}

	int l = 0;
	while (a3[l] != 0)
	{
		l++;
	}
	for (int i = l-1; i >= 0; i--)
	{
		cout << a3[i];
	}

	system("pause");
	return 0;
}