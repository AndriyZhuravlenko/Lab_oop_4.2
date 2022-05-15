#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_4.2\Lab_oop_4.2\Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP42
{
	TEST_CLASS(UTOOP42)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rectangle B(4, 5);
			Assert::AreEqual(B.Square(), 20.0);
		}
	};
}