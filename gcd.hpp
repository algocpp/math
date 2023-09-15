
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
#ifdef BOOST_MP_CPP_INT_HPP
		using max_integer = boost::multiprecision::cpp_int;
#else
		using max_integer = unsigned long long;
#endif

		inline max_integer gcd(max_integer a, max_integer b)
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
