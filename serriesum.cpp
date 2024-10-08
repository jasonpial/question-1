#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    // Numerator starts at 1, and denominator starts at 3
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        sum += static_cast<double>(numerator) / denominator;
    }

    // Output the sum of the series
    cout << "The sum of the series is: " << sum << '\n';

    return 0;
}


