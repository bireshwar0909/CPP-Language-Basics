#include <iostream>
using namespace std;

int main(){

    int age =18;
    if (age == 18){
        cout << "Congratulations you are 18"<<endl;
    }
    else if (age > 18)
    {
        cout << "Your age is above 18" <<endl;
    }
    else{
        cout << "You are below 18";
    }

//--------------------------------------------------------//

    bool is18 = true;
    bool is0 = false;
    
    if (is18 && is0){
        cout << "yo";
    }    
    else if (is18 || is0)
    {
        cout << "hi";
    }
    else{
        cout << "bla bla bla";
    }
    
    return 0;
}