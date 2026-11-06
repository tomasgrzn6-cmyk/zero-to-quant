#include <iostream>

int main(){
    int x;
    int y;
    std::cout << "Whats x: ";
    std::cin >> x;
    std::cout << "Whats y: ";
    std::cin >> y;
    int sum = x + y;
    int product = x * y;
    std::cout << "x + y equals to: " << sum << '\n'; 
    std::cout << "x * y equals to: " << product << '\n';
    if(x > y){
        std::cout << "x is greater than y";
    }
    else if(x < y){
        std::cout << "y is greater than x";
    }
    else{
        std::cout << "x is equal to y";
    }
    return 0;
}
