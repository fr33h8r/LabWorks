#include <iostream>

void main()
{
	//�������� ���������� ��������� � ���������� �� ��������
	unsigned short shortNum = 380;
	int intNum = 265;
	float floatNum = -21.5437711;
	double doubleNum = 99.9e-20;

	//�������� � ������������� ����������
	unsigned short *pShortNum = &shortNum;
	int *pIntNum = &intNum;
	float *pFloatNum = &floatNum;
	double *pDoubleNum = &doubleNum;
	//������ � ������, ���������� ��������� ���������� � ���������� �� ��� ����������, ���������

	//���������������� ���������
	void *pVoid;

	//����������� ������� �������� ���������
	int size = sizeof(shortNum); //size = 2
	size = sizeof(intNum); //size = 4
	size = sizeof(floatNum); //size = 4
	size = sizeof(doubleNum); //size = 8
	
	size = sizeof(pShortNum); //size = 4
	size = sizeof(pIntNum); //size = 4
	size = sizeof(pFloatNum); //size = 4
	size = sizeof(pDoubleNum); //size = 4

	//������������� ����������������� ��������� ���������������
	pVoid = pShortNum;
	pVoid = pIntNum;
	pVoid = pFloatNum;
	pVoid = pDoubleNum;

	// �������� ������
	unsigned short &refShortNum = shortNum;
	int &refIntNum = intNum;
	float &refFloatNum = floatNum;
	double &refDoubleNum = doubleNum;
}