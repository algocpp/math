
// algocpp/math/gcd.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_MATH_GCD
#define ALGOCPP_MATH_GCD

#if !defined(ALGOCPP_NO_LIB) && __has_include(<boost/multiprecision/cpp_int.hpp>)
#include <boost/multiprecision/cpp_int.hpp>
#endif

namespace algocpp
{
	namespace math
	{
		namespace base
		{
			template <typename T1, typename T2>
			inline constexpr T1 base_gcd(T1 a, T2 b) noexcept
			{
				return (b == 0 ? a : base_gcd(b, a % b));
			}
		}

		inline constexpr unsigned long long gcd(unsigned long long a, unsigned long long b) noexcept
		{
			return base::base_gcd(a, b);
		}

#ifdef BOOST_MP_CPP_INT_HPP
		inline boost::multiprecision::cpp_int gcd(boost::multiprecision::cpp_int a, boost::multiprecision::cpp_int b) noexcept
		{
			return base::base_gcd(a, b);
		}
#endif
	}
}

#endif // ALGOCPP_MATH_GCD
