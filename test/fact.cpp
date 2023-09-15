
#include "../fact.hpp"
#include <gtest/gtest.h>
using namespace std;
using namespace algocpp::math;

TEST(math_fact, integer)
{
	ASSERT_EQ(fact(5), 120);
}
