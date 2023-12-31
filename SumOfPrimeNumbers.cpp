//QUESTION
/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int limit = 2000000;
    long long sum = 0; 
    for(int i = 2; i <= limit; i++){
        if(isPrime(i)){
            sum += i;
            //std::cout << sum << " ";
        }
    }
 
    std::cout << sum << " ";

}