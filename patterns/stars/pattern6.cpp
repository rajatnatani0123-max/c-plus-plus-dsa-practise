#include <iostream>
int main(){
    int n=4;
    int i=1;
    while(i<=4){
        int space =1;
        while(space<=n-i){
            std::cout<<" ";
            space++;

        }
        int star =1;
        while(star<= 2*i-1){
            std::cout<< "*";
            star++;

        }
        int spaces =1;
        while(spaces<=n-i){
            std::cout<<" ";
            spaces++;

        }
        
        std::cout<< std::endl;
        i++;
        
    }
    return 0;

}