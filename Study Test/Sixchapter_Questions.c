# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//Q1
//int main()
//{
//	int i = 0, j = 0,tmp;
//	int Maxpos = 0;
//	int arr[10] = { 0,2,3,4,1,7,5,8,9,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		Maxpos = 0;
//
//		for (j = 1; j < sz - i; j++)
//		{
//			if ( arr[j]> arr[Maxpos])
//			{
//				Maxpos = j;
//			}
//		}
//
//		if(Maxpos != sz-i-1)
//		{
//
//			tmp = arr[Maxpos];
//			arr[Maxpos] = arr[sz-i-1];
//			arr[sz-i-1] = tmp;
//		}
//
//	}
//
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//Q2
//int main()
//{
//	int arr[100];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	arr[0] = 0;
//
//	for (i = 1; i < 100; i++)
//	{
//		if (arr[i] == 0)
//			continue;
//
//		for (j = i + 1; j < 100; j++)
//		{
//			if (arr[j] != 0 && arr[j] % arr[i] == 0)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//		printf("%d ", arr[i]);
//	}
//
//
//
//	return 0;
//}
//Q3
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i = 0,j = 0;
//	int across_sum1 = 0;
//	int across_sum2 = 0;
//	for (i = 0; i < 3; i++)
//	{
//		across_sum1 += arr[i][i];
//	}
//
//	for (i = 0,j = 2; i < 3 ; i++,j--)
//	{
//		across_sum2 += arr[i][j];
//
//	}
//	printf("%d and %d", across_sum1,across_sum2);
//
//
//	return 0;
//}



// Q4

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,6,7,8,9 };
//	int i = 0;
//	int key = 0;
//	int end = 8;
//	scanf("%d", &key);
//	printf("原数组元素：");
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	
//	while (end >=0  && key < arr[end])
//	{
//		arr[end + 1] = arr[end];
//		end--;
//	}
//
//	arr[end + 1] = key;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



// Q5
// 
//int main()
//{
//	int arr[] = { 8,6,5,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - i-1; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//
//	for(i=0;i<sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}




// Q6  杨辉三角表

//int main()
//{
//	int i = 0, j = 0;
//	int arr[10][10];
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%6d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}



// Q7

//#define M 3
//#define N 4

//int main()
//{
//	int arr[M][N];
//	int i = 0, j = 0;
//	int max = 0, pos = 0,flag=0;
//	printf("请输入%d行%d列的数组:\n", M, N);
//	for (i = 0;i<M;i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//
//	for (i = 0; i < M; i++)
//	{
//		max = arr[i][0];
//		for (j = 1; j < N; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				pos = j;
//			}
//
//		}
//
//		for (j = 0; j < M; j++)
//		{
//			if (arr[j][pos] < max)
//			{
//				break;
//			}
//		}
//
//		if (j == M)
//		{
//			printf("该鞍点为:%d行%d列%d\n", i, pos, arr[i][pos]);
//			flag = 1;
//			break;
//		}
//
//	}
//
//	if (flag == 0)
//	{
//		printf("没有鞍点\n");
//	}
//
//	return 0;
//}



// Q8
//int main()
//{
//	int N = 0;
//	int arr[100][100] = {0};
//	int i = 0,j = 0;
//	int row=0, col = 0;
//	int prerow = 0, precol = 0;
//	while (1)
//
//	{
//		printf("请输入胡魔方阵的阶数，阶数为3-100之内的奇数:");
//		scanf("%d", &N);
//		if (0 != N % 2 && (N >= 3 && N < 100))
//		{
//			break;
//		}
//	}
//
//	col = N / 2;
//	arr[row][col] = 1;
//	for (i = 2; i <= N * N; i++)
//	{
//		row--;
//		col++;
//		if (row < 0)
//		{
//			row = N - 1;
//		}
//		if (col >= N)
//		{
//			col = 0;
//		}
//		if (0 != arr[row][col])
//		{
//			row = prerow + 1;
//			col = precol;
//		}
//		arr[row][col] = i;
//		prerow = row;
//		precol = col;
//	}
//
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}












// Q9
//int main()
//{
//	int arr[] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	int k = 0;
//	printf("输入一个数字:");
//	scanf("%d", &k);
//
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//
//		int mid = (left + right)/2;
//		if (arr[mid] >k)
//		{
//			left = mid + 1;
//		}
//
//		else if (arr[mid]<k)
//		{
//			right= mid - 1;
//		}
//		else 
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("无此数");
//	}
//	return 0;
//}

//Q10

//int main()
//{
//	int i = 0, j = 0;
//	char arr[3][80] = { 0 };
//	int upper = 0, lower = 0, space = 0, digit = 0, other = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		gets(arr[i]);
//	}
//	
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; arr[i][j] != '\0'; j++)
//		{
//			if (arr[i][j]>='A' && arr[i][j]<='Z')
//			{
//				upper++;
//			}
//
//			else if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
//			{
//				lower++;
//			}
//			else if (arr[i][j] >= '0' && arr[i][j] <= '9')
//			{
//				digit++;
//			}
//			else if (arr[i][j] ==' ')
//			{
//				space++;
//			}
//			else 
//			{
//				other++;
//			}
//		}
//
//
//	}
//
//
//	printf("大写字母个数：%d\n", upper);
//	printf("小写字母个数：%d\n", lower);
//	printf("数字个数：%d\n", digit);
//	printf("空格个数：%d\n", space);
//	printf("其它字符个数：%d\n", other);
//
//	return 0;
//
//}





// Q11
/* 1.首行空格数等于行号 
   2.行数为九，*与‘ ’相间打印
   3. 每行打印printf("* ")五次*/ 


//int main()
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < 9; i++)
//	{
//		if (flag !=0 )
//		{
//			int k = 0;
//			for (k = 0; k < i; k++)
//			{
//				printf(" ");
//			}
//			int j = 0;
//			for (j = 0; j < 5; j++)
//			{
//				printf("* ");
//			}
//			flag = 0;
//			printf("\n");
//		}
//		else
//		{
//			printf("\n");
//			flag = 1;
//		}
//
//	}
//
//	return 0;
//}


// Q12


//int main()
//{
//	char s[100] = { 0 };
//	int i = 0;
//	gets(s);
//
//	for (i = 0; s[i] != '\0'; ++i)
//	{
//		if (s[i] >= 'A' && s[i] <= 'Z')
//		{
//			s[i] = 'A' + (26 - ( s[i]-'A') - 1);
//		}
//
//		if (s[i] >='a' && s[i] <= 'z')
//		{
//			s[i] = 'a' + (26 - (s[i]-'a') - 1);
//		}
//	}
//
//	printf("解码结果：%s\n", s);
//	return 0;
//}


// Q13
//int main()
//{
//	char s1[30] = {"I am a cat,"};
//	char s2[] = {"My name is mimi"};
//	int sz1 = sizeof(s1) / sizeof(s1[0]);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	for(int i = 0; i <=strlen(s2); i++)
//	{
//		for (int j = 0; j <= sz1; j++)
//		{
//	
//			if (j ==len1 + i)
//			{
//
//				s1[j] = s2[i];
//				break;
//				
//			}
//		}
//	}
//	printf("%s", s1);
//
//
//	return 0;
//}

// Q14

//int main()
//{
//	char s1[50] = { 0 };
//	char s2[50] = { 0 };
//	int i = 0;
//	int value = 0;
//	printf("请输入s1:");
//	gets(s1);
//	printf("请输入s2:");
//	gets(s2);
//	do
//	{
//		value += s1[i] - s2[i];
//		if (value != 0)
//			break;
//		i++;
//	} while (s1[i] != '\0' && s2[i] != '\0');
//
//	printf("%d", value);
//	return 0;
//}




// Q15

//int main()
//{
//	char s1[15] = { "Hello!" };
//	char s2[] = { "God,Damn!" };
//	int sz1 = sizeof(s1) / sizeof(s1[0]);
//	int sz2 = sizeof(s2) / sizeof(s1[0]);
//	for (int i = 0; i <=sz1 ; i++)
//	{
//		if(i<=sz2-1)
//		{
//			s1[i] = s2[i];
//		}
//	}
//	printf("%s", s1);
//	return 0;
//}










