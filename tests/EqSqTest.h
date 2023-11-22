#ifndef EQSQTEST_H
#define EQSQTEST_H


#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "EqSq.h"
}


TEST(MyrootTest, num0) {
    ASSERT_EQ(roots(1, 2, 3), 0);
}

TEST(MyrootTest2, num0) {
    ASSERT_EQ(roots(6, 6, 1), 2);
}

#endif // EQSQTEST_H
