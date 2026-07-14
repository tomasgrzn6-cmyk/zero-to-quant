#include <iostream>

void swap(int *x, int *y){ //we are swapping the value of the integers
int num;

num = *x;
*x = *y;
*y = num;
}

int main(){
int x = 6;
int y = 7; 
   
    swap(&x, &y); //now we are passing the placement of x and y
    
    std::cout << "X:" << x <<'\n';
    std::cout << "Y:" << y <<'\n';
return 0;
}
