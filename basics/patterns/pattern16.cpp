#include <iostream>

int main(){

    int n=5;
    int ascii_char = 65;


    for(int i = 1; i<=n; i++){
        for(int j =1; j<=i; j++){
            std::cout << static_cast<char>(ascii_char);
        }
    std::cout << '\n';
    ascii_char++;
    }

    return 0;
}