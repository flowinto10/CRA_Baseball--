#include "gmock/gmock.h"
#include "baseball.cpp"

TEST(BaseballTS, TC0)
{
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}