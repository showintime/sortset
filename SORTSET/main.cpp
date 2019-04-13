#include "iostream"

#define ISDEBUG

#define AMAX 10
typedef int MType;


void QuickSort(MType arr[],int len)
{

}


void InsertSortDG(MType arr[], int len)
{

	if (len == 1)
	{
		return;
	}

	InsertSortDG(arr, len - 1);

	int i = 0;
	MType tema = arr[len - 1];
	for (i = len - 1; i > 0 && tema < arr[i - 1]; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[i] = tema;
}

void InsertSort(MType arr[], int len)
{
	std::cout << "InsertSort数据" << std::endl;
	int i = 0, j = 0;
	MType tema;
	for (i = 1; i < len; i++)
	{
		tema = arr[i];
		for (j = i ; j > 0 && tema < arr[j - 1]; j--)
		{
			

			arr[j] = arr[j - 1];;


			
		}
		arr[j]=tema;

	}
}


void BubbleSortJW(MType arr[], int len)
{
	std::cout << "BubbleSortJW数据" << std::endl;
	int i = 0, j = 0;
	int compilecounts = 0;
	int swapcounts = 0;
	int flag = 0;
	MType tema;
	for (i = 0; i < len/2; i++)
	{
		flag = 0;
		for (j = i; j < len - 1 - i; j++)
		{


			compilecounts++;
			if (arr[j] > arr[j + 1])
			{
				tema = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tema;

				flag = 1;
				swapcounts++;
			}

		}
		if (flag == 0)
		{
			break;
		}
		
		flag = 0;
		for (j = len - 1 - i - 1; j > i; j--)
		{
			compilecounts++;
			if (arr[j] < arr[j - 1])
			{
				tema = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tema;

				flag = 1;
				swapcounts++;
			}
		}
		if (flag == 0)
		{
			break;
		}
		
	}
	std::cout << compilecounts << "次比较" << std::endl;
	std::cout << swapcounts << "次交换" << std::endl;



}

void BubbleSort(MType arr[],int len)
{
	std::cout << "BubbleSort数据" << std::endl;
	int i = 0, j = 0;
	int compilecounts = 0;
	int swapcounts = 0;
	int flag = 0;
	MType tema;
	for (i = 0; i < len - 1; i++)
	{
		flag = 0;
		for (j = 0; j < len - 1 - i; j++)
		{


			compilecounts++;
			if (arr[j] > arr[j + 1])
			{
				tema = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tema;

				flag = 1;
				swapcounts++;
			}
			
		}
		if (flag == 0)
		{
			break;
		}
	}
	std::cout << compilecounts << "次比较" << std::endl;
	std::cout << swapcounts << "次交换" << std::endl;

}

void disp(MType arr[],int len)
{
	
	for (int i = 0; i < len; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}


int main()
{
	MType arr4[5] = { 2,3,1,4,5 };
	MType arr[AMAX] = { 0 };
	MType arr1[AMAX] = { 0 };
	MType arr2[AMAX] = { 0 };
	MType arr3[AMAX] = { 0 };
	for (int i = 0; i < AMAX; i++)
	{
		arr[i] = AMAX - i;
		arr1[i] = AMAX - i;
		arr2[i] = AMAX - i;
		arr3[i] = AMAX - i;
	}
	
	std::cout << "原数据" << std::endl;
	disp(arr, AMAX);


	
	BubbleSort(arr, AMAX);
	disp(arr, AMAX);
	BubbleSortJW(arr1, AMAX);
	disp(arr1, AMAX);
	InsertSort(arr2, AMAX);
	disp(arr2, AMAX);
	InsertSortDG(arr3, AMAX);
	disp(arr3, AMAX);
	




	return 0;
}