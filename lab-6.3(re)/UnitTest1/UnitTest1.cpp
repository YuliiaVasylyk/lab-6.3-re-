#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.3(re)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3 };
			int max = Max(a, 3, a[0], 0);
			Assert::AreEqual(2, max);

		}
	};
}
