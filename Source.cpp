#include <iostream>
#include <string>
#include <string.h>

int main()
{
	//sum of all test scores
	double sum = 0;
	double average;
	//will keep track of how many scores will there be
	int count =0;
	//Loop to keep on getting user value
	double userValue;
	do
	{
		std::cout << "Enter user test score (enter 0 to end): " << std::endl;
		//user string value
		std::string userScore;
		std::cin >> userScore;
		//converts string to double
		userValue = std::stod(userScore);
		// new new = old sum + user comverted score
		sum = sum + userValue;
			//places value
		count++;
		//gets the average
		average = sum / count;
	//when
	} while (userValue != 0);
	//takes away the 0 value.
	count--;
	std::cout << "Amount of test scores: " << count << std::endl;
	std::cout << "Test score average: " << average << std::endl;
	return 0;
}