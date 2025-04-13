#include<bits/stdc++.h>
using namespace std;
/*if age>=18, print "adult",
 else, print "not adult".
*/
    
int main(){
    int age;
    cout << "Enter your age: ";
    cin>> age;
    if(age>=18){
        cout<<"You are an adult";
    }
    else{
        cout<<"You are not an adult";
    }
    return 0;
}
