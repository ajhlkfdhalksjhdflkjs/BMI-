// BMI计算器（c++移植正式版）.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

// vison 1.2 DEBUG TODO:修复了除法除以零会出现inf的BUG

//全局变量定义区域↓↓↓
// TODO 请注意变量冲突问题

int shili1145140; //我是示例，不要调用

int aplas[1000], bplas[1000], cplas[1000]; //啊！！！！高精度要用的！不要动！！！不要动！！！不要动！！！

int lenMax;

//全局变量定义区域↑↑↑

//函数预定区域↓↓↓
// TODO 不要堆屎山！！！

void shili1919810()
{
	cout << "我是示例，不要调用";
}

void BMIans() //BMI计算模块化
{
	double w; //局部变量
	double g; //局部变量
	cout << "请输入您的身高:";
	cin >> w;
	w += 0.0;
	cout << "请输入您的体重:";
	cin >> g;
	g += 0.0;
	printf("您的BMI为:%.2lf\n", g / (w * w));
}

double ansfore(int l, double o, double r) //四则运算模块化
{
	o += 0.0;
	r += 0.0;
	switch (l)
	{
	case 1:
		return o + r;
	case 2:
		return o - r;
	case 3:
		return o * r;
	case 4:
		if (r != 0)
		{
			return o / r;
		}
		else {
			return 0;
		}
	}
}
void gaoplas(string d, string e) //高精度加法模块化
{
	int len1 = d.size();
	int len2 = e.size();
	for (int i = 0; i < len1; i++)
	{
		aplas[len1 - i - 1] = d[i] - '0';
	}
	for (int i = 0; i < len2; i++)
	{
		bplas[len2 - i - 1] = e[i] - '0';
	}

	if (len1 > len2)
	{
		lenMax = len1;
	}
	if (len2 >= len1)
	{
		lenMax = len2;
	}
	for (int j = 0; j < lenMax; j++)
	{
		cplas[j] = aplas[j] + bplas[j] + cplas[j];
		if (cplas[j] >= 10)
		{
			cplas[j + 1] = 1;
			cplas[j] = cplas[j] - 10;
		}
	}
	if (cplas[lenMax] > 0)
	{
		lenMax++;
	}
}

//函数预定区域↑↑↑

int main()
{
	bool flag0 = false; //重要名，勿重复定义
	bool flag1 = false;
	int k700; //k可以定义,但要改后面的数字
	while (1)
	{
		if (flag0)
		{
			cout << "欢迎来到BMI计算机";
			flag0 = true;
		}
		if (flag1)
		{
			break;
		}
		cout << "计算BMI请按1" << endl << "计算四则运算低精度请按2" << endl <<
			"计算四则运算高精度请按3" << endl << "退出请按0" << endl << "输入：";
		cin >> k700;
		switch (k700)
		{
		case 1:
		{
			BMIans();
			break;
		}
		case 2:
		{
			double one, two;
			int f;
			cout << "请输入四则运算模式（加法为1；减法为2；乘法为3；除法为4）：";
			cin >> f;
			cout << "请输入第一个数：";
			cin >> one;
			cout << "请输入第二个数：";
			cin >> two;
			cout << "您的结果为：" << ansfore(f, one, two) << endl;
			break;
		}
		case 3:
		{
			cout << "1.2版本只有高精度加法，下面全是高精度加法" << endl;
			string x114, y114;
			cout << "请输入第一个数：";
			cin >> x114;
			cout << "请输入第二个数：";
			cin >> y114;
			gaoplas(x114, y114);
			cout << "结果为：";
			for (int i = lenMax - 1; i >= 0; i--) 
			{
				cout << cplas[i];
			}
			cout << endl;
			break;
		}
		case 0:
		{
			char p10203; //局部变量
			cout << "您确定要退出么?(y/n)";
			cin >> p10203;
			if (p10203 == 'y')
			{
				flag1 = true;
				break;
			}
			else
			{
				break;
			}
		}
		}
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
