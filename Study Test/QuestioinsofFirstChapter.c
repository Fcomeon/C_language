# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>

// 5 �Ľ׳�


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

// ���20��ѧ���ɼ��Ƿ���80������
//int main()
//{
//	char score[20] = {50,60,70,80,90,40,30,20,10,60,
//					  20,60,70,80,90,100,50,40,30,80};
// int i=0;
// for (i=0;i<sizeof(score)-1;i++)
// {
//	if(score[i]>80)
// {
//		printf("��ʮ��ͬѧ�е�%d������80�ֵĳɼ���:%d\n", i, score[i]);
// }
// 
// }
// 
//	return 0;
//}


// �ж�2000-2500����ÿһ���Ƿ�Ϊ����
//�ܱ���������ȴ���ܱ�100������������ 
// �ܱ�400������������
//int main()
//{
//	int year;
//    for (year = 2000; year <= 2500; year++)
//	{
//		if (year % 4 != 0)
//		{
//			printf("year:%d��������", year);
//		}
//		else if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("year:%d������", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("year:%d������", year);
//		}
//		else
//			printf("year:%d��������", year);
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


//1-1/2+1/3-1/4+����+1/99-1/100

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


//һ�����ڻ��ߵ���3���������ж����Ƿ�Ϊ����

//int main()
//{
//	int n=0,i=0,r,flag;
//	printf("������һ�����ڻ����������������");
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
//		printf("%d��������", n);
//
//		if (flag == 1)
//			printf("%d������", n);
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
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = Max(a, b, c);
//	printf("�����������������ǣ�%d", max);
//}





















