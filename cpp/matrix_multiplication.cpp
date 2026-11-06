#include <iostream>

int main(){
    int A[2][2];
    int B[2][2];
    int C[2][2];

std::cout << "Write the parameters of matrix a in a row):";
for(int i = 0; i <2; i++){
    for(int j = 0; j <2; j++){
std::cin >> A[i][j];
    }
}

std::cout << "Write the parameters of matrix b in a row):";
for(int i = 0; i <2; i++){
    for(int j = 0; j <2; j++){
std::cin >> B[i][j];
    }
}

for(int i = 0; i <2; i++){
    for(int j = 0; j <2; j++){
        C[i][j] = 0;
        for(int k = 0; k <2; k++){
            C[i][j] += A[i][k] * B[k][j];
            }    
        }
    }
    
std::cout << "Result:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << '\n';
    }
    
return 0;
}
