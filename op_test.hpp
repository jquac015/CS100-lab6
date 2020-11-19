#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluatePositiveWhole) {
	Op* test = new Op(25.0);
	EXPECT_EQ(test->evaluate(), 25.0);
}

TEST(OpTest, OpEvaluatePositiveDecimal) {
    Op* test = new Op(7.3);
    EXPECT_EQ(test->evaluate(), 7.3);
}

TEST(OpTest, OpEvaluateNegativeWhole) {
    Op* test = new Op(-25.0);
    EXPECT_EQ(test->evaluate(), -25.0);
}

TEST(OpTest, OpEvaluateNegativeDecimal) {
    Op* test = new Op(-3.7);
    EXPECT_EQ(test->evaluate(), -3.7);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0.0);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(OpTest, OpStringifyPositiveWhole) {
    Op* test = new Op(4.0);
    EXPECT_EQ(test->stringify(), "4.000000");
}

TEST(OpTest, OpStringifyPositiveDecimal) {
    Op* test = new Op(8.2);
    EXPECT_EQ(test->stringify(), "8.200000");
}

#endif
