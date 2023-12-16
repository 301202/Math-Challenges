//QUESTION
/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
*/

#include <iostream>

int main() {
    int firstNumber = 0;
    int secondNumber = 1;
    int limit = 4000000;
    int evenSum = 0;

    while (true) {
        int sum = firstNumber + secondNumber;

        if (sum >= limit) {
            break;
        }

        if(sum%2 == 0){
            evenSum += sum;
            //std::cout << evenSum << std::endl;
            std::cout << evenSum << " ";
        }
        firstNumber = secondNumber;
        secondNumber = sum;

    }

    return 0;
}
