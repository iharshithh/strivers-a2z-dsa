#include <iostream>

int main(){

    int n = 4;
    
    for(int i = 1; i<=n; i++){
        std::cout << '*';
    }
    std::cout << '\n';

    for(int j = 1; j<=n/2;j++){

        for(int k =1; k<=n; k++){
            if(k==1||k==n){
                std::cout<< '*';
            }else{
            std::cout<< ' ';
            }  
        }
        std::cout<< '\n';
    }

    for(int i = 1; i<=n; i++){
        std::cout << '*';
    }

    return 0;
}