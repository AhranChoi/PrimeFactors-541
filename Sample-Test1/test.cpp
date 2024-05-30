#include "pch.h"
#include "../TddPrimeFactors/PrimeFactors.cpp"

using namespace std;

class PrimeFixture : public testing::Test {
public:
	PrimeFactor primeFactor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(primeFactor.of(1), expected);
}

TEST_F(PrimeFixture, Of2) {
	expected = { 2 };
	EXPECT_EQ(primeFactor.of(2), expected);
}

TEST_F(PrimeFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(primeFactor.of(3), expected);
}

TEST_F(PrimeFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(primeFactor.of(4), expected);
}

TEST_F(PrimeFixture, Of6) {
	expected = { 2, 3 };
	EXPECT_EQ(primeFactor.of(6), expected);
}

TEST_F(PrimeFixture, Of9) {
	expected = { 3, 3 };
	EXPECT_EQ(primeFactor.of(9), expected);
}

TEST_F(PrimeFixture, Of12) {
	expected = { 2, 2, 3 };
	EXPECT_EQ(primeFactor.of(12), expected);
}
