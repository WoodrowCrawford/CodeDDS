#include <iostream>
#include "ShopKeep.h"
#include "DynamicArray.h"




void sortNumbers(int arr[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		for (int j = lenght - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;

			}
		}
	}
}


template <typename T>
T add(T lhs, T rhs)
{
	return lhs + rhs;
}




int main()
{
	
	DynamicArray<int> test = DynamicArray<int>();
	test.addItem(5);
	test.addItem(3);
	test.addItem(4);
	test.addItem(2);
	test.addItem(1);
	test.sortItems();
	test.print();
	system("pause");

	
	
}

