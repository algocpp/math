
// algocpp/math/fact.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_MATH_FACT
#define ALGOCPP_MATH_FACT

#include <assert.h>

namespace algocpp
{
	namespace math
	{
		inline int fact(int x)
		{
			assert(x >= 0);
			int result = 1;
			for (int i = 1; i <= x; i++)
			{
				result *= i;
			}
			return result;
		}

		inline long long fact(long long x)
		{
			assert(x >= 0);
			long long result = 1;
			for (int i = 1; i <= x; i++)
			{
				result *= i;
			}
			return result;
		}

		inline unsigned long long fact(unsigned long long x)
		{
			assert(x >= 0);
			unsigned long long result = 1;
			for (int i = 1; i <= x; i++)
			{
				result *= i;
			}
			return result;
		}
	}
}

#endif // ALGOCPP_MATH_FACT
