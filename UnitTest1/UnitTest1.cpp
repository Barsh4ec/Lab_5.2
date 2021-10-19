#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = -3;
			double a = A(2, 3, 5);
			actual = a;
			Assert::AreEqual(actual, expected);
		}
	};
}
