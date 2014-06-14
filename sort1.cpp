#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#define MAXLEN 100	

using namespace std;

int partition(int arr[],int left, int right);
void bubble_sort(int arr[]);
void swap(int *a, int *b);
void insert_sort(int arr[]);
void select_sort(int arr[]);
void quick_sort(int arr[],int left, int right);
void heap_sort(int *arr, int len);
void merge_sort(int *arr, int low, int high);
void shell_sort(int *arr, int len);
void merge(int *arr, int low, int mid, int high);
void heap_adjust(int *arr, int i, int len);
void print(int *arr);
void init_number(int *a1,int *a2, int *a3, int *a4, int *a5, int *a6, int *a7);
void build_heap(int *arr, int len);

int main()
{
	int a1[MAXLEN],a2[MAXLEN],a3[MAXLEN],a4[MAXLEN],a5[MAXLEN];
	int a6[MAXLEN],a7[MAXLEN];
	int i;
	init_number(a1,a2,a3,a4,a5,a6,a7);

	printf("Before the sort:\n");
	print(a1);

	printf("After the bubble_sort:\n");
	bubble_sort(a1);
	print(a1);

	printf("After the insert_sort:\n");
	insert_sort(a2);
	print(a2);

	printf("After the selcet_sort:\n");
	select_sort(a3);
	print(a3);

	printf("After the quick_sort:\n");
	quick_sort(a4, 0, MAXLEN-1);
	print(a4);

	printf("After the heap_sort:\n");
	build_heap(a5, MAXLEN);
	heap_sort(a5, MAXLEN);
	print(a5);

	printf("After the merge_sort:\n");
	merge_sort(a6, 0, MAXLEN);
	print(a6);

	printf("After the shell_sort:\n ");
	shell_sort(a7, MAXLEN);
	print(a7);
	return 0;
}

void init_number(int *a1,int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
	int i,temp;
	srand(time(NULL));
	for(i = 0; i<MAXLEN; i++)
	{
		temp = (rand()%1000);
		a1[i] = temp;
		a2[i] = temp;
		a3[i] = temp;
		a4[i] = temp;
		a5[i+1] = temp;
		a6[i] = temp;
		a7[i] = temp;
	}
}

void print(int *arr)
{
	int i;
	for(i = 0; i<MAXLEN; i++)
	{
		printf("%5d",arr[i]);
		if((i+1)%10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *arr)
{
	for(int i = 0; i != MAXLEN - 1; ++i)
	{
		bool flag = false;
		for(int j = MAXLEN - 1; j > i; --j)
		{
			if(arr[j-1] > arr[j])
			{
				swap(&arr[j-1], &arr[j]);
				flag = true;
			}
		}
		if(flag == false)
			return;
	}
}

void insert_sort(int *arr)
{
	for(int i = 1; i != MAXLEN; ++i)
	{
		if(arr[i-1] > arr[i])
		{
			int temp = arr[i];
			int j;
			for(j = i; j > 0 && temp < arr[j-1]; j--)
			{
				arr[j] = arr[j-1];
			}
			arr[j] = temp;
		}
	}
}

void select_sort(int *arr)
{
	for(int i = 0; i != MAXLEN - 1; ++i)
	{
		int min = i;
		for(int j = i + 1; j != MAXLEN; ++j)
		{
			if(arr[j] < arr[min])
				min = j;
		}
		if(min != i)
		{
			swap(&arr[i], &arr[min]);
		}
	}
}

int partition(int *arr, int left, int right)
{
	int pivot = arr[left];
	while(left < right)
	{
		while(left < right && arr[right] >= pivot)
			right--;
	//	swap(&arr[left], &arr[right]);
		arr[left] = arr[right];
		while(left < right && arr[left] <= pivot)
			left++;
	//	swap(&arr[left], &arr[right]);
		arr[right] = arr[left];
	}
	arr[left] = pivot;
	return left;
}

void quick_sort(int *arr, int left, int right)
{
	if(left < right)
	{
		int pivot = partition(arr, left, right);
		quick_sort(arr, left, pivot - 1);
		quick_sort(arr, pivot + 1, right);
	}
}

void heap_adjust(int *arr, int i, int len)
{
	int left = 2*i;
	int right = left + 1;
	int max;
	if(left < len && arr[i] < arr[left])
	{
		max = left;
	}
	else
	{
		max = i;
	}
	if(right < len && arr[right] > arr[max])
	{
		max = right;
	}
	if(max != i)
	{
		swap(&arr[i], &arr[max]);
		heap_adjust(arr, max, len);
	}
}

void  build_heap(int *arr, int len)
{
	int i = len/2;
	for(; i > 0; i--)
	{
		heap_adjust(arr, i, len);
	}
}

void heap_sort(int *arr, int len)
{
	for(int i = len; i > 0; i--)
	{
		swap(&arr[i], &arr[0]);
		heap_adjust(arr, 0, i);
	}
}

void merge(int *arr, int low, int mid, int high)
{
	int i, j, k;
	int temp[MAXLEN] = {0};
	for(k = low; k <= high; k++)
	{
		temp[k] = arr[k];	//将arr中所有元素复制到temp中
	}
	for(i=low, j=mid+1, k=i; i <= mid && j <= high; k++)
	{
		if(temp[i] < temp[j]) //比较temp的左右两段中的元素
			arr[k] = temp[i++];	//将较小值复制到arr中
		else
			arr[k] = temp[j++];
	}
	while(i <= mid)
	{
		arr[k++] = temp[i++];
	}
	while(j <= high)
	{
		arr[k++] = temp[j++];
	}
}

void merge_sort(int *arr, int low, int high)
{
	if(low < high)
	{
		int mid = (low + high)/2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid+1, high);
		merge(arr, low, mid, high); //归并
	}
}

//希尔排序
void shell_sort(int *arr, int len)
{
	int dis;
	for(dis = len/2; dis >= 1; dis = dis/2)
	{
		for(int i = dis; i < len; ++i)
		{
			if(arr[i - dis] > arr[i])
			{
				int temp = arr[i];
				int j;
				for(j = i; j > 0 && temp < arr[j-dis]; j = j-dis)
				{
					arr[j] = arr[j-dis];
				}
				arr[j] = temp;
			}
		}
	}
}
