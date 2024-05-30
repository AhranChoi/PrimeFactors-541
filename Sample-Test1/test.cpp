#include "pch.h"
#include "../TddPrimeFactors/PrimeFactors.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(primeFactor.of(1), expected);
}