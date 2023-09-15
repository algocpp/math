
// algocpp/math/gcd.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_MATH_GCD
#define ALGOCPP_MATH_GCD

#if !defined(ALGOCPP_NO_LIB) && __has_include(<boost/multiprecision/cpp_int.hpp>)
#include <boost/multiprecision/cpp_int.hpp>
#include <stdexcept>
#endif

namespace algocpp
{
	namespace math
	{
#ifndef BOOST_MP_CPP_INT_HPP
		inline constexpr unsigned long long gcd(unsigned long long a, unsigned long long b) noexcept
#else
		inline boost::multiprecision::cpp_int gcd(boost::multiprecision::cpp_int a, boost::multiprecision::cpp_int b)
#endif
		{
#ifdef BOOST_MP_CPP_INT_HPP
			if (a < 0 || b < 0)
			{
				throw std::invalid_argument("Any value must be a positive integer.");
			}
#endif

			return (b == 0 ? a : gcd(b, a % b));
		}
	}
}

#endif // ALGOCPP_MATH_GCD
