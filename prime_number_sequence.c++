#include <iostream>
#include <cmath>
    bool is_prime(int n) {
    if (n < 2) return false;
    double s_r = sqrt(n);
    for(int i = 2; i <= s_r; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
int upper_limit;
    do{std::cout << "What's the upper limit? ";
    std::cin >> upper_limit;
    } while(upper_limit <= 0);
    for (int n = 1; n <= upper_limit; n++) {
        if (is_prime(n)) { 
            std::cout << n << " ";
    }
}
return 0;   
}
