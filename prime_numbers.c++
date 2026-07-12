#include <iostream>
#include <cmath>

int main(){
    int number;
    do{
        std::cout << "Insert number: ";
        std::cin >> number;}while(number <= 0);
    double s_r = sqrt(number);
    bool prime = true;
    for(int i = 2; i <= s_r; i++){
    if(number % i == 0){
        prime = false;
    break;
        }
    }
    if(prime){
        std::cout << "The number is prime";
    }
    else {
        std::cout << "The number is composite";
    }
return 0;
}
