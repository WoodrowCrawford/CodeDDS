#include <iostream>
#include "ShopKeep.h"



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
	
   int numbers[5] = {3, 5, 1, 4, 2};

	for (int i = 0; i < 5; i++)
	{
		std::cout << numbers[i];
	}
	
	sortNumbers(numbers, 5);

	auto sum = add<int>(4.234f, 3.643f);

	Shopkeep<int, 5> potionSeller = Shopkeep<int,5>();

}

