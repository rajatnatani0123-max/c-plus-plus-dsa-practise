#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int i=1;
    while(i<=n){
        int space =1;
        while (space<=n-i){
            std::cout<< " ";
            space++;

        }
        int star =1;
        while(star<=i){
            std::cout<< "*";
            star++;

        }
        std::cout<< std::endl;
        i++;
}
return 0;

}