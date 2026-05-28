#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int n) {
		vector<int> factors;
		if (n > 1)
			factors.push_back(n);
		return factors;
	}

};