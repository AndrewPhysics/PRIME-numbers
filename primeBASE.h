#pragma once
#ifndef primeBASE_h_
#define primeBASE_h_
class primeBASE
{
public:
	primeBASE(int number);
	~primeBASE();
	void findPrimeNumbers();
protected:
	int NUMBER;//number
	int* DATA;//data pointer
	int COUNT;//count
};

class primeDERIVED : public primeBASE
{
public:
	primeDERIVED(int number = 0);
	~primeDERIVED();
public:
	void writeToFile();
};

#endif

