# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



//void swap(char** x,char** y)
//{
//	char* tmp = NULL;
//	tmp = *x;
//	*x = *y;
//	*y =tmp;
//}
//
//
//int main()
//{
//	char* str1 = "醋";
//	char* str2 = "酱油";
//	printf("%s,%s\n", str1, str2);
//	swap(&str1, &str2);
//	printf("%s,%s", str1, str2);
//	return 0;
//}



// 判断十个数的大小
//int main()
//{
//	int a, b, c, d, e, f, g, h, i, j;
//	printf("请输入十个数:->");
//	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
//	int arr[10] = { a, b, c, d, e, f, g, h, i,j};
//	int Max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > Max)
//			Max = arr[i];
//	}
//	printf("Max=%d\n", Max);
//	return 0;
//}


//int Max( x, y, z)
//{
//	if (x > y && x>z)
//	{
//		return x;
//	}
//	else if (y > x && y > z)
//	{
//		return y;
//	}
//	else
//	{
//		return z;
//	}
//}
//
// 
//
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = Max(a, b, c);
//	printf("以上三个数中最大的是：%d", max);
//}


//int main()
//{
//	int sum = (1 + 100) * 100 / 2;
//	printf("%d", sum);
//}
//


// 判断一个数是否能被3和5整除
//int main()
//{
//	int n = 0;
//
//	printf("请随机输入一个数:");
//	scanf("%d", &n);
//
//	if (n % (3 * 5)==0)
//	{
//		printf("%d能被3和5整除", n);
//	}
//	else
//	{
//		printf("%d不能被3和5整除", n);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}




// 求最大公约数（辗转相除法）
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);  //scanf 函数中的两个%d中间如果有逗号，在命令行中输入数字的时候也要加上逗号
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//
//}


//int main()
//{
//	int a, b, c,e=0;
//	printf("分别输入a,b,c的值:");
//	scanf("%d,%d,%d", &a, &b, &c);
//	int d = pow(b, 2) - 4 * a * c;
//	if (d > 0)
//	{
//		d = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		e = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("有两个不同的根,分别是%d,%d", d, e);
//
//	}
//	else if (d == 0)
//	{
//		d = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		e = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("有两个相同的根,分别是%d,%d\n",d,e);
//	}
//	else
//	{
//		printf("%dx^2 + %dx + %d无根\n", a, b, c);
//	}
//	return 0;
//}



// 判定1900-2000年中每一年是否为闰年
//能被四整除，却不能被100整除的是闰年 
// 能被400整除的是闰年


//int main()
//{
//	int year=0;
//	for (year=1900;year<=2000;year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("1900-2000间的闰年：%d\n", year);
//		}
//	}
//
//	return 0;
//}




