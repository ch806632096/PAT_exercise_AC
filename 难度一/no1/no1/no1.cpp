// no1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector> 
#include<iostream>
using namespace::std;
int main()
{
	std::vector<int> m;
	int a = 0, b = 0, c = 0;
	int i = 0;
	cin >> i;
	int k1 = 0;
	int k2 = 0;
	while (k1 < i)
	{
		k1++;
		cin >> a >> b >> c;
		m.push_back(a);
		m.push_back(b);
		m.push_back(c);
	}
	while (k2 < i)
	{
		
		if (m[k2] + m[k2 + 1] > m[k2 + 2])
		{
			cout << "Case #" <<k2 << ": "<<"true"<<endl;
		}
		else
		{
			cout << "Case #" << k2 << ": " << "false" << endl;
		}
		k2++;
	}
	system("pause");
	
	return 0;

}
