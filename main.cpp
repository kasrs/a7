/******************************************************************************
 * AUTHOR		: Kasra Tabib
 * ASG #7		: Repetition & Selection
 * CLASS		: CS1A
 * SECTION		: MW: 8am
 * DUE DATE		: 3/5/18
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************************************
 * Repetition & Selection
 * ____________________________________________________________________________
 *
 * This program prompts the user to input letter grades and will output the
 * 		total grade points and the grade point average.
 *****************************************************************************/


int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * ASG_NUM		: ASG Number (specific to this ASG)
	 * ASG_NAME		: Title of the ASG
	 * END_LOOP		: LCV for the for loop
	 * COL_WID		: Constant value for setw
	 *************************************************************************/
	const char	PROGRAMMER[]	= "Kasra Tabib";
	const char	CLASS[]			= "CS1A";
	const char	SECTION[]		= "MW: 8:00a - 9:50a";
	const int	ASG_NUM			= 7;
	const char	ASG_NAME[]		= "Repetition & Selection";
	const int	END_LOOP		= 3;
	const int	COL_WID			= 24;


	//Variable Declaration

	char	grade; 			// INPUT variable for letter grade
	double	totalGrade;		// Sum of all given grades
	double	averageGrade;	// Grade point average
	double	gradeCount;		// Counter for the total number of grades
	int		count;			// Counter for the for loop
	int		gradeNumber;	// Counter for the grade number


	// OUTPUT - Class Heading
	cout << left;
	cout << "************************************************************\n";
	cout << "*	PROGRAMMED BY : "	<<	PROGRAMMER	<< endl;
	cout << "*	"		<< setw(14)	<<	"CLASS"		<< ": " << CLASS	<<endl;
	cout << "*	"		<< setw(14)	<<	"SECTION"	<< ": "	<< SECTION	<<endl;
	cout <<	"*	ASG #"	<< setw(9)	<<	ASG_NUM		<< ": " << ASG_NAME <<endl;
	cout << "************************************************************\n\n";
	cout << right;


	for(count = 1; count <= END_LOOP; count = count +1)
	{





		gradeNumber = 1; 	// Set the Grade number to 1
		totalGrade	= 0;	// Set the Total Grade to 0
		gradeCount	= 0;	// sets the grade count to 0

		/**********************************************************************
		 *INPUT - prompting the user to input the letter grades
		 *********************************************************************/
		cout 	<< "TEST CASE # " 	<< count << ":" << endl;


		cout	<< setw(COL_WID) 	<< "Enter Letter Grade #"
				<< gradeNumber 		<< ": ";

		cin		>> grade;
		cin.ignore(1000,'\n');
		grade	= toupper(grade);


		while (grade != 'X')	// Loops until the user inputs the character 'x'
		{

			switch(grade) 		// Gives a number value to the letter grade
			{

			case 'A' : totalGrade = totalGrade + 4.00;
						break;

			case 'B' : totalGrade = totalGrade + 3.00;
						break;

			case 'C' : totalGrade = totalGrade + 2.00;
						break;

			case 'D' : totalGrade = totalGrade + 1.00;
						break;

			case 'F' : totalGrade = totalGrade + 0.00;
						break;

			}


			gradeNumber = gradeNumber + 1; // Increments the grade number
			gradeCount	= gradeCount  + 1; // Counts the total number of grades

			/******************************************************************
			 *INPUT - prompting the user to input the letter grades again
			 *****************************************************************/

			cout	<< setw(COL_WID) 	<< "Enter Letter Grade #"
					<< gradeNumber 		<< ": ";

			cin		>> grade;
			cin.ignore(1000,'\n');
			grade	= toupper(grade);

		}


		/*********************************************************************
		 * Calculation - calculate the grade point average
		 ********************************************************************/

		averageGrade = totalGrade / gradeCount;


		/**********************************************************************
		 * OUTPUT - outputs the final values for total points and
		 * 		grade point average
		 *********************************************************************/

		if (gradeCount > 0)
		{
			cout << endl 	<< "Total Grade Points: " 	<< totalGrade	<<endl;
			cout << setprecision(2)						<< fixed;
			cout << "GPA: "	<< averageGrade << endl 	<< endl			<<endl;
		}

	}





	return 0;
}
