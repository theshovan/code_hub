#include <bits/stdc++.h>
using namespace std;
//function printName
// Renamed function to avoid conflict
int printName(string name){
    cout << "My name is: " << name << endl;
    return 0;
}
//function printAge
int printAge(string age){
    cout << "My age is: " << age << endl;
    return 0;
}

int main(){
    string userName, userAge;

    // Proper prompt and input
    cout << "Enter your name: ";
    cin >> userName;

    cout << "Enter your age: ";
    cin >> userAge;


    // Call the renamed function
    printName(userName);
    printAge(userAge);

    return 0;
}
