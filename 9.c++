//write a program to print the first 10 prime numbers 
#include <iostream>
#include <cmath> n

bool isPrime(int n) {

    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true; 
}

int main() {
    int count = 0;
    int num = 2;   

    std::cout << "The first 10 prime numbers are:" << std::endl;

    while (count < 10) {
        if (isPrime(num)) {
            std::cout << num << " ";
            count++;
        }
        num++; 
    }

    std::cout << std::endl;

    return 0;
}