#include "pch.h"
#include "CppUnitTest.h"
#include "..\5.5 test\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp = C(0., 0);
			Assert::AreEqual(1., tmp);
		}
	};
}
