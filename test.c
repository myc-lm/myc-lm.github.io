#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//strlen����/0,sizeof��/0
//ÿ����һ�κ�����num����1
int main()
{
	int num = 0;
		add(&num);
		printf("%d", add(&num));//printf�ķ���ֵ���ַ�����
	return 0;
}
int add(int* p)
{
	return (*p)+1;
}
//���ֲ���,�������������ҵ�һ���������
//int xiabiao(int arr[], int a, int k)
//{
//	int mid = 0;
//	int left = 0;
//	int right = k - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;//�Ž�������
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
//	int arr[] = {1,2,3,5,7,8,9};//�����ﲻ���ж���
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 7;
//	x = xiabiao(arr,a,sz);
//	if (x == -1)
//		printf("û���ҵ�\n");
//	else
//		printf("��Ԫ���±��ǣ�%d\n", x);
//	return 0;
//}

////��ӡ100-200��������
////������ֻ�������Լ�����2��i-1����������е�%0��Ϊ����
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
//		//	return 1;//���һ��
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
//int main()//����ָ����
//{
//	int a = 10;
//	int b = 20;
//	chan(&a,&b);
//	printf("%d %d",a,b);
//	return 0;
//}
////�������ָ�룬ʵ�δ����β�ֻ��ֵ�����βεĽ����ʵ��û��Ӱ�졣���β���ʵ�ε�һ����ʱ������
////����ָ�����������ϵ��
//int chan(int* pa,int* pb)
//{
//	int c;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}