#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 5_5/Lab 5_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor55
{
	TEST_CLASS(UnitTestfor55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			int depth = 0;
			a = Function(1, 6, 1, depth);
			Assert::AreEqual(a, 2);
		}
	};
}
