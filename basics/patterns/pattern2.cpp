#include <iostream>

int main(){

    int n = 5;
    
    for(int i = 1; i<n+1; i++){
        for(int j =0; j<i; j++){
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}