#include "pch.h"
#include "../TddPrimeFactors/PrimeFactors.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(primeFactor.of(1), expected);
}

TEST(PrimeFactors, Of2) {
	PrimeFactor primeFactor;
	vector<int> expected = { 2 };
	EXPECT_EQ(primeFactor.of(2), expected);
}
