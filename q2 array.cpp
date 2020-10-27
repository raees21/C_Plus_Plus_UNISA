#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
using namespace std;

void    studentDetials(string &name, string &surname, string &schoolname)
{
    cout << "Please enter your Name:  ";
    getline(cin, name, '\n');
    cout << "Please enter your Surname:  ";
    getline(cin, surname, '\n');
    cout << "Please enter your School Name:  ";
    getline(cin, schoolname, '\n');
}

void    getmarks(float mark[6])
{
    do{
        cout << "Please enter the mark for English:  ";
        cin >> mark[0];
    }while(mark[0] < 0 || mark[0] > 100);

    do{
        cout << "Please enter the mark for Mathematics:  ";
        cin >> mark[1];
    }while(mark[1] < 0 || mark[1] > 100);

    do{
        cout << "Please enter the mark for Life Orientation:  ";
        cin >> mark[2];
    }while(mark[2] < 0 || mark[2] > 100);

    do{
        cout << "Please enter the mark for History:  ";
        cin >> mark[3];
    }while(mark[3] < 0 || mark[3] > 100);

    do{
        cout << "Please enter the mark for Computer Literacy:  ";
        cin >> mark[4];
    }while(mark[4] < 0 || mark[4] > 100);

    do{
        cout << "Please enter the mark for Georaphy:  ";
        cin >> mark[5];
    }while(mark[5] < 0 || mark[5] > 100);
}
float     Averageyearmark(float mark[6])
{
    float AverageGrade;
    AverageGrade = ((mark[0]+mark[1]+mark[2]+mark[3]+mark[4]+mark[5])/6);
    return AverageGrade;
}

void    minMax(float mark[6], float &highest, float &lowest)
{
    highest = 0;
    lowest = 100;

    for (int i = 0; i < 6; i++)
    {
        if (mark[i] > highest)
            highest = mark[i];

        if (mark[i] < lowest)
            lowest = mark[i];
    }
}

string    passorFail(float mark[6])
{
    string passedYear;
    int counter = 0;

    for (int i = 1; i < 6; i++)
    {
        if (mark[i] > 50)
            counter++;
    }

    if (mark[0] >= 50 && counter >= 3)
    {
        passedYear = "Passed";
    }
    else
    {
        passedYear = "Failed";
    }
    return passedYear;


}
void    awardDistinction(float Averageyearmark, float mark[6], string distinction[7])
 {
     if(Averageyearmark >= 75)
     {
         distinction[6] = " with Distinction";
     }

     for(int i = 0; i < 6; i++)
     {
         if(mark[i] >= 75)
         {
             distinction[i] = "Yes";
         }
     }

 }

 void   codeSymbol(float Averageyearmark, float mark[6], string c[7],
                    string sym[7])
{

{

    if (Averageyearmark >= 80)
       c[6] = "7" , sym[6] = "A";
       else if (Averageyearmark >= 70)
       c[6] = "6" , sym[6] = "B";
       else if (Averageyearmark >= 60)
        c[6] = "5" , sym[6] = "C";
       else if (Averageyearmark >= 50)
        c[6] = "4" , sym[6] = "D";
       else if (Averageyearmark >=40)
        c[6] = "3" , sym[6] = "E";
       else if (Averageyearmark >=30)
        c[6] = "2" , sym[6] = "F";
       else
        c[6] = "1" , sym[6] = "FF";
}
{
    for(int i = 0; i < 6; i++)
    {
        if (mark[i] >= 80)
       (c[i] = "7" , sym[i] = "A");
       else if (mark[i] >= 70)
       (c[i] = "6" , sym[i] = "B");
       else if (mark[i] >= 60)
        (c[i] = "5" , sym[i] = "C");
       else if (mark[i] >= 50)
        (c[i] = "4" , sym[i] = "D");
       else if (mark[i] >=40)
        (c[i] = "3" , sym[i] = "E");
       else if (mark[i] >=30)
        (c[i] = "2" , sym[i] = "F");
       else if (mark[i] < 30)
        (c[i] = "1" , sym[i] = "FF");
    }

 }
}

void   Display(string passedYear, float Averageyearmark, float mark[6],
                string name, string surname, string schoolname, int highest, int lowest, string distinction[7], string c[7], string sym[7])
{
    cout << "**********************************************************************" << endl;
    cout << "                     STUDENT ACADEMIC RECORD                          " << endl;
    cout << "This program inputs learners marks of matric level subjects and prints" << endl;
    cout << "the student final report." << endl;
    cout << "**********************************************************************" << endl;
    cout << endl;
    cout << "Name: " << name << " " << surname << "  School: " << schoolname << endl;
    cout << endl;
    cout << "Subject          \tMark\tSymbol\tCode\tDistinction" << endl;
    cout << "English          \t" << mark[0] << "\t" << sym[0] << "\t" << c[0] << "\t" << distinction[0] << endl;
    cout << "Mathematics      \t" << mark[1] << "\t" << sym[1] << "\t" << c[1] << "\t" << distinction[1] << endl;
    cout << "Life Orientation \t" << mark[2] << "\t" << sym[2] << "\t" << c[2] << "\t" << distinction[2] << endl;
    cout << "History          \t" << mark[3] << "\t" << sym[3] << "\t" << c[3] << "\t" << distinction[3] << endl;
    cout << "Computer Literacy\t" << mark[4] << "\t" << sym[4] << "\t" << c[4] << "\t" << distinction[4] << endl;
    cout << "Geography        \t" << mark[5] << "\t" << sym[5] << "\t" << c[5] << "\t" << distinction[5] << endl;
    cout << endl;
    cout << "Average Year Mark:  " << Averageyearmark << " with Symbol " << sym[6] << " and Code " << c[6] << endl;
    cout << "Outcome:  " << passedYear << distinction[6] <<  endl;
    cout << endl;
    cout << "The highest mark was: " << highest << endl;
    cout << "The lowest mark was: " << lowest << endl;


}

 int    main()
 {
     string name, surname, schoolname, c[7], distinction[7], sym[7], passedYear;
     float mark[6], AverageGrade, highest, lowest;

     studentDetials(name, surname, schoolname);
     getmarks(mark);
     AverageGrade = Averageyearmark(mark);
     minMax(mark, highest, lowest);
     passedYear = passorFail(mark);
     awardDistinction(AverageGrade, mark, distinction);
     codeSymbol(AverageGrade, mark, c, sym);
     Display(passedYear, AverageGrade, mark, name, surname, schoolname, highest, lowest, distinction, c, sym);
     return 0;
 }
