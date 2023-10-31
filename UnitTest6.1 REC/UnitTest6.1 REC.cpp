#include "pch.h"
#include "CppUnitTest.h"
#include "..\ap_6.1 REC\6.1 REC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61REC
{
	TEST_CLASS(UnitTest61REC)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[] = { 1,3,-5,4,-6 };
			int S = Sum(t, 4, 4);
			Assert::AreEqual(10, 10);
		}
	};
}
