
// algocpp/math/fact.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_MATH_FACT
#define ALGOCPP_MATH_FACT

#include <algocpp/exception/numeric.hpp>

#if __has_include(<boost/multiprecision/cpp_int.hpp>)
#include <boost/multiprecision/cpp_int.hpp>
#endif

namespace algocpp
{
	namespace math
	{

#ifndef BOOST_MP_CPP_INT_HPP
		inline unsigned long long fact(long long x)
		{
			if (x < 0)
			{
				throw algocpp::exception::numeric_error("The factorial of negative numbers is undefined.");
			}

			unsigned long long result = 1;
			for (unsigned long long i = 1; i <= x; i++)
			{
				result *= i;
			}
			return result;
		}
#else
		inline boost::multiprecision::cpp_int fact(boost::multiprecision::cpp_int x)
		{
			if (x < 0)
			{
				throw algocpp::exception::numeric_error("The factorial of negative numbers is undefined.");
			}

			boost::multiprecision::cpp_int result = 1;
			for (boost::multiprecision::cpp_int i = 1; i <= x; i++)
			{
				result *= i;
			}
			return result;
		}
#endif

	}
}

#endif // ALGOCPP_MATH_FACT
