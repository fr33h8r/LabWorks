void main()
{
	const int count = 11;
	int *pointer = new int[count];
	unsigned long int result = 1;

	for(int i = 0; i < 11; i++)
	{
		*(pointer + i) = i%2 == 0 ? i+5 : 2*i+3;

		if(*(pointer + i) > 15)
			result *= *(pointer + i);
	}

	delete [] pointer;
}