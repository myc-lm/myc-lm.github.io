#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//strlen不算/0,sizeof算/0
//每调用一次函数，num增加1
int main()
{
	int num = 0;
		add(&num);
		printf("%d", add(&num));//printf的返回值是字符个数
	return 0;
}
int add(int* p)
{
	return (*p)+1;
}
//二分查找,在有序数组中找到一个具体的数
//int xiabiao(int arr[], int a, int k)
//{
//	int mid = 0;
//	int left = 0;
//	int right = k - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;//放进来！！
//		if (arr[mid] > a)
//			right = mid - 1;
//		else if (arr[mid] < a)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int x = 0;
//	int sz = 0;
//	int arr[] = {1,2,3,5,7,8,9};//数组里不能有东西
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 7;
//	x = xiabiao(arr,a,sz);
//	if (x == -1)
//		printf("没有找到\n");
//	else
//		printf("该元素下标是：%d\n", x);
//	return 0;
//}

////打印100-200的质数。
////质数：只能整除自己，从2到i-1整除，如果有的%0则不为质数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if ((is_prime(i)) == 1)
//			printf("%d ", i);
//	}
//}
//int is_prime(int j)
//{
//	int k = 0;
//	for (k = 2; k < j ; k++)
//	{
//		if (j%k == 0)
//			return 0;
//		//else if ((j%j-1)!=0)
//		//	return 1;//多此一举
//	}
//	return 1;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if ((i%j) == 0)
//				break;
//			else if ((i % (i - 1)) != 0)
//			{
//				printf("%d ", i);
//				break;
//			}
//		};
//		
//	};
//	return 0;
//}
//int main()//函数指针混合
//{
//	int a = 10;
//	int b = 20;
//	chan(&a,&b);
//	printf("%d %d",a,b);
//	return 0;
//}
////如果不用指针，实参传给形参只是值，而形参的结果对实参没有影响。（形参是实参的一份临时拷贝）
////用上指针就内外有联系。
//int chan(int* pa,int* pb)
//{
//	int c;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}