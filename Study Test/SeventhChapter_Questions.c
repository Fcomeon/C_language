# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
# include <stdbool.h>
//int co_divisor(a,b)
//{
//	int r = 0;
//	if (a == 0)
//		return b;
//	else if (b == 0)
//		return a;
//	else if (a=b)
//		return a;
//
//	while (r=a%b)
//	{
//		a = b;
//		b = r;
//
//	}
//	return b;
//
//}
//
//int co_multiple(a,b,c)
//{
//	int d = 0;
//	return d=a* b / c;
//}
//
//
//// Q1
//int main()
//{
//	int a, b = 0;
//	scanf("输入两个整数：%d%d", &a, &b);
//	printf("最大公约数%d\n", co_divisor(a, b));
//	printf("最小公倍数%d",co_multiple(a,b,co_divisor(a,b)));
//	
//	
//
//	return 0;
//}

//float disc;
//float x1, x2;
//float q, p;
//
//
//void more(a, b, c)
//{
//	
//	
//		x1= -b + sqrt(disc) / 2 * a;
//		x2 = -b - sqrt(disc) / 2 * a;
//	
//}
//
//void equal(a, b, c)
//{
//
//
//		x1 = x2 = -b + sqrt(disc) / 2 * a;
//
//
//}
//
//void less(a, b, c)
//{
//
//		p = -b / 2 * a;
//		q = sqrt(-disc) / 2 * a;
//
//
//}
//
//// Q2
//
//int main()
//{
//	int a, b, c;
//	printf("请输入a,b,c:->");
//	scanf("%d%d%d", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//
//	if (disc > 0)
//	{
//		more(a, b, c);
//		printf("x1=%f  x2=%f", x1, x2);
//	}
//
//	else if (disc < 0)
//	{
//		less(a, b, c);
//		printf("x1=%f  x2=%f", p+q, p-q);
//	}
//	else 
//	{
//		equal(a, b, c);
//		printf("x1=%f  x2=%f", x1, x2);
//	}
//
//
//	
//	
//
//
//	return 0;
//}



//flag = 1;
//// Q3
//void juge_primn(int n)
//{
//	int i = 0;
//	for (i = 2; i <sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//		}
//	}
//
//	if(flag==0)
//		printf("%d不是素数", n);
//
//	if (flag!=0)
//	{
//		printf("%d是素数", n);
//	}
//}
//
//
//
//int main()
//{
//	int n = 0;
//	printf("请输入整数 n:->");
//	scanf("%d", &n);
//	juge_primn(n);
//
//
//	return 0;
//}



// Q4
//# define Row 3
//# define Col 3
//
//void print(int arr[Row][Col])
//{
//	int i = 0,j=0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//
//void change(int arr[Row][Col])
//{
//	for(int i=0;i<Row;i++)
//		for (int j = 0; j < i; j++)
//		{
//			int tmp = 0;
//			tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//
//		}
//
//
//}
//
//
//int main()
//{
//	int i, j = 0;
//	int arr[Row][Col] = { {1,2,3},{4,5,6},{7,8,9} };
//	print(arr);
//	printf("\n");
//
//	change(arr);
//
//	print(arr);
//
//
//	return 0;
//}


// Q5
//void reverse_sort(char arr[])
//{
//	int start = 0, end = strlen(arr)-1;
//	while (start < end)
//	{
//		char tmp = 0;
//		tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//
//		start++;
//		end--;
//
//	}
//}
//
//
//
//int main()
//{
//	char arr[100] = {0};
//
//	printf("输入一串字符:->");
//	gets(arr);
//
//	reverse_sort(arr);
//
//	printf("%s", arr);
//
//}



//void Concat(char dest[], char arr1[], char arr2[])
//{
//	int i = 0,j=0;
//	while(arr1[i]!='\0')
//	{
//		dest[i] = arr1[i];
//		i++;
//	}
//
//	while(arr2[j] !='\0')
//	{
//		dest[i++] = arr2[j++];
//
//	}
//	dest[i] = '\0';
//
//	
//
//}
//
//
//
//
//
//
//// Q6
//int main()
//{
//	char arr1[100] = {0};
//	char arr2[100] = {0};
//	char arr3[200] = {0};
//
//	printf("输入第一个字符:->");
//
//	gets(arr1);
//	printf("输入第二个字符:->");
//	gets(arr2);
//	
//	Concat(arr3, arr1, arr2);
//
//	printf("拼接好的字符:%s", arr3);
//
//
//
//
//}



// Q7

int main7()
{
	return 0;
}


// Q8
//void outstring(char arr[])
//{
//
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		printf("%c", arr[i]);
//		if (arr[i + 1] == '\0')
//			break;
//		printf(" ");
//		i++;
//	}
//
//
//	
//}
//int main()
//{
//	char arr[5] = { 0 };
//	printf("输入4位的数字字符:->");
//	scanf("%s", &arr);
//	
//	outstring(arr);
//	printf("\0");
//	return 0;
//}


// Q9
//int letters= 0,digit=0 ,space = 0, other = 0;
//void statistic(char str[])
//{
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
//			letters++;
//		else if (str[i] >= '0' && str[i] <= '9')
//			digit++;
//		else if (str[i] == ' ')
//			space++;
//		else
//			other++;
//	}
//
//}
//
//int main()
//{
//	char str[200] = { 0 };
//	printf("输入一串字符:");
//	gets(str);
//	statistic(str);
//	printf("英文字符个数:%d \n数字字符个数:%d \n空格字符个数:%d \n其他字符个数:%d", letters, digit, space, other);
//
//
//	return 0;
//}

//void longest_word(char arr[],char word[])
//{
//	int i = 0,j=0,len=0;
//	while (arr[i] != '\0')
//	{
//		j = i;
//		while (arr[j] != ' ' && arr[j]!='\0')
//		{
//			j++;
//		}
//			len = j - i;
//			if (len > strlen(word))
//			{
//				strncpy(word, arr + i, len);
//			}
//			j++;
//			i = j;
//		
//	}
//
//}
//
//// Q10
//int main()
//{
//	char arr[100] = { "please input the text content or web address to be translated "};
//	char word[100] = { 0 };
//
//	longest_word(arr,word);
//	printf("最长单词：%s", word);
//}


//Q11
//void print(char arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//
//void bubble_sort(char arr[], int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			char tmp = 0;
//			if (arr[j + 1] < arr[j])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] =tmp;
//			}
//
//		}
//	}
//}
//
//
//int main()
//{
//
//	char arr[11] = {0};
//	printf("输入要排序的字符:");
//	scanf("%s",&arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前\n");
//	print(arr, sz);
//
//	bubble_sort(arr,sz);
//
//	printf("\n排序以后\n");
//	print(arr, sz);
//
//
//	return 0;
//
//}


// Q12
//double Root(int a,int b,int c ,int d ,double x)
//{
//	double X0;
//	double f, f1;
//
//	do
//	{
//		X0 = x;
//		f = a * pow(X0, 3) + b*pow(X0,2)+ c*X0 + d;
//		f1 = 3 * a * pow(X0, 2) + 2 * b * X0 + c;
//		x = X0 - f / f1;
//
//	} while (fabs(x-X0)>=1e-3); // 精度在此之下，root就找到了。
//	return x;
//}
//
//
//
//
//int main()
//{
//	int a, b, c, d;
//	double x;
//	printf("输入系数:->");
//	scanf("%d %d %d %d %lf", &a, &b, &c, &d, &x);
//
//	double res = Root(a, b, c, d, x);
//	printf("root=%lf\n", res);
//
//}

// Q13
//
//float Poly(n, x)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return x;
//	}
//	return (2 * n - 1) * x - Poly(n - 1, x) - (n-1) * Poly(n - 2, x) / n;
//}
//
//int main()
//{
//	int n, x;
//	printf("请输入n和x的值:->");
//	scanf("%d %d", &n, &x);
//
//	float result = Poly(n, x);
//	printf("%d阶勒让得多的值为%f",n, result);
//
//	return 0;
//}


//Q14
//int main()
//{
//
//
//}







//Q15

//#define N 10
//#define Name_Size 10
//
//
//void Input(int id[], char name[][Name_Size])
//{
//	for (int i = 0; i < N; i++)
//	{
//		printf("输入职工id:->");
//		scanf("%d", &id[i]);
//		getchar();
//		printf("输入职工姓名:->");
//		gets(name[i]);
//	}
//}
//
//void Output(int id[], char name[][Name_Size])
//{
//	for (int i=0; i < N; i++)
//	{
//		printf("[%d] : [%s]\n", id[i], name[i]);
//	}
//}
//
//void Sort(int id[], char name[][Name_Size])
//{
//	for (int i = 0; i < N-1; i++)
//	{
//		char tmp_name[Name_Size];
//		for (int j = 0; j < N - i - 1; j++)
//		{
//			if(id[j]>id[j+1])
//			{
//				int tmp_id = id[j];
//				strcpy(tmp_name, name[j]);
//				id[j] = id[j + 1];
//				strcpy(name[j], name[j + 1]);
//				id[j + 1] = tmp_id;
//				strcpy(name[j + 1], tmp_name);
//			}
//		}
//	}
//}
//
//void Search(int id[], char name[][Name_Size],int key)
//{
//	int low = 0;
//	int high = N-1;
//	int mid;
//
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (key == id[mid])
//		{
//			break;
//		}
//		else if (key > id[mid])
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			high = mid - 1;
//		}
//	}
//	if (low <= high)
//	{
//		printf("找到了职工号%d的姓名为:%s\n", key, name[mid]);
//	}
//	else
//	{
//		printf("职工号为%d的职工找不到\n",key);
//	}
//}
//
//
//int main()
//{
//	int id[N];
//	char name[N][Name_Size];
//
//	Input(id, name);
//	Output(id, name);
//	Sort(id, name);
//	printf("\n");
//	Output(id, name);
//
//	int key = 0;
//	while (1)
//	{
//		printf("输入你要查找的职工id:->");
//		scanf("%d", &key);
//		Search(id, name, key);
//	}
//
//	return 0;
//}









// Q16
// 

//unsigned int HextoDec(char hex[])
//{
//	unsigned int result = 0;
//	int i = 0;
//	while (hex[i] != '\0')
//	{
//		if (hex[i]>='A' && hex[i]<='Z')
//		{
//			result = result * 16 + hex[i] - 'A' + 10;
//		}
//		else if (hex[i] >= 'a' && hex[i] <= 'z')
//		{
//			result = result * 16 + hex[i] - 'a' + 10;
//		}
//		else
//		{
//			result = result * 16 + hex[i]-'0';
//		}
//		i++;
//	}
//	return result;
//
//}
//
//int main()
//{
//	char hex[9] = {0};
//	printf("输入一个十六进制数:->");
//	scanf("%s", &hex);
//	unsigned int result =HextoDec(hex);
//	printf("0x%s ===> %u\n", hex, result);
//	return 0;
//}

// Q17

//void Convert(int val)
//{
//	if (val / 10 != 0)
//	{
//		Convert(val / 10);
//	}
//	printf("%c", val % 10 + '0');
//}
//
//int main()
//{
//	int num;
//	printf("输入你要进行转换的值:->");
//	scanf("%d", &num);
//	Convert(num);
//	printf("\n");
//	return 0;
//}


// Q18

//bool Isleap(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
//}
//
//int GetDayByYM(int year, int month)
//{
//	int days[13] = {29,31,28,31,30,31,30,31,31,30,31,30,31};
//	if (month == 2 && Isleap(year))
//	{
//	    return days[0];
//	}
//	return days[month];
//}
//
//int GetDayByYMD(int year, int month, int day)
//{
//	int days = 0;
//	for (int i = 1; i < month; i++)
//	{
//		days += GetDayByYM(year, i);
//	}
//	days += day;
//	return days;
//}
//
//int main()
//{
//	int year, month, day, days;
//
//	printf("请输入年 月 日:->");
//	scanf("%d %d %d",&year,&month,&day);
//
//	days = GetDayByYMD(year, month, day);
//	printf("%d年%d月%d日是这一年的第%d天\n",year,month,day,days);
//
//
//
//	return 0;
//}
