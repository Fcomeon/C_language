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
//	char* str1 = "��";
//	char* str2 = "����";
//	printf("%s,%s\n", str1, str2);
//	swap(&str1, &str2);
//	printf("%s,%s", str1, str2);
//	return 0;
//}



// �ж�ʮ�����Ĵ�С
//int main()
//{
//	int a, b, c, d, e, f, g, h, i, j;
//	printf("������ʮ����:->");
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
//	printf("�����������������ǣ�%d", max);
//}


//int main()
//{
//	int sum = (1 + 100) * 100 / 2;
//	printf("%d", sum);
//}
//


// �ж�һ�����Ƿ��ܱ�3��5����
//int main()
//{
//	int n = 0;
//
//	printf("���������һ����:");
//	scanf("%d", &n);
//
//	if (n % (3 * 5)==0)
//	{
//		printf("%d�ܱ�3��5����", n);
//	}
//	else
//	{
//		printf("%d���ܱ�3��5����", n);
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




// �����Լ����շת�������
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);  //scanf �����е�����%d�м�����ж��ţ������������������ֵ�ʱ��ҲҪ���϶���
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
//	printf("�ֱ�����a,b,c��ֵ:");
//	scanf("%d,%d,%d", &a, &b, &c);
//	int d = pow(b, 2) - 4 * a * c;
//	if (d > 0)
//	{
//		d = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		e = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("��������ͬ�ĸ�,�ֱ���%d,%d", d, e);
//
//	}
//	else if (d == 0)
//	{
//		d = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		e = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("��������ͬ�ĸ�,�ֱ���%d,%d\n",d,e);
//	}
//	else
//	{
//		printf("%dx^2 + %dx + %d�޸�\n", a, b, c);
//	}
//	return 0;
//}



// �ж�1900-2000����ÿһ���Ƿ�Ϊ����
//�ܱ���������ȴ���ܱ�100������������ 
// �ܱ�400������������


//int main()
//{
//	int year=0;
//	for (year=1900;year<=2000;year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("1900-2000������꣺%d\n", year);
//		}
//	}
//
//	return 0;
//}




