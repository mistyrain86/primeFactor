#include "prime-factors.h"

std::vector<int> PrimeFactors::of(int n) {
	std::vector<int> factors;
	for (int divisor = 2; n > 1; divisor++) {
		while (n % divisor == 0) {
			factors.push_back(divisor);
			n /= divisor;
		}
	}
	return factors;
}
