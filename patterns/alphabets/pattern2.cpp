#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int count =0;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = 'A'+count;
            std::cout<< ch  << " ";
            count++;
            j++;
        }
        std::cout<< std::endl;
        i++;
    }
    return 0;
}