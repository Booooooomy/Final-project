// Beomjoo KIM
// CSIS 137 Final project

#include "AppliedStudents.h"
#include "MathMajor.h"
#include "ComSciMajor.h"
#include "EnglishMajor.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "************ Program 1: Student version ************\n\n\n" << endl;
	// This part is for each student to plug in their own GPA and SAT or ACT scores so that the school can have the converted score of each student.

	string name;
	int numEng;
	int numHSS;
	int numMath;
	int numSci;
	int numComSci;
	int rawSAT = 0;
	int rawACT = 0;
	int num;
	int sel2;
	double Eng = 0;
	double Engtot = 0;
	double HSS = 0;
	double HSStot = 0;
	double Math = 0;
	double Mathtot = 0;
	double Sci = 0;
	double Scitot = 0;
	double ComSci = 0;
	double ComScitot = 0;
	char sel;

	cout << "Hello, this program will convert your GPA and test scores" << endl;
	cout << "into a converted score using University of Glendale's own method" << endl;
	cout << "Please follow the instruction!!\n" << endl;

	cout << "Your name?" << endl;
	getline(cin, name);

	//Eligibility Check

	cout << "Eligibility Check -" << endl;
	cout << "Press 'n' or 'N' if you don't satisfy any of two conditions below" << endl;
	cout << "Press 'y' or 'Y' if you satisfy them \n" << endl;
	cout << "1) Is your avg GPA higher than 3.5?" << endl;
	cout << "2) Have you taken either SAT or ACT at least once?" << endl;
	cin >> sel;

	while (sel != 'N' && sel != 'n' && sel != 'Y' && sel != 'y')
	{
		cout << "Invalid. Write the prompt clearly once agian and press button" << endl;
		cin >> sel;
	}

	if (sel == 'Y' || sel == 'y')
	{
		cout << "\nCongrats! You can apply to UG!" << endl;

		cout << "\n\n\n------------------------- First Step: Standardized Test Score -----------------------\n" << endl;
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

		while (rawACT > 36 || rawACT < 0)
		{
			cout << "The ACT score should be within 0 and 36. Retry." << endl;
			cin >> rawACT;
		}

		while (rawSAT > 1600 || rawSAT < 0)
		{
			cout << "The SAT score should be within 0 and 1600. Retry." << endl;
			cin >> rawSAT;
		}

		cout << "--------------------------- Second step: about GPA ------------------------------\n" << endl;
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

		cout << "\n\n\nWhich major of UG do you want to apply to?" << endl;
		cout << "1) Math 2)ComSci 3) English" << endl;
		cin >> sel2;

		AppliedStudents* BasePtr = nullptr;				// using Base pointer pointing to Derived object
														// initializing with nullptr

		while (sel2 != 1 && sel2 != 2 && sel2 != 3)
		{
			cout << "Invalid. Choose among 1 to 3" << endl;
			cin >> sel2;
		}

		if (sel2 == 1)
		{
			MathMajor MathA(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT);
			BasePtr = &MathA;
		}

		if (sel2 == 2)
		{
			EnglishMajor EngA(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT);
			BasePtr = &EngA;
		}

		if (sel2 == 3)
		{
			ComSciMajor ComSciA(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT);
			BasePtr = &ComSciA;
		}

		cout << "( AP or Honors classes - A: 5, B: 4, C: 3, D: 2, F: 1" << endl;
		cout << "  Regular classes -      A: 4, B: 3, C: 2, D: 1, F: 0 )" << endl;
		cout << "According to chart above, type in your grade for each class" << endl;

		for (int i = 0; i < numEng; i++)
		{
			cout << "Your English " << (i + 1) << " grade was: " << endl;
			cin >> Eng;
			BasePtr->CalcEng(i, Eng);
			Engtot += Eng;
		}
		BasePtr->setAvgEng(Engtot);

		for (int i = 0; i < numHSS; i++)
		{
			cout << "Your HSS " << (i + 1) << " grade was: " << endl;
			cin >> HSS;
			BasePtr->CalcHSS(i, HSS);
			HSStot += HSS;
		}
		BasePtr->setAvgHSS(HSStot);

		for (int i = 0; i < numMath; i++)
		{
			cout << "Your Math " << (i + 1) << " grade was: " << endl;
			cin >> Math;
			BasePtr->CalcMath(i, Math);
			Mathtot += Math;
		}
		BasePtr->setAvgMath(Mathtot);

		for (int i = 0; i < numSci; i++)
		{
			cout << "Your Science " << (i + 1) << " grade was: " << endl;
			cin >> Sci;
			BasePtr->CalcSci(i, Sci);
			Scitot += Sci;
		}
		BasePtr->setAvgSci(Scitot);

		for (int i = 0; i < numComSci; i++)
		{
			cout << "Your Computer Science " << (i + 1) << " grade was: " << endl;
			cin >> ComSci;
			BasePtr->CalcComSci(i, ComSci);
			ComScitot += ComSci;
		}
		BasePtr->setAvgComSci(ComScitot);

		BasePtr->convGPA();					// use of polymorphism!!
		BasePtr->convACT(rawACT);
		BasePtr->convSAT(rawSAT);
		BasePtr->setName(name);
		BasePtr->setconSTS();
		BasePtr->settotScore();
		BasePtr->gradeShow();
	}

	else
	{
		cout << "Unfortunately, you don't satisfy an eligibility to apply to UG. Sorry." << endl;
	}

	cout << "\n******************* End of student program.************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n************************ Program 2: University of Glendale version ****************\n\n\n\n\n" << endl;

	system("PAUSE");
	return 0;
}