#include <stdio.h>

//task2
void writeArray(int* arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//task2
void readArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

//Сортировка слиянием
void mergeSort(int* a, int l, int r)
{
	if (l == r) return;
	int mid = (l + r) / 2;

	mergeSort(a, l, mid);
	mergeSort(a, mid + 1, r);
	int i = l;
	int j = mid + 1;
	int* tmp = (int*)malloc(r * sizeof(int));
	for (int step = 0; step < r - l + 1; step++)
	{
		if ((j > r) || ((i <= mid) && (a[i] < a[j])))
		{
			tmp[step] = a[i];
			i++;
		}
		else
		{
			tmp[step] = a[j];
			j++;
		}
	}
	for (int step = 0; step < r - l + 1; step++)
		a[l + step] = tmp[step];
}

//task4
void sort(int* arr, int n)
{
	mergeSort(arr, 0, n - 1);
}
