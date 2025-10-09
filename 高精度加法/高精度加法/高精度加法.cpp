#include<iostream>
#include<string>
using namespace std;

//结合竖式计算的原理：
//从右加到左，再逆序输出
//所以要把每一位上的数存在整数数组中

int main()
{
	string s1, s2;
	int a1[210] = { 0 };
	int a2[210] = { 0 };
	int a3[210] = { 0 };
	//初始化数组的元素数（对应数的位数）和元素

	getline(cin, s1);
	getline(cin, s2);
	//当用户输入文本并按回车后，getline会读取从光标位置到回车键之间的整行内容​
	//包括行内的所有空格、制表符等空白字符

	//将每个元素放进对应数组的位置
	for (int i = 0; i < s1.size(); i++)
	{
		a1[s1.size() - i - 1] = s1[i]-'0';
		//-'0':把s1[i]的ASCII转成整数
	}
	for (int i = 0; i < s2.size(); i++)
	{
		a2[s2.size() - i - 1] = s2[i] - '0';
	}

	//循环的次数由数位多的数决定
	int len = s1.size();
	if (s2.size() > s1.size())
	{
		len = s2.size();
	}
	for (int i = 0; i < len; i++)
	{
		a3[i] += a1[i] + a2[i];

		//解决进位问题
		if (a3[i] > 10)
		{
			a3[i + 1] = a3[i + 1] + a3[i] / 10;
			a3[i] = a3[i] % 10;
		}
	}

	//逆序输出
	if (a3[len] != 0)
	{
		len++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		cout << a3[i];
	}

	system("pause");
	return 0;
}
