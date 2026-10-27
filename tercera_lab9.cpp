#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 5;
const int COURSE_COUNT = 3;

// Function prototypes
void calculateStudent(int i, double Score[][3], double &total, double &average);
void displayAll(int n, string NameArr[], double Score[][3]);
int findTopStudent(int n, double Score[][3]);

// To make listing the subjects shorter - Aaron
string Titles[3] = { "Math","C Programming","Operating Systems" };
double total = 0;
double average = 0;

int main()
{
    // Test data stored directly in main()
    int n = 3;
    string NameArr[MAX] = {"Alice", "Bob", "Carl"};
    double Score[MAX][3] = {
        {90, 85, 95},
        {70, 80, 75},
        {88, 92, 84}
    };

    cout << fixed << setprecision(2);

    cout << "=== Student Grade Report ===" << endl;
    displayAll(n, NameArr, Score);

    int TopStudent = findTopStudent(n, Score);
    calculateStudent(TopStudent, Score, total, average);
    cout << "Top Student: " << NameArr[TopStudent] << " | Total = " << total << " | Average = " << average;
    return 0;
}

// Calculate total and average for one student
void calculateStudent(int i, double Score[][3], double& total, double& average)
{
    total = 0;
    average = 0;
    total = Score[i][0] + Score[i][1] + Score[i][2];
    average = total / COURSE_COUNT;
}

// Display all students' information
void displayAll(int n, string NameArr[], double Score[][3])
{
    for (int i = 0; i < n; i++)
    {
        cout << NameArr[i];
        for (int j = 0; j < 3; j++)
        {
            cout << " | " << Titles[j] << " = " << Score[i][j];
        }
        calculateStudent(i, Score, total, average);
        cout << " | Total = " << total << " | Average = " << average;
        cout << endl;
    }
    cout << endl;
}

// Find the index of the student with the highest total score
int findTopStudent(int n, double Score[][3])
{
    int highestScoreIndex = 0;
    double currentHighestScore = 0;
    for (int i = 0; i < n; i++)
    {
        calculateStudent(i, Score, total, average);
        if (currentHighestScore < total)
        {
            currentHighestScore = total;
            highestScoreIndex = i;
        }
    }
    return highestScoreIndex;
}