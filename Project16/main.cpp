#include "gmock/gmock.h"
#include "prime-factors.cpp"


TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

int main()
{
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}