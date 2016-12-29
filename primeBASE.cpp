#include "primeBASE.h"
#include <iostream>
#include <fstream>
using namespace std;
primeBASE::primeBASE(int number = 0)
{
	//pontosan mikor kell használni a this-t?
	NUMBER = number;
	COUNT = 0;
	DATA = NULL;
	if (NUMBER != 0) { DATA = new int[NUMBER / 2]; }
	cout << "ez a BASE constructor! " << number << endl;
}
primeBASE::~primeBASE() { delete[] DATA; }


void primeBASE::findPrimeNumbers() {
	COUNT = 0;
	for (int i = 2; i <= NUMBER; i++)
	{
		int j;
		for (j = 2; j <= NUMBER / 2; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > i / 2)
		{
			//ha a j végig pörgött akkor nem találtunk osztót vagyis i prim
			DATA[COUNT] = i;
			COUNT++;
		}
	}
	for (int i = 0; i < COUNT; i++)
	{
		cout << DATA[i] << endl;
	}
}

void primeDERIVED::writeToFile()
{
	ofstream myfile;
	myfile.open("prime.txt");
	for (int i = 0; i < COUNT; i++)
	{
		myfile << DATA[i] << endl;
	}
	myfile.close();
}


primeDERIVED::primeDERIVED(int number) : primeBASE::primeBASE(number) {
	cout << "ez a DERIVED constructor! " << number << endl;
}

primeDERIVED::~primeDERIVED() {}






