#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR5.1A\PR5.1A\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number n(3, 5);
			n.multiply();
			Assert::IsTrue(15);
		}
	};
}
