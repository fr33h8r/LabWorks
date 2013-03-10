#include <iostream>
#include <time.h>
#include <conio.h>

struct Student
{
	char* citizenship;
	int course;
	double gpa;
};

double fRand(double fMin, double fMax);

void main()
{
	char* citizenship[7] = {"UKR", "RUS", "BLR", "BLG",	"MLD", "GEO"};
	srand((unsigned)time(NULL));
	const int count = 3265;
	Student students[count];

	for (int i = 0; i < count; i++)
	{
		students[i].citizenship = citizenship[rand()%6];
		students[i].course = rand()%5+1;
		students[i].gpa = fRand(3.0, 5.0);
	}

	int counter = 0;
	for (int i = 0; i < count; i++)
	{
		if(students[i].citizenship != "UKR" && students[i].gpa > 4.0)
			counter++;
	}
	std::cout<<"Total percentage: "<<(counter*100)/count<<"%"<<std::endl;
	_getch();
}

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}