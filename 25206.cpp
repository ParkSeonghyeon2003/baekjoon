#include <iostream>

using namespace std;

double convGradeStrToDbl(const string& gradeStr)
{
    if (gradeStr == "A+") return 4.5;
    if (gradeStr == "A0") return 4.0;
    if (gradeStr == "B+") return 3.5;
    if (gradeStr == "B0") return 3.0;
    if (gradeStr == "C+") return 2.5;
    if (gradeStr == "C0") return 2.0;
    if (gradeStr == "D+") return 1.5;
    if (gradeStr == "D0") return 1.0;
    return 0.0;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cout.precision(6); cout << fixed;
    
    string subjectName, gradeStr;
    double acc = 0, creditSum = 0,
        gradeDbl = 0, credit = 0;
    
    for (int i = 0; i < 20; i++)
    {
        cin >> subjectName >> credit >> gradeStr;
        if (gradeStr == "P") continue; // don't calculate if the grade is P.
        gradeDbl = convGradeStrToDbl(gradeStr);
        creditSum += credit;
        acc += credit * gradeDbl;
    }

    cout << acc / creditSum << '\n';

    return 0;
}