
// algocpp/math/isprime.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

// https://qiita.com/asksaito/items/76b71602dd956b79dbf7


#ifndef ALGOCPP_MATH_ISPRIME
#define ALGOCPP_MATH_ISPRIME

#include <math.h>
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
	}
}

#endif // ALGOCPP_MATH_ISPRIME
