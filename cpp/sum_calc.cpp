#include <iostream>

int getTotal(int numbers[], int size);

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int total = getTotal(numbers, size);
    
std::cout << total;

return 0;
}
int getTotal(int numbers[], int size){
    int total = 0;
    
    for(int i = 0; i < size; i++){
        total += numbers[i];
    }
return total;
}
