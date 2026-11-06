#include <iostream>
#include <cmath>

int main(){
    
int n;
do{
    std::cout << "How many terms of fibonacci you want to see? ";
    std::cin >> n;
}while(n <= 3);

int prev = 1;
int curr = 1;
int next = 0;

for (int i = 1; i <= n; i++){
    std::cout << prev << " ";
    next = curr + prev;
    prev = curr;
    curr = next;
}
double golden_ratio = (double)curr / prev;
  std::cout << "Golden ratio is: " << golden_ratio;
return 0;
}
