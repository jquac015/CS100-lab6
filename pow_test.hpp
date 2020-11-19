#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"

TEST(PowTest, TestPosPos) {
    Op* a = new Op(3.0);
    Op* b = new Op(2.0);
    Pow* test = new Pow(a, b);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(PowTest, TestPosEvenNeg) {
    Op* a = new Op(3.0);
    Op* b = new Op(-2.0);
    Pow* test = new Pow(a, b);
    EXPECT_NEAR(test->evaluate(), 1.0/9, 0.01);
}

TEST(PowTest, TestPosOddNeg) {
    Op* a = new Op(3.0);
    Op* b = new Op(-3.0);
    Pow* test = new Pow(a, b);    
    EXPECT_NEAR(test->evaluate(), 1.0/27, 0.01);
}

TEST(PowTest, TestNegEvenPos) {
    Op* a = new Op(-3.0);
    Op* b = new Op(2.0);
    Pow* test = new Pow(a, b);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(PowTest, TestNegOddPos) {
    Op* a = new Op(-3.0);
    Op* b = new Op(3.0);
    Pow* test = new Pow(a, b);
    EXPECT_EQ(test->evaluate(), -27);
}

TEST(PowTest, TestPosEvenNegString) {
    Op* a = new Op(3.0);
    Op* b = new Op(-2.0);
    Pow* test = new Pow(a, b);
    EXPECT_EQ(test->stringify(), "3.000000**(-2.000000)");
}
#endif
