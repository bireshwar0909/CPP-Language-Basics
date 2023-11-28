#include <iostream>
using namespace std;

int main()
{

    string dayOfWeek[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturady"};

    int dayNum;
    cout << "Please enter a number between 1-7" << endl;
    cin >>dayNum;

    switch (dayNum)
    {
    case 1:
        cout << dayOfWeek[0];
        break;

    case 2:
        cout << dayOfWeek[1];
        break;

    case 3:
        cout << dayOfWeek[2];
        break;

    case 4:
        cout << dayOfWeek[3];
        break;

    case 5:
        cout << dayOfWeek[4];
        break;

    case 6:
        cout << dayOfWeek[5];
        break;

    case 7:
        cout << dayOfWeek[6];
        break;
    }

    return 0;
}