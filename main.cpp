#include <iostream>
#include "primeBASE.h"
using namespace std;



int main() {

	//primeBASE p1(100);
	//p1.findPrimeNumbers();
	//p1.writeToFile();

	//primeDERIVED p2(333);
	//p2.findPrimeNumbers();
	//p2.writeToFile();

	primeDERIVED* p1;
	p1 = new primeDERIVED(333);
	p1->findPrimeNumbers();
	delete p1;

	system("pause");
	return 0;
}