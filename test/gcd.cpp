
#include "../gcd.hpp"
#include <gtest/gtest.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <stdexcept>

TEST(math_gcd, nomal)
{
	EXPECT_EQ(algocpp::math::gcd(12, 9), 3);
}

TEST(math_gcd, equal)
{
	EXPECT_EQ(algocpp::math::gcd(123, 123), 123);
}

TEST(math_gcd, big)
{
	boost::multiprecision::cpp_int x("438294790427304371897418"), y("7481978943743232");
	EXPECT_EQ(algocpp::math::gcd(x, y), boost::multiprecision::cpp_int("6"));
}

TEST(math_gcd, minus)
{
	boost::multiprecision::cpp_int x("-1"), y("490724074397439279374273207903749237390274907902793429");
	EXPECT_THROW(algocpp::math::gcd(x, y), std::invalid_argument);
}
