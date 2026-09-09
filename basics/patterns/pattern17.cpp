#include <iostream>
#include <string>

int main(){

    int n=4;

    for(int i=1; i<=n; i++){

        for(int j = 1; j<=n-i; j++){
            std::cout << ' ';
        }

        int ascii_char = 65;

        for(int m = 1; m<=i; m++){
            std::cout << static_cast<char>(ascii_char);
            ascii_char++;
        }

        ascii_char = 65;
        for(int k = i-1; k>=1; k--){
            std::cout << static_cast<char>(ascii_char+k-1);
        }

        std::cout << '\n';
    }


    return 0;
}

