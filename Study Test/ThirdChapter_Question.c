# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* Q1 ����10���Ĺ���������ֵ��������������İٷֱ� */ 
//int main()
//{
//	int n = 10;
//	float r = 0.07;
//	float p = 0;
//	/*printf("�����δ�������������ڵİٷֱ�:->");*/
//	/*scanf("%d", &n);*/
//	p = pow(1.0 + r, n);
//	printf("%f", p);
// return 0;
//}


/*Q2:�����Ϣ�ļ���, 1000Ԫ�������갴��һ�����ַ����� */ 

// 1�� һ�δ�����
//
//int main()
//{
//	int n = 5;
//	float r = 0.03;
//	float p = 0;
//	p = 1000 * (1 + n * r);
//	printf("%f", p);
//	return 0;
//}



// 2�� �ִ����꣬���ں󽫱�Ϣ�ٴ�����
//int main()
//{
//	int n = 2;
//	float r = 0.021;
//	float p = 0;
//	p = 1000 * (1 + n * r);
//	
//	n = 3;
//	r = 0.0275;
//	p = p * (1 + n * r);
//	printf("%f", p);
//	return 0;
//}

//3���ȴ�����,���ں󽫱�Ϣ�ٴ�����
//int main()
//{
//	int n = 3;
//	float r = 0.0275;
//	float p = 0;
//	p = 1000 * (1.0000 + n * r);
//
//	n = 2;
//	r = 0.021;
//	p *= (1 + n * r);
//	printf("%f", p);
//	return 0;
//
//	return 0;
//}
// 4�� һ��һ��� ������
//int main()
//{
//	int n = 5;
//	float r = 0.015;
//	float p = 0;
//
//	p = 1000 * pow(1.0 + r, n);
//	printf("%f", p);
//
//	return 0;
//}
// 5) �����棬���ڴ��
//int main()
//{
//	int n= 5;
//	float r = 0.0035;
//	float p = 0;
//
//	p = 1000 * pow(1.0 + r / 4.0, 4.0 * n);
//	printf("%f", p);
//
//	return 0;
//}


/*Q3����d:300000Ԫ ÿ�»���p:6000Ԫ ����r:1% ����������ܻ��塣*/

// Ҫ�������·�ȡС�����һλ���Եڶ�λ���������봦��


//int main()
//{
//	int d = 300000;
//	int p = 6000;
//	float r = 0.01;
//	float m = 0;
//
//	m = log(p / (p - d * r)) / log(1.0 + r);
//	printf("%.2f", m);
//
//	return 0;
//}






/* Q4-Q5 printf��scanf ���������*/

// Q4
//int main()
//{
//	
//	char c1, c2;  // int c1,c2
//	c1 = 97;  //197
//	c2 = 98;  //198
//
//	printf("c1=%c,c2=%c\n", c1, c2);
//	printf("c1=%d,c2=%d\n", c1, c2);
//
//	return 0;
//}


//Q5
//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%db=%d", &a,&b);   
//	scanf("%f%e", &x, &y);
//	scanf("%c%c", &c1,&c2);
//	/*a=3b=7 8.5 71.82Aa*/
//
//	printf("%d,%d\n",a,b);
//	printf("%f%e\n", x, y );  
//	printf("%c%c",c1,c2);
//	/*3,7
//	8.5000007.182000e+01
//	Aa*/
//	return 0;
//}







/* Q6 ����China����������룬�����ǣ���ԭ����ĸ��ĵ��ĸ���ĸ�滻ԭ������ĸ*/

// Ҫ��ֱ���putchar��printf�����5���ַ�


//int main()
//{
//	char c1='C',c2='h',c3='i', c4='n', c5='a';
//	c1 += 4;
//	c2 += 4;
//	c3 += 4;
//	c4 += 4;
//	c5 += 4;
//	putchar(c1),putchar(c2),putchar(c3), putchar(c4),putchar(c5);
//	printf("\n%c%c%c%c%c", c1, c2, c3, c4, c5);
//
//	return 0;
//}


/*Q7 ��֪Բ�뾶r=1.5 Բ��h=3����Բ�ܳ���Բ�����Բ��������Բ�������Բ�����*/

// Ҫ����scanf�������ݣ����������ʱҪ������˵����ȡС�������λ����

//# define PI 3.1415926
//int main()
//{
//    float r, h;//����뾶����
//    float perimeter;//Բ�ܳ�
//    float area;//Բ���
//    float sphere_Surface_Area;//Բ������
//    float sphere_Volume;//Բ�����
//    float cylinder_Volume;//Բ�����
//
//    printf("����Բ�İ뾶��Բ���ĸ�:->");
//    scanf("%f%f",&r,&h);
//    
//    perimeter = 2.0 * PI * r;
//    area = PI * pow(r,2);
//    sphere_Surface_Area = 4 * PI * pow(r,2);
//    sphere_Volume = 4.0 / 3.0 * PI * pow(r, 3);
//    cylinder_Volume = PI * pow(r, 2) * h;
//
//    //printf("Բ���ܳ�:%.2f\nԲ�����:%.2f\nԲ�ı����:%.2f\nԲ�����:%.2f\nԲ�������:%.2f",perimeter,area,sphere_Surface_Area,sphere_Volume,cylinder_Volume);
//    printf("Բ���ܳ�:%.2f\n",perimeter);
//    printf("Բ���=%.2f\n", area);
//    printf("Բ������=%.2f\n", sphere_Surface_Area);
//    printf("Բ�����=%.2f\n", sphere_Volume);
//    printf("Բ�����=%.2f\n", cylinder_Volume);
//}



/*Q8 getchar �������ַ���c1��c2 ����putchar �� printf ��������ַ�*/


//int main()
//{
//	int c1, c2; //int c1, c2;
//	c1=getchar();
//	c2 = getchar();
//	printf("%c\n", c1);
//	putchar(c2);
//
//	printf("\n%d\n", c1);
//
//	return 0;
//}
