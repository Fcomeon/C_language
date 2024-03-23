# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//
//	printf("%s", pc);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//
//	// 因为两个数组的存储在不同的地址之中，所以首地址不同
//	//if (arr1 == arr2)
//	//	printf("hehe");
//	//else
//	//	printf("haha");
//
//	return 0;
//}



//int main()
//{
//	int arr[4] = {0}; // 整形数组
//	char ch[5] = {0};  // 字符数组
//	int* parr[1];  // 存放整形指针的数组 -指针数组
//	char* pch[1];  // 存放字符指针的数组 -指针数组
//
//	return 0;
//}


//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i]+j)); // 数组名中存放的是首元素地址，+1表示往后移动一个地址
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 编不过去，理解流程表达的含义即可。

//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char* arr[] = { "bit"};
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


// 数组指针

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);     //用数组和指针打印的结果一样
//	  //printf("%d", *(p+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p === %p\n",p+i,&arr[i]);
//	}
//	return 0;*/
//}


//int main()
//{
//	typedef unsigned int  unit;  //一般类型起别名的方式
//
//	void(* signal(int, void(*)) )(int); // 函数指针起别名的方式
//	typedef void(*pfun_t)(int);
//	pfun_t singal(int, pfun_t);
//}
//


//int Add(int a, int b)
//{
//	int x = a; int y = b;
//
//	return x + y;
//}

//int main()
//
//{
//	/*int a=10, b = 20;*/
//	int (*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));  //直接用指针调用
//	printf("%d\n", (*pa)(2,3));  // 指针解引用在调用
//	return 0;  //执行程序后发现结果一致。
//}


//int Add(int a, int b)
//{
//	int x = a; int y = b;
//
//	return x + y;
//}
//
//int Sub(int a, int b)
//{
//	int x = a,y = b;
//	return x - y;
//
//}
//
//int Mul(int a, int b)
//{
//	int x = a; int y = b;
//
//	return x * y;
//}
//
//int Div(int a, int b)
//{
//	int x = a; int y = b;
//
//	return x / y;
//}



//int main()
//{
//	int* arr[5];
//	int (*pa)(int, int) = Add;  //Sub/Mul/Div
//
//	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };  // 可以放个循环让用户选[1-4]做计算器
//	return 0;
//}


menu()
{
	printf("********   计算器   ********\n");
	printf("********   加法选1  ********\n");
	printf("********   减法选2  ********\n");
	printf("********   乘法选3  ********\n");
	printf("********   除法选4  ********\n");

}

int Add(int a, int b)
{
	int x = a; int y = b;

	return x + y;
}

int Sub(int a, int b)
{
	int x = a, y = b;
	return x - y;

}

int Mul(int a, int b)
{
	int x = a; int y = b;

	return x * y;
}

int Div(int a, int b)
{
	int x = a; int y = b;

	return x / y;
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	do 
//	{
//		menu();
//		printf("请选择:->");
//		scanf("%d",&input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d",&x,&y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//
//		}
//		else if(input == 0)
//		{
//			printf("退出\0");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//}

//void Calc(int (*pf)(int, int) ) // 回调函数，根据所传地址去调用指定的函数
//{
//	int x=0, y = 0;
//	printf("请输入两个操作数:->");
//	scanf("%d%d",&x,&y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//
//		menu();
//		printf("请选择:->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("退出\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

