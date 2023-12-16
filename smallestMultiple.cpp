//QUESTION
/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible with no remainder by all of the numbers from 1 to 20?*/

#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int lcm(int start, int end){
    int result = 1;
    for(int i = start; i <= end; i++){
        result = result * (i/gcd(i, result));
    }
    return result;
}

int main(){
    int smallestMultiple = lcm(1, 20);
    std::cout << smallestMultiple;
}