#include <iostream>
using namespace std;

int main() {

    double usergrade;

    cout << "Enter your grade: ";
    cin >> usergrade;

    if (usergrade <=0 || usergrade >= 100){
        cout << "You have entered a wrong data";
    }
    else if(usergrade >= 90){
        cout << "A";
    }
    else if(usergrade >= 80){
        cout << "B";
    }
    else if (usergrade >= 70){
        cout << "C";
    }
    else
    cout << "F";
    return 0;
    
}