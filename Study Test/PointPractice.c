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
//	// ��Ϊ��������Ĵ洢�ڲ�ͬ�ĵ�ַ֮�У������׵�ַ��ͬ
//	//if (arr1 == arr2)
//	//	printf("hehe");
//	//else
//	//	printf("haha");
//
//	return 0;
//}



//int main()
//{
//	int arr[4] = {0}; // ��������
//	char ch[5] = {0};  // �ַ�����
//	int* parr[1];  // �������ָ������� -ָ������
//	char* pch[1];  // ����ַ�ָ������� -ָ������
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
//			printf("%d", *(parr[i]+j)); // �������д�ŵ�����Ԫ�ص�ַ��+1��ʾ�����ƶ�һ����ַ
//		}
//		printf("\n");
//	}
//	return 0;
//}


// �಻��ȥ��������̱��ĺ��弴�ɡ�

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


// ����ָ��

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
//		printf("%d", arr[i]);     //�������ָ���ӡ�Ľ��һ��
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
//	typedef unsigned int  unit;  //һ������������ķ�ʽ
//
//	void(* signal(int, void(*)) )(int); // ����ָ��������ķ�ʽ
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
//	printf("%d\n", pa(2, 3));  //ֱ����ָ�����
//	printf("%d\n", (*pa)(2,3));  // ָ��������ڵ���
//	return 0;  //ִ�г�����ֽ��һ�¡�
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
//	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };  // ���ԷŸ�ѭ�����û�ѡ[1-4]��������
//	return 0;
//}


menu()
{
	printf("********   ������   ********\n");
	printf("********   �ӷ�ѡ1  ********\n");
	printf("********   ����ѡ2  ********\n");
	printf("********   �˷�ѡ3  ********\n");
	printf("********   ����ѡ4  ********\n");

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
//		printf("��ѡ��:->");
//		scanf("%d",&input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d %d",&x,&y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\0");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//}

//void Calc(int (*pf)(int, int) ) // �ص�����������������ַȥ����ָ���ĺ���
//{
//	int x=0, y = 0;
//	printf("����������������:->");
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
//		printf("��ѡ��:->");
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
//			printf("�˳�\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

