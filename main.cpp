#include <iostream>
#include <iomanip>


using namespace std;


void
gradeAvg (float courseHours, float gradePoints)
{
    cout << "the GPA is" << gradePoints / (courseHours) << endl;
}

//
void
finishProgram ()
{
    cout << "This program has offically ended." << endl;
}


class Courses
{
public:
    string arrayclasses[40];
};


int
main ()
{
    int gpa;
    string firstName="User";
    string* pfirstName = &firstName;


    int i;
    int numClasses;
    double gradePoints = 0;
    double gradeAvg = 0;
    char choice, opt;
    while (opt != '0')
    {
        cout<<"Hello "<<*pfirstName<<""<<endl;
        cout <<"-------Welcome to the FGCU Grade Point Average Calculator for Admissions-------"
             << endl;
        cout << "What can I help you with today?\n" << endl;
        cout << "1. Calculate grades for admissions." << endl;
        cout << "0. Exit\n" << endl;
        cout << "***********************************************************" <<
             endl;
        cin >> opt;


        if (opt == '1')
        {
            Courses classes;
            classes.arrayclasses[0]   ="Composition I (3 Credits)";
            classes.arrayclasses[1]   ="Composition II (3 Credits)";
            classes.arrayclasses[2]   ="Communications (3 Credits)";
            classes.arrayclasses[3]   ="Humanities Course (3 Credits)";
            classes.arrayclasses[4]   ="Social Science (3 Credits)";
            classes.arrayclasses[5]   ="Mathematics (3 Credits)";
            classes.arrayclasses[6]   ="Natural Science (3 Credits)";
            classes.arrayclasses[7]   ="History (3 Credits)";
            classes.arrayclasses[8]   ="Psychology (3 Credits)";
            classes.arrayclasses[9]   ="Sociology (3 Credits)";
            classes.arrayclasses[10]  ="College Algebra (3 Credits)";
            classes.arrayclasses[11]  ="Calculus with Analytic Geometry I (3 Credits)";
            classes.arrayclasses[12]  ="Liberal Arts I (3 Credits)";
            classes.arrayclasses[13]  ="Liberal Arts II (3 Credits)";
            classes.arrayclasses[14]  ="Statistical Methods I (3 Credits)";
            classes.arrayclasses[15]  ="Pre-Calculus (5 Credits)";
            classes.arrayclasses[16]  ="Trigonometry (3 Credits)";
            classes.arrayclasses[17]  ="Social Sciences I (3 Credits)";
            classes.arrayclasses[18]  ="Astronomy (3 Credits)";
            classes.arrayclasses[19]  ="Geometry III (3 Credits)";
            classes.arrayclasses[20]  ="Biological Science I (3 Credits)";
            classes.arrayclasses[21]  ="Biological Science I Laboratory (3 Credits)";
            classes.arrayclasses[22]  ="Anatomy and Physiology I (3 Credits)";
            classes.arrayclasses[23]  ="General Chemistry I (3 Credits)";
            classes.arrayclasses[24]  ="General Physics I (3 Credits) ";
            classes.arrayclasses[25]  ="General Physics II Laboratory (3 Credits)";
            classes.arrayclasses[26]  ="College Physics I (3 Credits)";
            classes.arrayclasses[27]  ="The Living Ocean (3 Credits)";
            classes.arrayclasses[28]  ="Marine Biology (3 Credits)";
            classes.arrayclasses[29]  ="Earth and Science(Lab) (2 Credits)";
            classes.arrayclasses[30]  ="Microbiology (4 Credits)";
            classes.arrayclasses[31]  ="Foundations of Interdisciplinary Science I (3 Credits)";
            classes.arrayclasses[32]  ="Foundations of Interdisciplinary Science II (3 Credits)";
            classes.arrayclasses[33]  ="Anatomy and Physiology II (4 Credits)";
            classes.arrayclasses[34]  ="College Physics II Laboratory (1 Credits)";
            classes.arrayclasses[35]  ="Honors Mathematical Ideas & Explorations (3 Credits)";
            classes.arrayclasses[36]  ="Differential Equations I (4 Credits)";
            classes.arrayclasses[37]  ="Differential Equations II (4 Credits)";
            classes.arrayclasses[38]  ="Introduction to Human Sexuality (3 Credits)";
            classes.arrayclasses[39]  ="American State and Local Politics (3 Credits)";






            for (int i = i; i < 40; i++)
            {
                cout << "Name of Class: " << classes.arrayclasses[i] << endl;
            }




            cout << "\n\nHow many classes would you like me to calculate for you: ";
            cin >> numClasses;
            if (numClasses > 40)
            {
                cout << "Please enter less than 40 classes";
            }


            else
            {


                string gradeArray[numClasses];
                string classNames[numClasses];
                int courseHours[numClasses];
                int courseHoursSum = 0;


                for (i = 0; i < numClasses; ++i)
                {
                    cout << "\nWhat is the name of class number " << i +
                                                                     1 << "?" << endl;
                    cin.ignore();
                    getline(cin, classNames[i]);
                    cout << "\nWhat letter grade did you receive in " <<
                         classNames[i] << "?" << endl;
                    cin >> gradeArray[i];
                    cout << "\nHow many credit hours was " << classNames[i] <<
                         "?" << endl;
                    cin >> courseHours[i];
                }


                for (i = 0; i < numClasses; ++i)
                {
                    if (gradeArray[i] == "A")
                        gradePoints += courseHours[i] * 4.0;
                    else if (gradeArray[i] == "B")
                        gradePoints += courseHours[i] * 3.0;
                    else if (gradeArray[i] == "C")
                        gradePoints += courseHours[i] * 2.0;
                    else if (gradeArray[i] == "D")
                        gradePoints += courseHours[i] * 1.0;
                    else if (gradeArray[i] == "F")
                        gradePoints += courseHours[i] * 0.0;
                }


                for (i = 0; i < numClasses; ++i)
                {
                    courseHoursSum += courseHours[i];
                }


                gradeAvg = gradePoints / courseHoursSum;


                cout << "\nTotal Credits: " << courseHoursSum << endl;




                cout << "GPA: " << setprecision (2) << gradeAvg << endl;


                if (gradeAvg >= 3)
                {
                    cout << "Congratulations You Have Been Accepted Into FGCU" << endl;


                }
                else
                {
                    cout << "I'm sorry you cannot enter into FGCU due to your GPA" << endl;
                }


                finishProgram ();
            }
        }


    }
    return 0;
}
