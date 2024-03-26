# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* Q1 计算10年后的国民生产总值与现在相比增长的百分比 */ 
//int main()
//{
//	int n = 10;
//	float r = 0.07;
//	float p = 0;
//	/*printf("请给出未来多少年与现在的百分比:->");*/
//	/*scanf("%d", &n);*/
//	p = pow(1.0 + r, n);
//	printf("%f", p);
// return 0;
//}


/*Q2:存款利息的计算, 1000元，存五年按照一下五种方法存 */ 

// 1） 一次存五年
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



// 2） 现存两年，到期后将本息再存三年
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

//3）先存三年,到期后将本息再存两年
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
// 4） 一年一年存 存五年
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
// 5) 按季存，活期存款
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


/*Q3贷款d:300000元 每月还款p:6000元 利率r:1% 计算多少月能还清。*/

// 要求对求得月份取小数点后一位，对第二位按四舍五入处理


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






/* Q4-Q5 printf和scanf 的灵活运用*/

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







/* Q6 将“China”编译成密码，规律是：用原来字母后的第四个字母替换原来的字母*/

// 要求分别用putchar和printf输出这5个字符


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


/*Q7 已知圆半径r=1.5 圆柱h=3，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积*/

// 要求用scanf输入数据，输出计算结果时要有文字说明，取小数点后两位数字

//# define PI 3.1415926
//int main()
//{
//    float r, h;//定义半径、高
//    float perimeter;//圆周长
//    float area;//圆面积
//    float sphere_Surface_Area;//圆球表面积
//    float sphere_Volume;//圆球体积
//    float cylinder_Volume;//圆柱体积
//
//    printf("输入圆的半径和圆柱的高:->");
//    scanf("%f%f",&r,&h);
//    
//    perimeter = 2.0 * PI * r;
//    area = PI * pow(r,2);
//    sphere_Surface_Area = 4 * PI * pow(r,2);
//    sphere_Volume = 4.0 / 3.0 * PI * pow(r, 3);
//    cylinder_Volume = PI * pow(r, 2) * h;
//
//    //printf("圆的周长:%.2f\n圆的面积:%.2f\n圆的表面积:%.2f\n圆的体积:%.2f\n圆柱的体积:%.2f",perimeter,area,sphere_Surface_Area,sphere_Volume,cylinder_Volume);
//    printf("圆的周长:%.2f\n",perimeter);
//    printf("圆面积=%.2f\n", area);
//    printf("圆球表面积=%.2f\n", sphere_Surface_Area);
//    printf("圆球体积=%.2f\n", sphere_Volume);
//    printf("圆柱体积=%.2f\n", cylinder_Volume);
//}



/*Q8 getchar 读入两字符给c1、c2 后用putchar 和 printf 输出两个字符*/


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
