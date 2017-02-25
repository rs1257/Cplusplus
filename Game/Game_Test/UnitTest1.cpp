#include "CppUnitTest.h"
#include "../Game/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Game_Test
{		
	TEST_CLASS(Game_Test)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1,1);
		}
	};
}