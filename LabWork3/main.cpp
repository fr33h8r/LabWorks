#include <time.h>
#include <iostream>

void Part1();
void Part2();

void main()
{
	Part1();
	Part2();
}

void Part1()
{
	const int count = 10;

	char elem1[count];
	char elem2[count];
	char elem3[count];

	for(int i = 0; i < 10; i++)
	{
		elem1[i] = 45 + 2 * i;
		elem2[i] = 61 - 2 * i;

		if(elem1[i] == elem2[i])
			elem3[i] = elem1[i];
	}
	//в массиве elem3 одно значение, меньше 55. Среднего арифметического нет.
}

void Part2()
{
	const int rows = 4;
	const int cols = 5;
	srand((unsigned)time(NULL));
	int arr[rows][cols];
	double newArr[rows];


	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = rand() % 100 - 50;

	for (int i = 0; i < rows; i++)
	{
		int negativeCounter = 0;
		int tmpSum = 0;
		for (int j = 0; j < cols; j++)
		{
			if(arr[i][j] < 0)
			{
				tmpSum += arr[i][j];
				negativeCounter++;
			}
		}
		newArr[i] = tmpSum / negativeCounter;
	}

	for (int i = 0; i < rows; i++)
	{
		std::cout<<newArr[i]<<std::endl;
	}
}