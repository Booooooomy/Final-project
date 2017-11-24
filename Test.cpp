// Beomjoo KIM
// CSIS 137 Final project

#include "AppliedStudents.h"
#include <iostream>
using namespace std;							// Student version.

int main()
{
	int numEng;
	int numHSS;
	int numMath;
	int numSci;
	int numComSci;
	int numOthers;
	int rawSAT = 0;
	int rawACT = 0;
	int num;
	char sel;

	cout << "Hello, this is a program that would convert your GPA and test scores" << endl;
	cout << "into a converted score using University of Glendale's own method" << endl;
	cout << "Please follow the instruction!!" << endl;

	cout << "Eligibility Check - Press 'n' or 'N' if you don't satisfy any of two conditions below" << endl;
	cout << "					 Press 'y' or 'Y' if you satisfy them" << endl;
	cout << "1) Is your avg GPA higher than 3.5?" << endl;
	cout << "2) Have you taken either SAT or ACT at least once?" << endl;
	cin >> sel;

	while (sel != 'N' && sel != 'n' && sel != 'Y' && sel != 'y')
	{
		cout << "Invalid. Write the prompt clearly once agian and press abutton" << endl;
		cin >> sel;
	}

	if (sel == 'Y' || sel == 'y')
	{
		cout << "Congrats! You can apply to UG!" << endl;

		do
		{
			cout << "\n\n\n------------------------- First Step: Standardized Test Score -----------------------\n\n" << endl;
			cout << "What did you take among those two?" << endl;
			cout << "1) SAT    2) ACT    3) Both" << endl;
			cin >> num;

			while (num != 1 && num != 2 && num != 3)
			{
				cout << "There are only three options. 1 or 2 or 3. Retry it" << endl;
				cin >> num;
			}

			if (num == 1)
			{
				cout << "Type in your total SAT score out of 1600" << endl;
				cin >> rawSAT;
			}

			else if (num == 2)
			{
				cout << "Type in your total ACT score out of 36" << endl;
				cin >> rawACT;
			}

			else
			{
				cout << "Type in your total SAT score out of 1600" << endl;
				cin >> rawSAT;
				cout << "Type in your total ACT score out of 36" << endl;
				cin >> rawACT;
			}
			
			cout << "--------------------------- Second step: about GPA ------------------------------\n\n" << endl;
			cout << "How many English classes did you take?" << endl;
			cin >> numEng;
			cout << "How many History/ Social Sience classes did you take?" << endl;
			cin >> numHSS;
			cout << "How many Math classes did you take?" << endl;
			cin >> numMath;
			cout << "How many Science classes did you take?" << endl;
			cin >> numSci;
			cout << "How many Computer science classes did you take?" << endl;
			cin >> numComSci;
			cout << "How many other classes did you take?" << endl;
			cin >> numOthers;

			// virtual이므로 여기서 학과 골라서 polymorphism 시전해 주어야 함!!



		} while (sel != 'n' && sel != 'N');
	}

	else
	{
		cout << "Unfortunately, you don't have an eligibility to apply to UG. Sorry." << endl;
	}

	system("PAUSE");
	return 0;
}