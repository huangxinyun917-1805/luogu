#include<iostream>
#include<string>
using namespace std;

int a[120];
int b[120];

void cheng(int* a,int c)
{
	int jw = 0;
	for (int i = 1; i <= 120; i++)
	{
		a[i] = a[i] * c + jw;
		jw = a[i] / 10;
		a[i] = a[i] % 10;
	}
}

void add(int* a, int* b)
{
	int jw = 0;
	for (int i = 1; i <= 120; i++)
	{
		b[i] = b[i] + a[i] + jw;
		jw = b[i] / 10;
		b[i] = b[i] % 10;
	}
}

int main()
{
	int n;
	cin >> n;
	a[1] = 1;
	for (int i = 1; i <= n; i++)
	{
		cheng(a, i);
		add(a, b);
	}

	bool flag = 0;
	for (int i = 120; i >= 1; i--)
	{
		if (b[i] != 0) flag = 1;
		if (flag) cout << b[i];
	}

	system("pause");
	return 0;
}
