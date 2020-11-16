#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "mult.hpp"

TEST(MultTest, MultEvaluatePositivesWhole) {
    Op* a = new Op(3.0);
    Op* b = new Op(4.0);
    Mult* test = new Mult(a,b);
    EXPECT_EQ(test->evaluate(), 12.0);
}

TEST(MultTest, MultEvaluateNegativesWhole) {
    Op* a = new Op(-2.0);
    Op* b = new Op(-5.0);
    Mult* test = new Mult(a,b);
    EXPECT_EQ(test->evaluate(), 10.0);
}

TEST(MultTest, MultEvaluatePosNegWhole) {
    Op* a = new Op(6.0);
    Op* b = new Op(-9.0);
    Mult* test = new Mult(a,b);
    EXPECT_EQ(test->evaluate(), -54.0);
}

TEST(MultTest, MultEvaluatePositivesDecimal) {
    Op* a = new Op(7.3);
    Op* b = new Op(9.1);
    Mult* test = new Mult(a,b);
    EXPECT_NEAR(66.43,test->evaluate(), 66.44);
}

TEST(MultTest, MultEvaluateNegativesDecimal) {
    Op* a = new Op(-7.3);
    Op* b = new Op(-9.1);
    Mult* test = new Mult(a,b);
    EXPECT_NEAR(66.43,test->evaluate(), 66.44);
}

TEST(MultTest, MultEvaluateZeros) {
    Op* a = new Op(0.0);
    Op* b = new Op(0.0);
    Mult* test = new Mult(a,b);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(MultTest, MultStringifyPositive) {
    Op* a = new Op(7.3);
    Op* b = new Op(9.1);
    Mult* test = new Mult(a,b);
    EXPECT_EQ(test->stringify(), "7.300000*9.100000");
}

TEST(MultTest, MultStringifyNegative) {
    Op* a = new Op(-3.7);
    Op* b = new Op(1.9);
    Mult* test = new Mult(a,b);
    EXPECT_EQ(test->stringify(), "(-3.700000)*1.900000");
}

TEST(MultTest, MultStringifyPosNeg) {
    Op* a = new Op(3.7);
    Op* b = new Op(-1.9);
    Mult* test = new Mult(a,b);
    EXPECT_EQ(test->stringify(), "3.700000*(-1.900000)");
}

#endif
