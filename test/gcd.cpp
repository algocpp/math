
#include "../gcd.hpp"
#include <gtest/gtest.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <stdexcept>
#include <vector>
using namespace algocpp::math;
using cint = boost::multiprecision::cpp_int;

TEST(math_gcd, nomal)
{
	EXPECT_EQ(gcd(12, 9), 3);
}

TEST(math_gcd, equal)
{
	EXPECT_EQ(gcd(123, 123), 123);
}

TEST(math_gcd, big)
{
	cint x("438294790427304371897418"), y("7481978943743232");
	EXPECT_EQ(gcd(x, y), cint("6"));
}

TEST(math_gcd, minus)
{
	cint x("-1"), y("490724074397439279374273207903749237390274907902793429");
	EXPECT_THROW(gcd(x, y), std::invalid_argument);
}

TEST(math_gcd, vector_max)
{
	std::vector<cint> x = {630, 300, 520, 3150};
	EXPECT_EQ(gcd(x), cint("10"));
}

TEST(math_gcd, vector_long)
{
	std::vector<cint> x = {432, 4320, 320, 630, 150, 310, 594, 382, 472, 582, 588, 596, 482, 594, 194, 682, 192};
	EXPECT_EQ(gcd(x), cint("2"));
}

TEST(math_gcd, vector_minus)
{
	std::vector<cint> x = {3, 2, 5, 6, 4, 2, 6, 8, 6, 54, -1, 483};
	EXPECT_THROW(gcd(x), std::invalid_argument);
}

TEST(math_gcd, vector_one)
{
	std::vector<cint> x = {3};
	EXPECT_THROW(gcd(x), std::invalid_argument);
}

TEST(math_gcd, vector_zero)
{
	std::vector<cint> x = {};
	EXPECT_THROW(gcd(x), std::invalid_argument);
}

TEST(math_gcd, vector_int)
{
	std::vector<int> x{32, 16, 12};
	EXPECT_EQ(gcd(x), 4);
}

TEST(math_gcd, arg)
{
	EXPECT_EQ(gcd(32, 16, 12), 4);
}

TEST(math_gcd, arg_long)
{
	EXPECT_EQ(gcd(32, 6, 12, 8, 4, 2, 12, 4, 56), 2);
}

TEST(math_gcd, arg_max)
{
	EXPECT_EQ(gcd(cint("31521452"), cint("43255762"), cint("4379834")), cint("2"));
}

TEST(math_gcd, arg_one)
{
	EXPECT_THROW(gcd(31415926535), std::invalid_argument);
}

TEST(math_gcd, arg_zero)
{
	EXPECT_THROW(gcd(), std::invalid_argument);
}

TEST(math_gcd, arg_minus)
{
	EXPECT_THROW(gcd(42283, 43920432, 84902, 29, 42, -1, 438), std::invalid_argument);
}
