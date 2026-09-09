#include <iostream>
#include <string>

int main(){

    int n=4;

    for(int i = 1; i<=n; i++){

        for(int j=1; j<=i; j++){
            std::cout << j;
        }

        for(int k=1; k<=2*(n-i); k++){
            std::cout << ' ';
        }

        for(int m = i; m>=1; m--){
            std::cout << m;
        }

        std::cout << '\n';
    }

    return 0;
}