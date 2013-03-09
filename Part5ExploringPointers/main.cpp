#include <iostream>

void main()
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