#include <iostream>
#include <string>

struct car
{
	std::string brand;
	std::string model;
	int year;
};

int main()
{
    // Structure
	struct						// Declaration
	{
		int myNum;				// Member
		std::string myString;	// Member
	} myStructure;				// Variable

	// Access Structure Members
	// Assign values to members of myStructure
	myStructure.myNum = 1;
	myStructure.myString = "Hello World";

	// Print members of myStructure
	std::cout << myStructure.myNum << "\n";
	std::cout << myStructure.myString << "\n";

	// One Structure in Multiple Variables
	struct
	{
		int myNumbers;
		std::string myStr;
	} myStruct1, myStruct2, myStruct3; // Multiple structure variables
	// separated with commas

	struct
	{
		std::string brand;
		std::string model;
		int year;
	} myCar1, myCar2;

	// Put data into the first
	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 1999;

	// Put data into the second
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 1969;

	// Print the structure members
	std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";

	std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

	// Named Structures
	struct myDataType // This structure is named "myDataType"
	{
		int myNum;
		std::string myStr;
	};

	// Declare variable
	myDataType myVar;

	// Create a car structure and store it in myCar3
	car myCar3;
	myCar3.brand = "Ford";
	myCar3.model = "Mustang";
	myCar3.year = 1969;

	// Create another car structure and store it in myCar4
	car myCar4;
	myCar4.brand = "BMW";
	myCar4.model = "X5";
	myCar4.year = 1999;

	std::cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << "\n";

	std::cout << myCar4.brand << " " << myCar4.model << " " << myCar4.year << "\n";

	return 0;
}
