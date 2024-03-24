# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>

// 5 的阶乘


//int main()
//{ 
//	int sum=1,i;
//	for (i=1;i <=5;i++)
//	{
//		sum *= i; 
//	}
//	printf("%d", sum);
//	return 0;
//}

// 检查20个学生成绩是否在80分以上
//int main()
//{
//	char score[20] = {50,60,70,80,90,40,30,20,10,60,
//					  20,60,70,80,90,100,50,40,30,80};
// int i=0;
// for (i=0;i<sizeof(score)-1;i++)
// {
//	if(score[i]>80)
// {
//		printf("二十个同学中第%d个大于80分的成绩是:%d\n", i, score[i]);
// }
// 
// }
// 
//	return 0;
//}


// 判定2000-2500年中每一年是否为闰年
//能被四整除，却不能被100整除的是闰年 
// 能被400整除的是闰年
//int main()
//{
//	int year;
//    for (year = 2000; year <= 2500; year++)
//	{
//		if (year % 4 != 0)
//		{
//			printf("year:%d不是闰年", year);
//		}
//		else if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("year:%d是闰年", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("year:%d是闰年", year);
//		}
//		else
//			printf("year:%d不是闰年", year);
//	}
//	return 0;
//}


//int main()
//{
//	int year,count=0;
//	for (year=2000;year<=2500;year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//
//	printf("\ncount= %d \n", count);
//	return 0;
//}


//1-1/2+1/3-1/4+……+1/99-1/100

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
// 
//	printf("%lf\n", sum);
//	return 0;
//}


//一个大于或者等于3的正整数判断它是否为素数

//int main()
//{
//	int n=0,i=0,r,flag;
//	printf("请输入一个大于或等于三的正整数：");
//	scanf("%d", &n);
//	if (n >= 3)
//	{
//		flag = 1;
//		for (i = 2; i < n; i++)
//		{
//			r = n % i;
//			if (r == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if(flag==0)
//		printf("%d不是素数", n);
//
//		if (flag == 1)
//			printf("%d是素数", n);
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
//			
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
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



/*int main()
{
	int  count = 0;
	int i = 0;
	for (i = 101; i < 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("\n%d\n", count);
	return 0;
}*/



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
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = Max(a, b, c);
//	printf("以上三个数中最大的是：%d", max);
//}





















