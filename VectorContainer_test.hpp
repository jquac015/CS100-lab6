#ifndef __VECTORCONTAINER_TEST_HPP__
#define __VECTORCONTAINER_TEST_HPP__

#include "gtest/gtest.h"
#include "VectorContainer.hpp"

TEST(VectorContainerTest, TestCons) {
    VectorContainer vc;
    Op* a = new Op(3.0);
    vc.add_element(a);
    EXPECT_EQ(vc.size(), 1);
}

TEST(VectorContainerTest, TestSwap) {
    VectorContainer vc;
    Op* a = new Op(1.0);
    Op* b = new Op(2.0);
    Op* c = new Op(3.0);
    Op* d = new Op(4.0);
    vc.add_element(a);
    vc.add_element(b);
    vc.add_element(c);
    vc.add_element(d);
    vc.swap(0, 3);
    EXPECT_EQ("4.000000", vc.at(0)->stringify());
}

TEST(VectorContainerTest, TestPrint) {
    VectorContainer vc;
    Op* a = new Op(1.0);
    Op* b = new Op(2.0);
    Op* c = new Op(3.0);
    Op* d = new Op(4.0);
    vc.add_element(a);
    vc.add_element(b);
    vc.add_element(c);
    vc.add_element(d);
    testing::internal::CaptureStdout();
    vc.print();
    string output = testing::internal::GetCapturedStdout();
} 

#endif
