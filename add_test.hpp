#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddEvaluatePositivesWhole) {
    Op* a = new Op(3.0);
    Op* b = new Op(4.0);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->evaluate(), 7.0);
}

TEST(AddTest, AddEvaluateNegativesWhole) {
    Op* a = new Op(-2.0);
    Op* b = new Op(-5.0);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->evaluate(), -7.0);
}

TEST(AddTest, AddEvaluatePosNegWhole) {
    Op* a = new Op(-6.0);
    Op* b = new Op(9.0);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->evaluate(), 3.0);
}

TEST(AddTest, AddEvaluatePositivesDecimal) {
    Op* a = new Op(7.3);
    Op* b = new Op(9.1);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->evaluate(), 16.4);
}

TEST(AddTest, AddEvaluateNegativesDecimal) {
    Op* a = new Op(-7.3);
    Op* b = new Op(-9.1);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->evaluate(), -16.4);
}

TEST(AddTest, AddEvaluateZeros) {
    Op* a = new Op(0.0);
    Add* test = new Add(a, a);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(AddTest, AddStringifyPositive) {
    Op* a = new Op(7.3);
    Op* b = new Op(9.1);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->stringify(), "7.300000+9.100000");
}

TEST(AddTest, AddStringifyNegative) {
    Op* a = new Op(-3.7);
    Op* b = new Op(1.9);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->stringify(), "(-3.700000)+1.900000");
}

TEST(AddTest, AddStringifyPosNeg) {
    Op* a = new Op(3.7);
    Op* b = new Op(-1.9);
    Add* test = new Add(a, b);
    EXPECT_EQ(test->stringify(), "3.700000+(-1.900000)");
}

#endif
