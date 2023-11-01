#include "pch.h"
#include "CppUnitTest.h"
#include "../пр6.3іт/пр6.3іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63іт
{
	TEST_CLASS(UnitTest63іт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int m = 8;
			int n[m] = { 1,2,3,4,5,6,7,8 };
			int a = Max(n, m);
			Assert::AreEqual(8, a);
		}
	};
}
