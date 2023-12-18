//QUESTION 
/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2.
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/
#include <iostream>

bool isPythagoreanTriplet(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

int main() {
    const int targetSum = 1000;

    for (int a = 1; a < targetSum; ++a) {
        for (int b = a + 1; b < targetSum - a; ++b) {
            int c = targetSum - a - b;

            if (isPythagoreanTriplet(a, b, c)) {
                std::cout << "Pythagorean Triplet: " << a << ", " << b << ", " << c << std::endl;
                std::cout << "Product: " << a * b * c << std::endl;
                return 0;  // Stop after finding the first triplet
            }
        }
    }

    std::cout << "No Pythagorean Triplet found." << std::endl;

    return 0;
}

