typedef unsigned char byte;

void Part1Integers();
void Part2FloatTypes();
void Part3ArithmeticOps();
void Part4BitOps();
void Part5LogicOps();
void Part6ExploringPointers();
void Part7ExploringChars();

void main()
{
	Part1Integers();
	Part2FloatTypes();
	Part3ArithmeticOps();
	Part4BitOps();
	Part5LogicOps();
	Part6ExploringPointers();
	Part7ExploringChars();
}

void Part1Integers()
{
	//short constant
	short shortNumber1 = 0x8a;
	short shortNumber2 = 64;
	short shortNumber3 = -136;

	//int constants
	int intNumber1 = (int)-5.67; //in runtime will rounded to integer value
	int intNumber2 = 98;
	int intNumber3 = 209754;

	//long constants
	long longNumber1 = 361;
	long longNumber2 = (long)78.9;
	long longNumber3 = -2973738122;

	//byte constants
	byte byteNumber1 = 588;
	byte byteNumber2 = 63;
	byte byteNumber3 = -99;

	//unsigned short constants
	unsigned short unShortNum1 = 87654;
	unsigned short unShortNum2 = 90;
	unsigned short unShortNum3 = 6543;
}

void Part2FloatTypes()
{
	float floatNumber1 = (float)-0.002345087;
	float floatNumber2 = (float)2938485763.12;
	float floatNumber3 = (float)786.32E+54;

	double doubleNumber1 = -0.357E+52;
	//double doubleNumber2 = -49.465E+104125;
}

void Part3ArithmeticOps()
{
	int N = 7;
	int a = 23-N;
	int b = ~802;

	//sum
	a = 45;
	b = -256;
	int c = a + b;

	//subtract
	a = 63;
	b = 27;
	c = a - b;

	//multiply
	a = 14;
	b = 3;
	c = a * b;

	//int divide
	a = 21;
	b = 3;
	c = a / b; //result 7

	a = 21;
	b = 2;
	c = a / b; //result 10

	//module
	a = 27;
	b = 7;
	c = a % b; //result 6

	//divide
	a = 102;
	b = 9;
	double d = (double)a / (double)b; //11.3(3)
}

void Part4BitOps()
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

void Part5LogicOps()
{
	int a1 = 17;
	int b1 = 11;
	int c1 = 47;
	int d1 = 59;

	bool res = !(a1 || b1) >= (!(c1 == d1)); //false


	double a = 34.5;
	double b = 34.5;
	int c = 43;
	int d = 56;

	res = !(a || b) >= (!(c == d)); //false
}

void Part6ExploringPointers()
{
	//описание переменных программы и присвоение им значений
	unsigned short shortNum = 380;
	int intNum = 265;
	float floatNum = -21.5437711;
	double doubleNum = 99.9e-20;

	//описание и инициализация указателей
	unsigned short *pShortNum = &shortNum;
	int *pIntNum = &intNum;
	float *pFloatNum = &floatNum;
	double *pDoubleNum = &doubleNum;
	//адреса в памяти, отведенные значениям переменных и указателям на эти переменные, совпадают

	//нетипизированный указатель
	void *pVoid;

	//определение размера объектов программы
	int size = sizeof(shortNum); //size = 2
	size = sizeof(intNum); //size = 4
	size = sizeof(floatNum); //size = 4
	size = sizeof(doubleNum); //size = 8

	size = sizeof(pShortNum); //size = 4
	size = sizeof(pIntNum); //size = 4
	size = sizeof(pFloatNum); //size = 4
	size = sizeof(pDoubleNum); //size = 4

	//инициализация нетипизированного указателя типизированными
	pVoid = pShortNum;
	pVoid = pIntNum;
	pVoid = pFloatNum;
	pVoid = pDoubleNum;

	// описания ссылок
	unsigned short &refShortNum = shortNum;
	int &refIntNum = intNum;
	float &refFloatNum = floatNum;
	double &refDoubleNum = doubleNum;
}

#include <iostream>
void Part7ExploringChars()
{
	char c1 = 'V';
	char c2 = '|';
	char c3 = '3';

	char c4 = 0x14;
	char c5 = 0x5e;
	char c6 = 0x2e;
}