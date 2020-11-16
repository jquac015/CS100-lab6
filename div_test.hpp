#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, DivEvaluatePositivesWhole) {
    Op* a = new Op(3.0);
    Op* b = new Op(4.0);
    Div* test = new Div(a,b);
    EXPECT_EQ(test->evaluate(), 0.75);
}

TEST(DivTest, DivEvaluateNegativesWhole) {
    Op* a = new Op(-2.0);
    Op* b = new Op(-5.0);
    Div* test = new Div(a,b);
    EXPECT_EQ(test->evaluate(), 0.4);
}

TEST(DivTest, DivEvaluatePosNegWhole) {
    Op* a = new Op(6.0);
    Op* b = new Op(-8.0);
    Div* test = new Div(a,b);
    EXPECT_EQ(test->evaluate(), -0.75);
}

TEST(DivTest, DivEvaluatePositivesDecimal) {
    Op* a = new Op(7.3);
    Op* b = new Op(9.1);
    Div* test = new Div(a,b);
    EXPECT_NEAR(0.802,test->evaluate(), 0.803);
}

TEST(DivTest, DivEvaluateNegativesDecimal) {
    Op* a = new Op(-7.3);
    Op* b = new Op(-9.1);
    Div* test = new Div(a,b);
    EXPECT_NEAR(0.802,test->evaluate(), 0.803);
}

TEST(DivTest, DivStringifyPositive) {
    Op* a = new Op(7.3);
    Op* b = new Op(9.1);
    Div* test = new Div(a,b);
    EXPECT_EQ(test->stringify(), "7.300000/9.100000");
}

TEST(DivTest, DivStringifyNegative) {
    Op* a = new Op(-3.7);
    Op* b = new Op(1.9);
    Div* test = new Div(a,b);
    EXPECT_EQ(test->stringify(), "(-3.700000)/1.900000");
}

TEST(DivTest, DivStringifyPosNeg) {
    Op* a = new Op(3.7);
    Op* b = new Op(-1.9);
    Div* test = new Div(a,b);
    EXPECT_EQ(test->stringify(), "3.700000/(-1.900000)");
}

#endif
