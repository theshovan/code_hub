#include<bits/stdc++.h>
using namespace std;

/* 1 is Monday,
2 is Tuesday,
.
.
.
7 is Sunday*/

int main(){
    int day;
    cout<<"Enter day no:";
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid input";
    }
    

    return 0;
}
