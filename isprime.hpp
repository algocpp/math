
// algocpp/math/isprime.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

// https://qiita.com/asksaito/items/76b71602dd956b79dbf7

#ifndef ALGOCPP_MATH_ISPRIME
#define ALGOCPP_MATH_ISPRIME

#include <math.h>

// #if __has_include(<boost/multiprecision/cpp_int.hpp>)
// #include <boost/multiprecision/cpp_int.hpp>
// #endif

namespace algocpp
{
	namespace math
	{
		inline bool isprime(long long x)
		{
			if (x < 2)
				return false;
			else if (x == 2)
				return true;
			else if (x % 2 == 0)
				return false;
			long double sqrtNum = sqrt(x);
			for (unsigned long long i = 3; i <= sqrtNum; i += 2)
			{
				if (x % i == 0)
				{
					return false;
				}
			}

			return true;
		}

		// FIXME: 正常に計算できない
		// #ifdef BOOST_MP_CPP_INT_HPP

		// 		inline bool isprime(boost::multiprecision::cpp_int x)
		// 		{
		// 			if (x < 2)
		// 				return false;
		// 			else if (x == 2)
		// 				return true;
		// 			else if (x % 2 == 0)
		// 				return false;
		// 			for (boost::multiprecision::cpp_int i = 3; i <= boost::multiprecision::sqrt(x); i += 2)
		// 			{
		// 				if (x % i == 0)
		// 				{
		// 					return false;
		// 				}
		// 			}

		// 			return true;
		// 		}

		// #endif

	}
}

#endif // ALGOCPP_MATH_ISPRIME
