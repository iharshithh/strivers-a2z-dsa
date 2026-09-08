#include <iostream>
#include <string>

int main(){

    int n=15;

    for(int i =1; i<=n; i++){
        std::cout << std::string(n-i, ' ');
        std::cout << std::string(2*i-1, '*') << '\n';
    }
    for(int i = n-1; i>=1; i--){
        std::cout << std::string(n-i, ' ');
        std::cout << std::string(2*i-1, '*') << '\n';
    }

    return 0;
}

