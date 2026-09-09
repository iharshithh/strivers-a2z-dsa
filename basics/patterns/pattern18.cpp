#include <iostream>

int main(){

    int n = 5;
    int ascii_char = 65;
    
    for(int i = 1; i<=n; i++){
        for(int j =i; j>=1; j--){
            std::cout << static_cast<char>(ascii_char+n-j);
        }
        std::cout << '\n';
    }

    return 0;
}