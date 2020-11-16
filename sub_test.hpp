#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"

TEST(SubTest, TestPosInt) {
    Op* a = new Op(3.0);
    Op* b = new Op(2.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(SubTest, TestPosIntPosDec) {
    Op* a = new Op(3.0);
    Op* b = new Op(2.1);
    Sub* test = new Sub(a, b);
    EXPECT_NEAR(0.9, test->evaluate(), 0.001);
}

TEST(SubTest, TestNegDecPosInt) {
    Op* a = new Op(-7.2);
    Op* b = new Op(2.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), -9.2);
}

TEST(SubTest, TestPosIntPosDecString) {
    Op* a = new Op(3.0);
    Op* b = new Op(2.1);
    Sub* test = new Sub(a, b);    
    EXPECT_EQ(test->stringify(), "3.000000-2.100000");
}
#endif
