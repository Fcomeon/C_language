# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


//Q4

//int Max( int x,int y,int z)
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



//Q5

//int main()
//{
//	int n;
//	do{
//		printf("请输入小于1000的正数:->");
//		scanf("%d", &n);
//	} while (n>1000 && n<0 );
//
//	
//	printf("%d的平方根为：%d",n, (int)sqrt(n));
//
//}

// Q6
//int main()
//{
//	int x,y;
//	printf("x=");
//	scanf("%d", &x);
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (1 <= x < 10)
//	{
//		y = 2*x - 1;
//	}
//	else
//	{
//		y = 3 * x - 11;
//	}
//	printf("y=%d", y);
//	
//	return 0;
//}

// Q7

//int main()
//{
//	int x, y;
//	printf("enter x:");
//	scanf("%d", &x);
//	y = -1;
//	if (x != 0)
//		if (x > 0)
//			y = 1;
//		else
//			y = 0;
//	printf("x=%d,y=%d", x,y);		
//
//	y = 0;
//	if (x >= 0)
//		if (x > 0)
//			y = 1;
//		else
//			y = 0;
//	printf("x=%d,y=%d", x, y);
//
//	return 0;
//}



// Q8
//int main()
//{
//	int scores;
//	printf("enter scores:");
//	scanf("%d", &scores);
//
//	if (scores > 90)
//	{
//		putchar('A');
//	}
//	else if (80 <= scores && scores < 89)
//	{
//		putchar('B');
//	}
//	else if (70 <= scores && scores < 79)
//	{
//		putchar('C');
//	}
//	else if (60 <= scores && scores < 70)
//	{
//		putchar('D');
//	}					
//	else if(scores<60)
//	{
//		putchar('E');
//	}
//
//	return 0;
//}

int figure(int n)
{
	if (n > 0)
	{
		figure(n % 10);

	}
	printf("%d", n);
	return n;

}

// Q9
//void print(n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int main()
//{
//	int n/*,digit*/;
//	printf("给一个不多于5位数的正整数：");
//	scanf("%d", &n);
//	/*for (int i = 1; n > 0; i++)
//	{
//		n /= 10;
//		digit = i;
//	}*/
//	/*printf("%d", digit);*/
//
//	/*print(n);*/
//
//	printf("%d\n", n % 10);
//	printf("%d\n", n /10 % 10 );
//	printf("%d\n", n /100 %10);
//	printf("%d\n", n / 1000 % 10);
//	printf("%d\n", n / 10000 % 10);
//
//	/*printf("%d",figure(n));*/
//
//
//	return 0;
//}


// Q10
//int main()
//{
//
//	double I = 0;
//	double bonus = 0;
//	double salary_10 = 100000 * 0.1;
//	double salary_20 = salary_10 + 100000 * 0.075;
//	double salary_40 = salary_20 + 200000 * 0.05;
//	double salary_60 = salary_40 + 200000 * 0.03;
//	double salary_100 = salary_60 + 400000 * 0.015;
//
//
//
//	printf("请输入当月利润I(元):->");
//	scanf("%lf", &I);
//	if (I <= 100000) //10%
//	{
//		bonus = I * 0.1;
//	}
//	else if (100000 < I <= 200000) //10%/7.5%
//	{
//		bonus = (I - 100000) * 0.075 + salary_10;
//	}
//	else if (200000 < I <= 400000) //7.5%/5%
//	{
//		bonus = (I - 200000) * 0.05 + salary_20;
//	}
//	else if (400000 < I <= 600000) //%5/3%
//	{
//		bonus = (I - 400000) * 0.03 + salary_40;
//	}
//	else if (600000 < I <= 1000000) //3%/1.5
//	{
//		bonus = (I - 600000) * 0.015 + salary_60;
//	}
//	else //1%
//	{
//		bonus = (I - 1000000) *0.01 + salary_100;
//	}
//
//	printf("%lf", bonus);
//	return 0;
//
//
//}










// Q11

void sort(int arr[])
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j = 0; j < 4 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{

				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;

			}
		}

	}
}

//int main()
//{
//	int a, b, c, d;
//	int i = 0;
//	printf("a, b, c, d = ");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int arr[] = { a,b,c,d };
//
//	sort(arr);
//	
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



// Q12

//void main()
//{
//	double x, y;
//	printf("请输入坐标:>");
//	scanf("%lf,%lf", &x, &y);
//
//	if (x >= 3 || y >= 3)
//	{
//		printf("建筑高度是0m");
//	}
//	double a_x = fabs(fabs(x) - 2);
//	double b_y = fabs(fabs(y) - 2);
//	double bevel = sqrt(a_x * a_x + b_y * b_y);
//
//	if (bevel > 1)
//	{
//		printf("建筑高度是0m");
//	}
//	else
//		printf("建筑高度是10m");
//
//	return 0;
//
//}