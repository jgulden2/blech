// automatedMathTest.cpp
// This program simulates a simple math test involving
// addition, subtraction, division, and multiplication
// John Gulden
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	int numQuestions;

	cout << "Welcome to Math Test" << endl << endl;
	cout << "Please enter the number of questions you want to attempt: ";
	cin >> numQuestions;
	cout << endl;

	while (numQuestions < 1)
	{
		cout << "Please enter a positive number of questions: ";
		cin >> numQuestions;
		cout << endl;
	}

	const int addition = 0,
		subtraction = 1,
		division = 2,
		multiplication = 3,
		MAX = 10;

	int a, b, operation, answer, guess, counter = 1, numberCorrect = 0, numberIncorrect = 0;

	do
	{
		srand(time(0));

		a = rand() % MAX + 1;
		b = rand() % MAX + 1;
		operation = rand() % 4;

		switch (operation)
		{
		case addition: answer = a + b;
			cout << "Please solve the following addition problem" << endl;
			cout << a << " + " << b << " = ";
			cin >> guess;
			if (guess == answer)
			{
				cout << "You answered the question correctly." << endl;
				numberCorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			else
			{
				cout << "You answered the question incorrectly. The correct answer was " << a + b << endl;
				numberIncorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			break;
		case subtraction: answer = a - b;
			cout << "Please solve the following subtraction problem" << endl;
			cout << a << " - " << b << " = ";
			cin >> guess;
			if (guess == answer)
			{
				cout << "You answered the question correctly." << endl;
				numberCorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			else
			{
				cout << "You answered the question incorrectly. The correct answer was " << a - b << endl;
				numberIncorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			break;
		case division: answer = a / b;
			cout << "Please solve the following division problem" << endl;
			cout << a << " / " << b << " = ";
			cin >> guess;
			if (guess == answer)
			{
				cout << "You answered the question correctly." << endl;
				numberCorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			else
			{
				cout << "You answered the question incorrectly. The correct answer was " << a / static_cast<double>(b) << endl;
				numberIncorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			break;
		case multiplication: answer = a * b;
			cout << "Please solve the following multiplication problem" << endl;
			cout << a << " * " << b << " = ";
			cin >> guess;
			if (guess == answer)
			{
				cout << "You answered the question correctly." << endl;
				numberCorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			else
			{
				cout << "You answered the question incorrectly. The correct answer was " << a * b << endl;
				numberIncorrect++;
				cout << "Your score is " << numberCorrect << " / " << numQuestions << endl << endl;
			}
			break;
		}
		counter++;
	} while (counter <= numQuestions);

	cout << "In total, you answered " << numberCorrect << " questions correctly and " << numberIncorrect << " incorrectly.";

	system("pause");

	return 0;
}