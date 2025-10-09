#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int a1[210] = { 0 };
	int a2[210] = { 0 };
	int a3[210] = { 0 };
	char flag = '+';
	
	/*在C++中，可以直接比较两个字符串的大小。比较规则基于字典序​，具体步骤如下：
		比较规则：
		1.逐字符比较​：
		从字符串的第一个字符开始，依次比较每个字符的ASCII值。
		如果字符不同，ASCII值较小的字符串被视为更小。
		如果字符相同，则继续比较下一个字符。
		2.​长度比较​：
		如果所有字符都相同，但一个字符串比另一个短，则较短的字符串被视为更小（例如 "abc" < "abcd"）。
		如果所有字符相同且长度相同，则两个字符串相等。*/
	if (s1.size() < s2.size() || s1.size() == s2.size() && s1 < s2)
	{
		swap(s1, s2);
		flag = '-';
	}

	for (int i = 0; i < s1.size(); i++)
	{
		a1[i] = s1[s1.size() - 1 - i] - '0';
	}
	for (int i = 0; i < s2.size(); i++)
	{
		a2[i] = s2[s2.size() - 1 - i] - '0';
	}

	for (int i = 0; i < s1.size(); i++)
	{
		a3[i] = a1[i] - a2[i];
		if (a3[i] < 0)
		{
			a3[i] += 10;
			a1[i + 1] -= 1;
		}
	}

	if (flag == '-')
	{
		cout << flag;
	}
	
	//要找到不为0的位数开始输出
	int index = 0;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		if (a3[i] != 0)
		{
			index = i;
			break;
		}
	}
	for (int i = index; i >= 0; i--)
	{
		cout << a3[i];
	}

	system("pause");
	return 0;
}