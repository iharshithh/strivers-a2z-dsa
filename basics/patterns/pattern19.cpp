#include <iostream>

int main(){

    int n = 5;
    
    for(int i = 1; i<=n; i++){

        for(int x = 1; x <= n-i+1; x++){
            std::cout << '*';
        }

        for(int y =1; y<= 2*(i-1); y++){
            std::cout << ' ';
        }

        for(int z = 1; z<= n-i+1; z++){
            std::cout << '*';
        }

        std::cout << '\n';
    }

    for(int j = 1; j<=n; j++){

        for(int k =1; k<=j; k++){
            std::cout << '*';
        }

        for(int l =1; l<=2*(n-j); l++){
            std::cout << ' ';
        }

        for(int m = 1; m<=j; m++){
            std::cout << '*';
        }

        std::cout << '\n';
    }

    return 0;
}