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
			int max = 10;
			int tmp = Max(a, 3, max, 0);
			Assert::AreEqual(10, tmp);

		}
	};
}
