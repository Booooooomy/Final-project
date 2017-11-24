// Beomjoo KIM
// CSIS 137 Final project

#include "AppliedStudents.h"
#include "MathMajor.h"
#include <iostream>
using namespace std;							// Student version.

int main()
{
	int numEng;
	int numHSS;
	int numMath;
	int numSci;
	int numComSci;
	int rawSAT = 0;
	int rawACT = 0;
	int num;
	double Eng = 0;
	int Engtot = 0;
	double HSS = 0;
	int HSStot = 0;
	double Math = 0;
	int Mathtot = 0;
	double Sci = 0;
	int Scitot = 0;
	double ComSci = 0;
	int ComScitot = 0;
	char sel;

	cout << "Hello, this program will convert your GPA and test scores" << endl;
	cout << "into a converted score using University of Glendale's own method" << endl;
	cout << "Please follow the instruction!!\n" << endl;

	//Eligibility Check

	cout << "Eligibility Check -" << endl;
	cout << "Press 'n' or 'N' if you don't satisfy any of two conditions below" << endl;
	cout << "Press 'y' or 'Y' if you satisfy them \n" << endl;
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

			// virtual이므로 여기서 학과 골라서 polymorphism 시전해 주어야 함!!///////////////////////////////////////////////////////////////////

			MathMajor MathA(numEng, numHSS, numMath, numSci, numComSci, rawSAT, rawACT);

			// ABCDF 캐릭터 받는 것도 고려해보도록!
			cout << "( AP or Honors classes - A: 5, B: 4, C: 3, D: 2, F: 1" << endl;
			cout << "  Regular classes -      A: 4, B: 3, C: 2, D: 1, F: 0 )" << endl;
			cout << "According to chart above, type in your grade for each class" << endl;

			for (int i = 0; i < numEng; i++)
			{
				cout << "Your English " << (i + 1) << " grade was: " << endl;
				cin >> Eng;
				MathA.CalcEng(i,Eng);
				Engtot += Eng;
			}
			
			MathA.setAvgEng(Engtot);

			for (int i = 0; i < numHSS; i++)
			{
				cout << "Your HSS " << (i + 1) << " grade was: " << endl;
				cin >> HSS;
				MathA.CalcHSS(i, HSS);
				HSStot += HSS;
			}

			MathA.setAvgHSS(HSStot);

			for (int i = 0; i < numMath; i++)
			{
				cout << "Your Math " << (i + 1) << " grade was: " << endl;
				cin >> Math;
				MathA.CalcMath(i, Math);
				Mathtot += Math;
			}

			MathA.setAvgMath(Mathtot);

			for (int i = 0; i < numSci; i++)
			{
				cout << "Your Science " << (i + 1) << " grade was: " << endl;
				cin >> Sci;
				MathA.CalcSci(i, Sci);
				Scitot += Sci;
			}

			MathA.setAvgSci(Scitot);

			for (int i = 0; i < numComSci; i++)
			{
				cout << "Your Computer Science " << (i + 1) << " grade was: " << endl;
				cin >> ComSci;
				MathA.CalcComSci(i, ComSci);
				ComScitot += ComSci;
			}

			MathA.setAvgComSci(ComScitot);
			MathA.convGPA();					// use of polymorphism!!
			MathA.convACT(rawACT);
			MathA.convSAT(rawSAT);
			MathA.setconSTS();
			MathA.gradeShow();

	}

	else
	{
		cout << "Unfortunately, you don't satisfy an eligibility to apply to UG. Sorry." << endl;
	}

	system("PAUSE");
	return 0;
}