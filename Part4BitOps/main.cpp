void main()
{
	const int N = 8;

	int a = 18 - N;
	int b = ~a; //result -11

	a = 89 - N;
	b = 122 - N;
	int c = a & b; //result 80

	a = 134 - N;
	b = 65 - N;
	c = a | b; //result 127

	a = 34 - N;
	b = 78 - N;
	c = a ^ b; //result 92

	a = 907 - N;
	b = N + 1;
	c = a << b; //result 460288

	a = -95 - N;
	b = N + 1;
	c = a >> b; //result -1
}