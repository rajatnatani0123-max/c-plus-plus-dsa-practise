#include <iostream>
int main(){
    int n;
    std::cin>> n;
    int i=1;
    while (i<=n){
        int star = n-i+1;
        while (star){
            std::cout<< "*";
            star--;
        }
        std::cout<< std::endl;
        i++;
    }
    return 0;
}