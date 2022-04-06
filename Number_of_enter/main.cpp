#include <iostream>
using namespace std;
#define offset "\t\t\t\t"

void main()
{
	setlocale(LC_ALL, "");
	int array_size, counter;
	cout << offset << "введите размер массива: "; cin >> array_size;
	int* array = new int[array_size];
	bool* array_bool = new bool[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << offset << "¬ведите элемент #" << i + 1 << " -> "; cin >> array[i];
		array_bool[i] = false;
	}
	cout << endl;
	for (int i = 0; i < array_size; i++)
	{
		counter = 1;
		for (int j = i + 1; j < array_size; j++)
		{
			if (array[i] == array[j])
			{
				if (array_bool[j] == false)
				{
					counter++;
					array_bool[j] = true;
				}
			}
		}
		if (!array_bool[i])	cout << offset << "Ёлемент '" << array[i] << "' - число вхождений: " << counter << " раз(а)" << endl;
	}
}