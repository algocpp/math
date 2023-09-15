
#include "../fact.hpp"
#include <gtest/gtest.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <stdexcept>
using namespace algocpp::math;

// int
TEST(math_fact, integer)
{
	ASSERT_EQ(fact(5), 120);
}

TEST(math_fact, minus_integer)
{
	ASSERT_THROW(fact(-1), std::invalid_argument);
}

// int64_t
TEST(math_fact, int64)
{
	std::int64_t a = 5;
	ASSERT_EQ(fact(a), 120);
}

TEST(math_fact, minus_int64)
{
	std::int64_t a = -1;
	ASSERT_THROW(fact(a), std::invalid_argument);
}

TEST(math_fact, cpp_int)
{
	boost::multiprecision::cpp_int n = 35;
	ASSERT_EQ(fact(n), boost::multiprecision::cpp_int("10333147966386144929666651337523200000000"));
}

TEST(math_fact, minus_cpp_int)
{
	boost::multiprecision::cpp_int n = -1;
	ASSERT_THROW(fact(n), std::invalid_argument);
}

TEST(math_fact, int1024)
{
	boost::multiprecision::int1024_t n = 35;
	ASSERT_EQ(fact(n), boost::multiprecision::int1024_t("10333147966386144929666651337523200000000"));
}
