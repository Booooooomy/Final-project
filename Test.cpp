// Beomjoo KIM
// CSIS 137 Final project

#include "AppliedStudents.h"
#include "MathMajor.h"
#include "ComSciMajor.h"
#include "EnglishMajor.h"
#include "Toohigh.h"
#include "Toolow.h"
#include "ACTrange.h"
#include "SATrange.h"
#include <iostream>
using namespace std;
#include "numValidate.h"

int main()
{
	cout << "************ Student version ************\n\n\n" << endl;
	// This part is for each student to plug in their own GPA and SAT or ACT scores so that the school can have the converted score of each student.

	string name;
	int numEng = 0;
	int numHSS = 0;
	int numMath = 0;
	int numSci = 0;
	int numComSci = 0;
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
	bool bE = true;
	bool bH = true;
	bool bM = true;
	bool bS = true;
	bool bC = true;
	ACTRange ACT;
	SATRange SAT;
	numValidate NV;

	cout << "Hello, this program will convert your GPA and test scores" << endl;
	cout << "into a converted score using University of Glendale's own method" << endl;
	cout << "Please follow the instruction!!\n" << endl;
	cout << "Your name?" << endl;
	getline(cin, name);

	cout << "\n\n\nWhich major of UG do you want to apply to?" << endl;
		cout << "1) Math 2)ComSci 3) English" << endl;
		cin >> sel2;

		while (sel2 != 1 && sel2 != 2 && sel2 != 3)
		{
			cout << "Invalid. Choose among 1 to 3" << endl;
			cin >> sel2;
		}

	//Eligibility Check

	cout << "\n\nEligibility Check -" << endl;
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
			
			do
			{
				try
				{
					rawSAT = SAT.getInput();
				}

				catch (TooHigh& toohigh)
				{
					cout << toohigh.what();
				}

				catch (TooLow& toolow)
				{
					cout << toolow.what();
				}

			} while (rawSAT == NULL || rawSAT == 0);
		}

		else if (num == 2)
		{
			cout << "Type in your total ACT score out of 36" << endl;

			do
			{
				try
				{
					rawACT = ACT.getInput();
				}
	
				catch (TooHigh& toohigh)
				{
					cout << toohigh.what();
				}

				catch (TooLow& toolow)
				{
					cout << toolow.what();
				}
			} while (rawACT == NULL || rawACT == 0);
		}

		else
		{
			cout << "Type in your total SAT score out of 1600" << endl;
			do
			{
				try
				{
					rawSAT = SAT.getInput();
				}

				catch (TooHigh& toohigh)
				{
					cout << toohigh.what();
				}

				catch (TooLow& toolow)
				{
					cout << toolow.what();
				}
			} while (rawSAT == NULL || rawSAT == 0);

			cout << "Type in your total ACT score out of 36" << endl;
			do
			{
				try
				{
					rawACT = ACT.getInput();
				}

				catch (TooHigh& toohigh)
				{
					cout << toohigh.what();
				}

				catch (TooLow& toolow)
				{
					cout << toolow.what();
				}
			} while (rawACT == NULL || rawACT == 0);
		}

		cout << "--------------------------- Second step: about GPA ------------------------------\n" << endl;
		cout << "How many English classes did you take?\n If you didn't take such class, type 0" << endl;
		cin >> numEng;
		
		try
		{
			numEng = NV.numvalidate(numEng);
		}
				catch (int x)
		{
			numEng = 1;
			bE = false;
		}

		cout << "How many History/ Social Sience classes did you take?\n If you didn't take such class, type 0" << endl;
		cin >> numHSS;

		try
		{
			numHSS = NV.numvalidate(numHSS);
		}
		catch (int x)
		{
			numHSS = 1;
			bH = false;
		}

		cout << "How many Math classes did you take?\n If you didn't take such class, type 0" << endl;
		cin >> numMath;

		try
		{
			numMath = NV.numvalidate(numMath);
		}
		catch (int x)
		{
			numMath = 1;
			bM = false;
		}

		cout << "How many Science classes did you take?\n If you didn't take such class, type 0" << endl;
		cin >> numSci;

		try
		{
			numSci = NV.numvalidate(numSci);
		}
		catch (int x)
		{
			numSci = 1;
			bS = false;
		}

		cout << "How many Computer science classes did you take?\n If you didn't take such class, type 0" << endl;
		cin >> numComSci;

		try
		{
			numComSci = NV.numvalidate(numComSci);
		}
		catch (int x)
		{
			numComSci = 1;
			bC = false;
		}

		AppliedStudents* BasePtr = nullptr;				// using Base pointer pointing to Derived object
														// initializing with nullptr

		MathMajor MathA(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT);
		EnglishMajor EngA(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT);
		ComSciMajor ComSciA(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT);

		if (sel2 == 1)
		{
			BasePtr = &MathA;
		}

		if (sel2 == 2)
		{
			BasePtr = &EngA;
		}

		if (sel2 == 3)
		{
			BasePtr = &ComSciA;
		}

		cout << "( AP or Honors classes - A: 5, B: 4, C: 3, D: 2, F: 1" << endl;
		cout << "  Regular classes -      A: 4, B: 3, C: 2, D: 1, F: 0 )" << endl;
		cout << "According to chart above, type in your grade for each class" << endl;
		while (bE) 
		{
			for (int i = 0; i < numEng; i++)
			{
				cout << "Your English " << (i + 1) << " grade was: " << endl;
				cin >> Eng;
				BasePtr->CalcEng(i, Eng);
				Engtot += Eng;
			}
			BasePtr->setAvgEng(Engtot);
		}

		while (bH)
		{
			for (int i = 0; i < numHSS; i++)
			{
				cout << "Your HSS " << (i + 1) << " grade was: " << endl;
				cin >> HSS;
				BasePtr->CalcHSS(i, HSS);
				HSStot += HSS;
			}
			BasePtr->setAvgHSS(HSStot);
		}

		while (bM)
		{
			for (int i = 0; i < numMath; i++)
			{
				cout << "Your Math " << (i + 1) << " grade was: " << endl;
				cin >> Math;
				BasePtr->CalcMath(i, Math);
				Mathtot += Math;
			}
			BasePtr->setAvgMath(Mathtot);
		}

		while (bS)
		{
			for (int i = 0; i < numSci; i++)
			{
				cout << "Your Science " << (i + 1) << " grade was: " << endl;
				cin >> Sci;
				BasePtr->CalcSci(i, Sci);
				Scitot += Sci;
			}
			BasePtr->setAvgSci(Scitot);
		}

		while (bC)
		{
			for (int i = 0; i < numComSci; i++)
			{
				cout << "Your Computer Science " << (i + 1) << " grade was: " << endl;
				cin >> ComSci;
				BasePtr->CalcComSci(i, ComSci);
				ComScitot += ComSci;
			}
			BasePtr->setAvgComSci(ComScitot);
		}

		BasePtr->convGPA();					// Each major has its own method of converting GPA to their own converted grade - use of polymorphism!!
		BasePtr->convACT(rawACT);
		BasePtr->convSAT(rawSAT);
		BasePtr->setName(name);
		BasePtr->setconSTS();
		BasePtr->settotScore();

		cout << MathA;
		cout << EngA;
		cout << ComSciA;
	}

	else
	{
		cout << "Unfortunately, you don't satisfy an eligibility to apply to UG. Sorry." << endl;
	}

	cout << "\n******************* End of student program ***********************" << endl;

	system("PAUSE");
	return 0;
}