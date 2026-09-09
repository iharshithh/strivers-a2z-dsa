#include <iostream>

int main(){

    int n=5;

    for(int i = 1; i<n+1; i++){
        int ascii_code = 65;
        for(int j =1; j<i+1; j++){
            std::cout << static_cast<char>(ascii_code); 
            ascii_code++;
        }
    std::cout << '\n';
    }

    return 0;
}