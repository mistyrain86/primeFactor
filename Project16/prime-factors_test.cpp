#include "gmock/gmock.h"
#include "prime-factors.cpp"

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactors prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST(PrimeFactors, Of3) {
	PrimeFactors prime_factor;
	vector<int> expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST(PrimeFactors, Of4) {
	PrimeFactors prime_factor;
	vector<int> expected = {2, 2};
	EXPECT_EQ(expected, prime_factor.of(4));
}
