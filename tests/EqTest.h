#ifndef EQTEST_H
#define EQTEST_H
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C"{
#include "SolveEquation.h"
}

TEST(noroots_TEST, suite1)
{
    double x1;
    double x2;
    int c = SolveEq(0, 0, 3, &x1, &x2);
    EXPECT_EQ(c, 1);
}

TEST(noroots_TEST, suite2)
{
    double x1;
    double x2;
    int c = SolveEq(1, 2, 3, &x1, &x2);
    EXPECT_EQ(c, 1);
}

TEST(oneroot_TEST, suite1)
{
    double x1;
    double x2;
    SolveEq(0, 2, 4, &x1, &x2);
    EXPECT_EQ(x1, -2);
}

TEST(oneroots_TEST, suite2)
{
    double x1;
    double x2;
    SolveEq(1, 2, 1, &x1, &x2);
    EXPECT_EQ(x1, -1);
}

TEST(tworoots_TEST, suite1)
{
    double x1;
    double x2;
    SolveEq(1, 2, -3, &x1, &x2);
    EXPECT_EQ(x1, 1);
    EXPECT_EQ(x2, -3);
}

#endif // EQTEST_H
