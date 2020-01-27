#include <iostream>
#include <cstdlib>
#include "Person.h"

using namespace std;

int main(int argc, char** argv) {
	Person personA, personB, personC;

	// Set value for each data member of the three instances
	personA.setName("Jimmy");
	personA.setAge(23);
	personA.setHeight(1.79);
	personA.setProfession("Business Analyst");

	personB.setName("Alba");
	personB.setAge(29);
	personB.setHeight(1.68);
	personB.setProfession("Marketing Manager");

	personC.setName("Joanne");
	personC.setAge(42);
	personC.setHeight(1.71);
	personC.setProfession("Physics Teacher");

	// Output the data members of each instance through the public print method
	personA.print();
	personB.print();
	personC.print();

	return 0;
}