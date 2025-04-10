#include<bits/stdc++.h>
using namespace std;

/*Marks>=80, Print grade A,
Marks>=60, Print grade B,
Marks>=40, Print grade C,
Marks>=25, Print grade D,
Marks<25, Print grade F
    */

int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=80){
        cout<<" A";
    }
    else if(marks>=60){
        cout<<"B";
    }
    else if(marks>=40){
        cout<<"C";
    }
    else if(marks>=25){
        cout<<"D";
    }
    else{
        cout<<"F";
    }

    return 0;
}
