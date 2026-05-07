#include <iostream>
int main(){
    int weight;
    std::cout<< "enter your weight";
    std::cin>> weight;
    int height;
    std::cout<< "enter your height";
    std::cin>> height;
    if (weight < 80){
        if (height >6){
            std::cout<< "you are fit";
        }
        else{
            std::cout<< "you are not fit";
        }
    }
    return 0;
}
    