#include<iostream>
int main(){
    int MARKS;
    std::cout<< "enter your MARKS";
    std::cin>> MARKS;
    switch (MARKS){
        case 90:
            std::cout<< "you got A grade";
            break;
        case 80:                
            std::cout<< "you got B grade";
            break;
        case 70:
            std::cout<< "you got C grade";
            break;
        case 60:
            std::cout<< "you got D grade";
            break;
        default:        
            std::cout<< "you got F grade means FAIL";   
}
    return 0;
}   