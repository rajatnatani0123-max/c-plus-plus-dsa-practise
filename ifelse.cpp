#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<< "enter your marks";
    cin>> marks;
    if(marks >= 90){
        cout<< "you got A grade";
    }
    if(marks >= 80 && marks < 90){
        cout<< "you got B grade";
    }
    if(marks >= 70 && marks < 80){
        cout<< "you got C grade";
    }
    if(marks >= 60 && marks < 70){
        cout<< "you got D grade";
    }
    if(marks < 60){
        cout<< "you got F grade means FAIL";
    }
    return 0;

}
