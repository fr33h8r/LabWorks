#include <iostream>
void main()
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