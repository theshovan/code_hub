#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=80){
        cout<<" A";
    }
    else if(marks>=60 && marks<80){
        cout<<"B";
    }
    else if(marks>=40 && marks<60){
        cout<<"C";
    }
    else if(marks>=25 && marks<40){
        cout<<"D";
    }
    else{
        cout<<"F";
    }

    return 0;
}