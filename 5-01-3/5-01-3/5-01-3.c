#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/*
//��ӡ�˷��ھ���
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
//	b = tmp;//�β�a,b��ֵ��������
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d,%d\n", a, b);
//	Swap(a, b);
//	printf("%d,%d\n", a, b);//��Ϊ��ӡʵ��a,b��ֵ
//	system("pause");
//	return 0;             //���Ϊ��10, 20
//                                  10, 20
//}


//void Swap1(int *p, int *q)
//{
//	int *tmp = p;
//	p = q;                //p,q��������a,b�ĵ�ַ
//	q = tmp;              //���Ϊ��10, 20
////                                10, 20
//}
//void Swap2(int *p, int *q)
//{
//	int *tmp;
//	tmp = p;  //tmp	  0x00d5fdac {10}	int *
//	p = q;
//	q = tmp;                   //���Ϊ��10, 20
////                                     10, 20
//}

void Swap3(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;                      //���Ϊ��10, 20
//                                           10, 20      
}                      
int main()
{
	int a = 10;
	int b = 20;
	printf("%d,%d\n", a, b);
	Swap3(&a, &b);
	printf("%d,%d\n", a, b);//��Ϊ��ӡʵ��a,b��ֵ
	system("pause");
	return 0;
}
*/


/*
//�������⣺Ԥ��Ұָ��ķ�����
int main()
{
	//char *str = "hellobit";   //readonly  ֻ�� �����޸�
	//printf("%s\n",str);      //���Ϊ��hellobit
	//strcpy(str, "abcd");
	//printf("%s\n", str);

	//char str2[10];
	//strcpy(str2,"abcd");
	//printf("%s\n",str2);      //���Ϊ��abcd

	//char *str = "hellobit";   //readonlyֻ��
	//*(str+1) = 'g';
	//printf("%s\n",str);        //�˶δ������

	//char str2[] = "hello";
	//str2[1] = 'g';
	//printf("%s\n",str2);       //��ӡ��hgllo��
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
//����һ�����飬 ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ��

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
		printf("%d ",arr[i]);//[]�Դ������� arr[i] ==> *(arr+i);
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
		tmp ^= arr[i];//���
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
