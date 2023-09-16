
// algocpp/math/gcd.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_MATH_GCD
#define ALGOCPP_MATH_GCD

#include <stdexcept>
#include <vector>
#include <initializer_list>

#if !defined(ALGOCPP_NO_LIB) && __has_include(<boost/multiprecision/cpp_int.hpp>)
#include <boost/multiprecision/cpp_int.hpp>
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

		namespace base
		{
			inline long long base_gcd(long long a, long long b)
			{
				if (a < 0 || b < 0)
				{
					throw std::invalid_argument("Any value must be a positive integer.");
				}

				return (b == 0 ? a : base_gcd(b, a % b));
			}

			inline max_integer base_gcd(max_integer a, max_integer b)
			{
				if (a < 0 || b < 0)
				{
					throw std::invalid_argument("Any value must be a positive integer.");
				}

				return (b == 0 ? a : base_gcd(b, a % b));
			}
		}

		inline long long gcd(long long a, long long b)
		{
			return base::base_gcd(a, b);
		}

		inline max_integer gcd(max_integer a, max_integer b)
		{
			return base::base_gcd(a, b);
		}

		template <typename T>
		inline T gcd(std::vector<T> v)
		{
			if (v.size() < 2)
			{
				throw std::invalid_argument("The length of the argument must be at least 2.");
			}

			T result = gcd(v[0], v[1]);
			for (unsigned long long i = 2; i < v.size(); ++i)
			{
				result = gcd(result, v[i]);
			}

			return result;
		}
	}
}

#endif // ALGOCPP_MATH_GCD
