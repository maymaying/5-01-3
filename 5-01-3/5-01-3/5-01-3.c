#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/*
//打印乘法口诀表
void ShowMutil(int n) 
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
}

//void ShowMutil(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j=1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
int main()
{
	ShowMutil(9);
	system("pause");
	return 0;
}
*/


/*
//void Swap(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;//形参a,b的值发生交换
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d,%d\n", a, b);
//	Swap(a, b);
//	printf("%d,%d\n", a, b);//此为打印实参a,b的值
//	system("pause");
//	return 0;             //结果为：10, 20
//                                  10, 20
//}


//void Swap1(int *p, int *q)
//{
//	int *tmp = p;
//	p = q;                //p,q交换的是a,b的地址
//	q = tmp;              //结果为：10, 20
////                                10, 20
//}
//void Swap2(int *p, int *q)
//{
//	int *tmp;
//	tmp = p;  //tmp	  0x00d5fdac {10}	int *
//	p = q;
//	q = tmp;                   //结果为：10, 20
////                                     10, 20
//}

void Swap3(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;                      //结果为：10, 20
//                                           10, 20      
}                      
int main()
{
	int a = 10;
	int b = 20;
	printf("%d,%d\n", a, b);
	Swap3(&a, &b);
	printf("%d,%d\n", a, b);//此为打印实参a,b的值
	system("pause");
	return 0;
}
*/


/*
//面试问题：预防野指针的方法？
int main()
{
	//char *str = "hellobit";   //readonly  只读 不可修改
	//printf("%s\n",str);      //结果为：hellobit
	//strcpy(str, "abcd");
	//printf("%s\n", str);

	//char str2[10];
	//strcpy(str2,"abcd");
	//printf("%s\n",str2);      //结果为：abcd

	//char *str = "hellobit";   //readonly只读
	//*(str+1) = 'g';
	//printf("%s\n",str);        //此段代码崩溃

	//char str2[] = "hello";
	//str2[1] = 'g';
	//printf("%s\n",str2);       //打印“hgllo”
	system("pause");
	return 0;
}
*/


/*
int LeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i = 2000;
	for (; i <= 3000; i++)
	{
		if (LeapYear(i) == 1)
		{
			printf("%d is leapYear\n", i);
		}
	}
	system("pause");
	return 0;
}
*/


/*
int IsPrime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt((double)n); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 300; i++)
	{
		if (IsPrime(i) == 1)
		{
			printf("%d is IsPrime\n", i);
		}
	}
	system("pause");
	return 0;
}
*/


/*
//创建一个数组， 实现函数init（）初始化数组、实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值。

void Init(int arr[], int len)
{
	int i = 0;
	for (; i < len; i++)
	{
		arr[i] = i;//*(arr+i) = i;
	}
}
void Empty(int arr[], int len)
{
	int i = 0;
	for (; i < len; i++)
	{
		arr[i] = 0;//*(arr+i) = 0
	}
}
void Show(int *arr, int len)
{
	int i = 0;
	for (; i < len; i++)
	{
		printf("%d ",arr[i]);//[]自带解引用 arr[i] ==> *(arr+i);
		//printf("%d ", *(arr + i));
	}
	printf("\n");
}
void SwapArr(int *arr, int left, int right)
{
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
}
void Reverse(int *arr, int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		SwapArr(arr, left, right);
		left++;
		right--;
	}
}

int main()
{
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr, len);
	Show(arr, len);
	//Empty(arr,len);
	//Show(arr,len);
	Reverse(arr, len);
	Show(arr, len);
	return 0;
}
*/


int Fun(int *arr, int len)
{
	int i;
	int tmp = 0;
	for (i = 0; i < len; i++)
	{
		tmp ^= arr[i];//异或
	}
	return tmp;
}
int main()
{
	int arr[] = { 1, 3, 2, 4, 3, 4, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int result = Fun(arr, len);
	printf("%d\n", result);
	system("pause");
	return 0;
}
