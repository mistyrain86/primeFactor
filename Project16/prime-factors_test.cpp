#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

class PrimeFactorsTest : public Test {
protected:
	PrimeFactors prime_factor;
};

TEST_F(PrimeFactorsTest, Of1) {
	EXPECT_THAT(prime_factor.of(1), IsEmpty());
}

TEST_F(PrimeFactorsTest, Of2) {
	EXPECT_THAT(prime_factor.of(2), ElementsAre(2));
}

TEST_F(PrimeFactorsTest, Of3) {
	EXPECT_THAT(prime_factor.of(3), ElementsAre(3));
}

TEST_F(PrimeFactorsTest, Of4) {
	EXPECT_THAT(prime_factor.of(4), ElementsAre(2, 2));
}

TEST_F(PrimeFactorsTest, Of8) {
	EXPECT_THAT(prime_factor.of(8), ElementsAre(2, 2, 2));
}

TEST_F(PrimeFactorsTest, Of9) {
	EXPECT_THAT(prime_factor.of(9), ElementsAre(3, 3));
}
