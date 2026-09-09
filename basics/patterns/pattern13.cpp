#include <iostream>

int main(){

    int n=5;
    int m=1;

    for(int i = 1; i<n+1; i++){
        for(int j =1; j<i+1; j++){
            std::cout << m << ' ';
            m++;
        }
    std::cout << '\n';
    }

    return 0;
}