#include <iostream>
using namespace std;

int main()
{

    char grade = 'A';
    char number = '3';
    string name = "Tom Hardy";
    string numberAsString = "123456789";
    int age = 23;

    // there are two data types that allows us to work with decimals
    // the main difference is how many digits they can carry after the decimal
    float length = 4.3;
    double seconds = 4.33333333333333;

    bool present = false;
    bool happy = true;

    long phoneNumber = 1231231230;   //Technically 10 digits
    // the only difference it has from int is that it can store a whole big number
    short phoneNumber1 = 1;
    // the only difference it has from int is that it can store a whole less

    // printing the variables
    cout << grade << endl;
    cout << number << endl;
    cout << name << endl;
    cout << numberAsString << endl;
    cout << age << endl;
    cout << length << endl;
    cout << seconds << endl;
    cout << present << " "  << happy << endl;       // printing two variables in the same line
    cout << phoneNumber << " " << phoneNumber1 << endl;

    return 0;
}