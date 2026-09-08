#include <iostream>
#include <string>

int main(){

    int n=5;

    for(int i =n; i>=1; i--){
        std::cout << std::string(n-i, ' ');
        std::cout << std::string(2*i-1, '*') << '\n';
    }

    return 0;
}

