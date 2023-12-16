//QUESTION
/*The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385.
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025.
Hence the difference between the sum of the squares of the first ten natural numbers 
and the square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the 
first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

int sumOfSquares(int start, int end){
    int sum = 0;
    int num = 0;
    for(int i = start; i <= end; i++){
        num = i * i;
        sum += num;
    }
    return sum;
}

int squareOfSums(int start, int end){
    int sum = 0;
    int num = 0;
    for(int i = start; i <= end; i++){
        sum += i;
    }
    return sum * sum;
}

int differenceOfSums(int start, int end){
    int difference;
    difference = squareOfSums(start, end) - sumOfSquares(start, end);
    return difference;    
}

int main(){
    int sos = differenceOfSums(1, 100);
    std::cout << sos;
}