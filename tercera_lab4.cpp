#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int month, day;

    cout << "What is your full name?: ";
    getline(cin, name);
    cout << "What is your birthmonth (1-12): ";
    cin >> month;
    cout << "What is your birth day?: ";
    cin >> day;
   
    cout << endl << "Hello, " << name << "! Your zodiac sign is: ";

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        cout << "Aries";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        cout << "Taurus";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        cout << "Gemini";
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        cout << "Cancer";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        cout << "Leo";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        cout << "Virgo";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        cout << "Libra";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        cout << "Scorpio";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        cout << "Sagittarius";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        cout << "Capricon";
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        cout << "Aquarius";
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        cout << "Pisces";
    else
        cout << "That's not a valid date. Try again!";

    cout << endl;

    return 0;

}

