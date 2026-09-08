#include <iostream>

int main(){

    int n=5;

    for(int i = n; i>0; i--){
        for(int j =1; j<i+1; j++){
            std::cout << j;
        }
    std::cout << '\n';
    }

    return 0;
}