#include <iostream>
using namespace std;

int main()
{
	/*
	* if (condition) {
	*	 // block of code to be executed if the condition is true
	*}
	*/
	if (20 > 18) {
		cout << "20 is greater than 18" << endl;
	}

	int x = 20;
	int y = 18;
	if (x > y) {
		cout << "x is greater than y" << endl;
	}

	/*
	* if (condition) {
	*	 // block of code to be executed if the condition is true
	*} else {
	*	 // block of code to be executed if the condition is false
	* }
	*/
	int time = 20;
	if (time < 18) {
		cout << "Good day." << endl;
	}
	else {
		cout << "Good evening." << endl;
	}

	/*
	* if (condition1) {
	*	 // block of code to be executed if the condition1 is true
	* } else if (condition2) {
	*	 // block of code to be executed if the condition1 is false
	*	and condition 2 is true
	* } else {
	*	// block of code to be executed if the condition1 and
	*	condition2 is false
	* }
	*/
	time = 14;
	if (time < 10) {
		cout << "Good Morning" << endl;
	}
	else if (time < 20) {
		cout << "Good Day" << endl;
	}
	else {
		cout << "Good evening" << endl;
	}

	/*
	* Ternary Operator
	*
	* variable = (condition) ? expressionTrue : expressionFalse;
	*/
	time = 20;
	string result = (time < 18) ? "Good day." : "Good Evening.";
	cout << result << endl;

	/*
	* Switch
	*
	* switch (expression) {
	*	case x:
	*		// code block
	*		break;
	*	case y:
	*		// code block
	*		break;
	*	default:
	*		// code block
	*		break;
	* }
	*/
	int day = 4;
	switch (day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	}

	/*
	* break
	*
	* When C++ reaches a break keyword,
	* it breaks out of the switch block.
	*/
	day = 6;
	switch (day) {
	case 6:
		cout << "Today is Saturday";
	case 7:
		cout << "Today is Sunday";
		break;
	default:
		cout << "Looking forward to the Weekend";
	}

	/*
	* default
	*
	* The default keyword specifies
	* some code to run if there is no case match
	*/
	day = 4;
	switch (day) {
	case 6:
		cout << "Today is Saturday";
		break;
	case 7:
		cout << "Today is Sunday";
		break;
	default:
		cout << "Looking forward to the Weekend";
	}
	return 0;
}
