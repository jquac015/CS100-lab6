#ifndef __LISTCONTAINER_TEST_HPP__
#define __LISTCONTAINER_TEST_HPP__

#include "gtest/gtest.h"
#include "ListContainer.hpp"

TEST(ListContainerTest, TestCons) {
    ListContainer* lc = new ListContainer();
    Op* a = new Op(3.0);
    lc->add_element(a);
    EXPECT_EQ(lc->size(), 1);
}

TEST(ListContainerTest, TestSwap) {
    ListContainer* lc = new ListContainer();
    Op* a = new Op(1.0);
    Op* b = new Op(2.0);
    Op* c = new Op(3.0);
    Op* d = new Op(4.0);
    lc->add_element(a);
    lc->add_element(b);
    lc->add_element(c);
    lc->add_element(d);
    lc->swap(0, 3);
    EXPECT_EQ("4.000000", lc->at(0)->stringify());
}

TEST(ListContainerTest, TestPrint) {
    ListContainer* lc = new ListContainer();
    Op* a = new Op(1.0);
    Op* b = new Op(2.0);
    Op* c = new Op(3.0);
    Op* d = new Op(4.0);
    lc->add_element(a);
    lc->add_element(b);
    lc->add_element(c);
    lc->add_element(d);
    testing::internal::CaptureStdout();
    lc->print();
    string output = testing::internal::GetCapturedStdout();
}

#endif

