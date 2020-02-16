#include <stdio.h>
#include <conio.h>

int binarySearch();
int main()
{
	int arrayData[100], query, size, i, result;
	printf("Enter size of array: \n");
	scanf("%d", &size);

	printf("Enter %d values of array: \n",size);
	for (i = 0; i < size; ++i)
	{
		printf("value at index %d: ",i);
		scanf("%d", &arrayData[i]);		
	}


	printf("Enter your query: \n");
	scanf("%d", &query);

	result = binarySearch(arrayData, query, 1, size);
	if (result!=-1)
	{
		printf("%d found at index %d \n",query, result);
	}
	else
		printf("Not found !!!\n");
	printf("\n");
	return 0;
}
int binarySearch(int arrayData[], int query, int low, int high)
{
	while(low<=high)
	{
		int mid = low + (high - low)/2;
		if (arrayData[mid] == query)
		{
			return mid;
		}
		if (arrayData[mid] <= query)
		{
			low = mid + 1;
		}
		if (arrayData[mid] >= query)
		{
			high = mid - 1;
		}
	}

	return -1;
}