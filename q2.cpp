#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
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

void    getmarks(float &English, float &Mathematics, float &LifeOrientation, float &History, float &ComputerLiteracy, float &Geography)
{
        cout << "Please enter the mark for English:  ";
        cin >> English;


        cout << "Please enter the mark for Mathematics:  ";
        cin >> Mathematics;

        cout << "Please enter the mark for Life Orientation:  ";
        cin >> LifeOrientation;

        cout << "Please enter the mark for History:  ";
        cin >> History;

        cout << "Please enter the mark for Computer Literacy:  ";
        cin >> ComputerLiteracy;

        cout << "Please enter the mark for Georaphy:  ";
        cin >> Geography;
}
float     Averageyearmark(float English, float Mathematics, float LifeOrientation, float History, float ComputerLiteracy, float Geography)
{
    float AverageGrade = ((English + Mathematics + LifeOrientation + History + ComputerLiteracy + Geography)/6);
    return AverageGrade;
}

void    minMax(float English, float Mathematics, float LifeOrientation, float History, float ComputerLiteracy, float Geography, float &highest, float &lowest)
{
    highest = 0;
    lowest = 100;

    if (English > highest)
        highest = English;
    if (English < lowest)
        lowest = English;
    if (Mathematics > highest)
        highest = Mathematics;
    if (Mathematics < lowest)
        lowest = Mathematics;
    if (LifeOrientation > highest)
        highest = LifeOrientation;
    if (LifeOrientation < lowest)
        lowest = LifeOrientation;
    if (History > highest)
        highest = History;
    if (History < lowest)
        lowest = History;
    if (ComputerLiteracy > highest)
        highest = ComputerLiteracy;
    if (ComputerLiteracy < lowest)
        lowest = ComputerLiteracy;
    if (Geography > highest)
        highest = Geography;
    if (Geography < lowest)
        lowest = Geography;
}

string    passorFail(float English, float Mathematics, float LifeOrientation, float History, float ComputerLiteracy, float Geography)
{
    string passedYear;
    int counter = 0;

    if(Mathematics >=50)
            counter++;
    if(LifeOrientation >= 50)
            counter++;
    if(History >= 50)
            counter++;
    if(ComputerLiteracy >= 50)
            counter++;
    if(Geography >= 50)
            counter++;

    if(English >= 50 && counter >= 3)
        passedYear = "Passed";
    else
        passedYear = "Year";

    return passedYear;
}

void    awardDistinction(float Averageyearmark, float English, float Mathematics, float LifeOrientation, float History, float ComputerLiteracy, float Geography, string &dis1, string &dis2, string &dis3, string &dis4, string &dis5, string &dis6, string &dis7)
 {
    if (Averageyearmark >= 75)
    {
        dis7 = " with distinction"
    }

    if (English >= 75)
    {
        dis1 = "Yes"
    }

    if (Mathematics >= 75)
    {
        dis2 = "Yes"
    }

 }

 void   codeSymbol(float Averageyearmark, float English, float Mathematics, float LifeOrientation, float History, float ComputerLiteracy, float Geography, string &c1, string &c2, string &c3, string &c4, string &c5, string &c6, string &c7,
                    string &sym1, string &sym2, string &sym3, string &sym4, string &sym5, string &sym6, string &sym7)
 {
{

    if (Averageyearmark >= 80)
       c1 = "7" , sym1 = "A";
       else if (Averageyearmark >= 70)
       c1 = "6" , sym1 = "B";
       else if (Averageyearmark >= 60)
        c1 = "5" , sym1 = "C";
       else if (Averageyearmark >= 50)
        c1 = "4" , sym1 = "D";
       else if (Averageyearmark >=40)
        c1 = "3" , sym1 = "E";
       else if (Averageyearmark >=30)
        c1 = "2" , sym1 = "F";
       else
        c1 = "1" , sym1 = "FF";
}
{
      if (English >= 80)
       (c2 = "7" , sym2 = "A");
       else if (English >= 70)
       (c2 = "6" , sym2 = "B");
       else if (English >= 60)
        (c2 = "5" , sym2 = "C");
       else if (English >= 50)
        (c2 = "4" , sym2 = "D");
       else if (English >=40)
        (c2 = "3" , sym2 = "E");
       else if (English >=30)
        (c2 = "2" , sym2 = "F");
       else
        (c2 = "1" , sym2 = "FF");
}
{
    if (Mathematics >= 80)
       (c3 = "7" , sym3 = "A");
       else if (Mathematics >= 70)
       (c3 = "6" , sym3 = "B");
       else if (Mathematics >= 60)
        (c3 = "5" , sym3 = "C");
       else if (Mathematics >= 50)
        (c3 = "4" , sym3 = "D");
       else if (Mathematics >=40)
        (c3 = "3" , sym3 = "E");
       else if (Mathematics >=30)
        (c3 = "2" , sym3 = "F");
       else
        (c3 = "1" , sym3 = "FF");
}
{
    if (LifeOrientation >= 80)
       (c4 = "7" , sym4 = "A");
       else if (LifeOrientation >= 70)
       (c4 = "6" , sym4 = "B");
       else if (LifeOrientation >= 60)
        (c4 = "5" , sym4 = "C");
       else if (LifeOrientation >= 50)
        (c4 = "4" , sym4 = "D");
       else if (LifeOrientation >=40)
        (c4 = "3" , sym4 = "E");
       else if (LifeOrientation >=30)
        (c4 = "2" , sym4 = "F");
       else
        (c4 = "1" , sym4 = "FF");
}
{
    if (History >= 80)
       (c5 = "7" , sym5 = "A");
       else if (History >= 70)
       (c5 = "6" , sym5 = "B");
       else if (History >= 60)
        (c5 = "5" , sym5 = "C");
       else if (History >= 50)
        (c5 = "4" , sym5 = "D");
       else if (History >=40)
        (c5 = "3" , sym5 = "E");
       else if (History >=30)
        (c5 = "2" , sym5 = "F");
       else
        (c5 = "1" , sym5 = "FF");
}
{
    if (ComputerLiteracy >= 80)
       (c6 = "7" , sym6 = "A");
       else if (ComputerLiteracy >= 70)
       (c6 = "6" , sym6 = "B");
       else if (ComputerLiteracy >= 60)
        (c6 = "5" , sym6 = "C");
       else if (ComputerLiteracy >= 50)
        (c6 = "4" , sym6 = "D");
       else if (ComputerLiteracy >=40)
        (c6 = "3" , sym6 = "E");
       else if (ComputerLiteracy >=30)
        (c6 = "2" , sym6 = "F");
       else
        (c6 = "1" , sym6 = "FF");
}
{
    if (Geography >= 80)
       (c7 = "7" , sym7 = "A");
       else if (Geography >= 70)
       (c7 = "6" , sym7 = "B");
       else if (Geography >= 60)
        (c7 = "5" , sym7 = "C");
       else if (Geography >= 50)
        (c7 = "4" , sym7 = "D");
       else if (Geography >=40)
        (c7 = "3" , sym7 = "E");
       else if (Geography >=30)
        (c7 = "2" , sym7 = "F");
       else
        (c7 = "1" , sym7 = "FF");
}
 }

void   Display(string passorFail, float Averageyearmark, int English, int Mathematics, int LifeOrientation, int History, int ComputerLiteracy, int Geography,
                string name, string surname, string schoolname, int highest, int lowest, bool distinction, string c1, string c2, string c3, string c4, string c5, string c6,
                string c7, string sym1, string sym2, string sym3, string sym4, string sym5, string sym6, string sym7)
{
    cout << "**********************************************************************" << endl;
    cout << "                     STUDENT ACADEMIC RECORD                          " << endl;
    cout << "This program inputs learners marks of matric level subjects and prints" << endl;
    cout << "the student final report." << endl;
    cout << "**********************************************************************" << endl;
    cout << endl;
    cout << "Name: " << name << " " << surname << "  School: " << schoolname << endl;
    cout << endl;
    cout << "Subject          \tMark\tSymbol\tCode" << endl;
    cout << "English          \t" << English << "\t" << sym2 << "\t" <<  c2 << endl;
    cout << "Mathematics      \t" << Mathematics << "\t" << sym3 << "\t" << c3 << endl;
    cout << "Life Orientation \t" << LifeOrientation << "\t" << sym4 << "\t" << c4 << endl;
    cout << "History          \t" << History << "\t" << sym5 << "\t" << c5 << endl;
    cout << "Computer Literacy\t" << ComputerLiteracy << "\t" << sym6 << "\t" <<c6 << endl;
    cout << "Geography        \t" << Geography << "\t" << sym7 << "\t" << c7 << endl;
    cout << endl;
    cout << "Average Year Mark:  " << Averageyearmark << " with Symbol " << sym1 << " and Code " << c1 << endl;
    cout << "Outcome:  " << passorFail << endl;
    cout << endl;
    cout << "The highest mark was: " << highest << endl;
    cout << "The lowest mark was: " << lowest << endl;


}

 int    main()
 {
     string name, surname, schoolname;
     string sym1, sym2, sym3, sym4, sym5, sym6, sym7;
     float English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography;
     float AverageGrade;
     float highest, lowest;
     string c1, c2, c3, c4, c5, c6, c7;
     bool distinction;
     string passedYear;

     studentDetials(name, surname, schoolname);
     getmarks(English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography);
     AverageGrade = Averageyearmark(English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography);
     minMax(English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography, highest, lowest);
     passedYear = passorFail(English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography);
     awardDistinction(AverageGrade, English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography);
     codeSymbol(AverageGrade, English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography, c1, c2, c3, c4, c5, c6, c7, sym1, sym2, sym3, sym4, sym5, sym6, sym7);
     Display(passedYear, AverageGrade, English, Mathematics, LifeOrientation, History, ComputerLiteracy, Geography, name, surname, schoolname, highest, lowest, distinction, c1, c2, c3, c4, c5, c6, c7, sym1, sym2, sym3, sym4, sym5, sym6, sym7);
     return 0;
 }
