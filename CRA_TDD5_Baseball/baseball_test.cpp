#include "gmock/gmock.h"
#include "baseball.cpp"

TEST(BaseballGame, ThrowExceptionWhenInpustLengthIsUnmatched)
{
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}

TEST(BaseballGame, ThrowExceptionWhenInvalidChar)
{
	Baseball game;
	EXPECT_THROW(game.guess(string("12s")), invalid_argument);

	try {
		game.guess(string("12s"));
		FAIL();
	}
	catch (exception e) {
		// PASS
	}
}

TEST(BaseballTS, exceptionTC1)
{

	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}