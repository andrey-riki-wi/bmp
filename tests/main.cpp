#include <gtest/gtest.h>

TEST(one, one) {
    EXPECT_EQ(1, 1);
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}