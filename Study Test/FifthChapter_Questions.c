# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Q3
//int main()
//{
//	int m = 0, n = 0,r=0,s=0;
//	int total = 0;
//	scanf("%d%d", &m, &n);
//	if (n > m)
//	{
//		int tmp = 0;
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	total = m * n;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//
//	printf("以上两个数的最大公约数:%d\n", n);
//	s = total/ n;
//	printf("最小公倍数%d", s);
//	
//
//	return 0;
//}



// Q4

//int main()
//{
//	int english_char = 0;
//	int digit_char = 0;
//	int blank_char = 0;
//	int other_char = 0;
//
//	char c;
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//		{
//			english_char++;
//		}
//		else if (c == ' ')
//		{
//			blank_char++;
//		}
//		else if (c >= '1' && c <= '9')
//		{
//			digit_char++;
//		}
//		else 
//		{
//			other_char++;
//		}
//	}
//	printf("英文字符个数:%d 数字字符个数:%d 空格字符个数:%d 其它字符个数:%d", english_char, digit_char, blank_char, other_char);
//
//
//	
//	return 0;
//}



// Q5

//int main()
//{
//	int i = 1, n = 0;
//	double  a = 0, single_sum = 0, total_sum = 0;
//	scanf("%d %lf", &n,&a);
//		for (i = 0; i < n; i++)
//		{
//			single_sum += a * pow(10, i);
//			total_sum += single_sum;
//
//		}
//	printf("%lf", total_sum);
//
//	return 0;
//}


// Q6

/* 1*1+ 1*2+ 1*2*3 + 1*2*3*4 ....+1*2*...*20   */

//
//int main()
//{
//	int i = 1; int j = 1;
//	int n = 0;
//	for (i = 1; i <= 20; i++)  // 1-20
//	{
//		int t = 1;
//		for (j = 1; j <= i; j++) // 1! 2! 3!……20！
//		{
//			t *=j;
//		}
//		n += t; //1！+2！+3！+……20！
//	}
//	printf("%d", n); 
//	return 0;
//}


// Q7
//int main()
//{
//	int i = 1,j=1,k=1;
//	float t = 0;
//	for (i = 1; i <= 100; i++)  //t=100*(100+1)/2
//	{
//		t += i;
//	}
//	printf("%f\n", t);
//	for (j = 1; j < 50; j++)
//	{
//		t += j * j;
//	}
//	printf("%f\n", t);
//	for (k = 1; k < 10; k++)
//	{
//		t += 1.0 / k;
//	}
//	printf("%f", t);
//
//
//	return 0;
//}


// Q8

//int main()
//{
//	int i = 100;
//	for (i = 100;i<1000; i++)
//	{
//		if(i== pow(i / 100, 3) + pow(i / 10 % 10, 3) + pow(i % 10, 3))
//		printf("%d是水仙花数\n", i);
//	}
//
//	return 0;
//}

// Q9


//int main()
//{
//	int i = 0, n = 0;
//	int sum = 0;
//	printf("输入一个数字:");
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//		
//	}
//	if (sum == n)
//		printf("%d是完数", n);
//	else
//		printf("%d不是完数", n);
//
//	return 0;
//}

//Q10

//int main()
//{
//	float a=2,b=1,sum=0.0;
//	for (int i = 1; i <= 20; i++)
//	{
//		sum += a / b;
//
//		float tmp = a;
//		a += b;
//		b = tmp;
//	}
//	printf("%f", sum);
//
//
//}




// Q11
//int main()
//{
//	double Height = 100,d=0;
//	int i = 1;
//	for ( i = 0; i < 10; i++)
//	{
//		Height /= 2;
//		d += Height;
//	}
//	printf("%d:%f:%f", i, Height,d);
//
//	return 0;
//}

//Q12


//int main()
//{
//	int day=9,cur_t = 1, pre_t;
//	for (day=9; day>0; day--)
//	{
//		pre_t = (cur_t + 1) * 2;
//		cur_t = pre_t;
//
//	}
//	printf("第一天摘了%d个桃桃", pre_t);
//	return 0;
//}


// Q14

//void main()
//{
//	float x,x0,f,f1;
//	x = 1.5;
//	do
//	{
//		x0 = x;
//		f = ((2 * x0 - 4) * x0 + 3) * x0 - 6;
//		f1 = (6 * x0 - 8) * x0 + 3;
//		x = x0 - f / f1;
//
//	} while (fabs(x - x0) >= 1e-5);
//	printf("The root is:%.2f\n", x);
//
//
//
//}






// Q16

//int main()
//{
//	int i = 0,j=0;
//
//	for (i = 0; i < 4; i++)  //前四行
//	{
//		for (j=3-i;j>0;j--)
//		{
//			printf(" ");
//		}
//		for (j=2*i+1;j>0;j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j=i+1;j>0;j--)
//		{
//			printf(" ");
//		}
//		for (j=7-2*(i+1);j>0;j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//
//}



