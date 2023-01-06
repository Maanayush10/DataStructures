// c++ Program for spelling the digits if a given Number

#include <iostream>
using namespace std;

void getDigit(int dig)
{
    switch (dig)
    {
    case 0:
        cout << " ZERO ";
        break;
    case 1:
        cout << " ONE ";
        break;
    case 2:
        cout << " TWO ";
        break;
    case 3:
        cout << " THREE ";
        break;
    case 4:
        cout << " FOUR ";
        break;
    case 5:
        cout << " FIVE ";
        break;
    case 6:
        cout << " SIX ";
        break;
    case 7:
        cout << " SEVEN ";
        break;
    case 8:
        cout << " EIGHT ";
        break;
    case 9:
        cout << " NINE ";
        break;
    default:
        break;
    }
}
// recursive
void sayDigits2(int num)
{
    int digit;

    if (num == 0)
    {
        return;
    }


    digit = num % 10;
    num = num / 10;

    sayDigits2(num);
     

    //before printing call all the digits, as we are travesing from the last digit;
    //then print all the digits;
    getDigit(digit);
}

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    sayDigits2(num);

    return 0;
}
