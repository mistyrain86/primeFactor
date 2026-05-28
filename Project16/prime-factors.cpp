#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int n) {
		vector<int> factors;
		for (int divisor = 2; n > 1; divisor++) {
			while (n % divisor == 0) {
				factors.push_back(divisor);
				n /= divisor;
			}
		}
		return factors;
	}

};