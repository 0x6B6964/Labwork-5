#include "pch.h"
#include "CppUnitTest.h"
#include "../Labwork-5/Labwork5.cpp"
#
#include <math.h>
#define EPSILON 0.00001

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(Task1UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double R1 = 2;
			double R2 = 0;

			Assert::IsTrue(fabs(Labwork5::ringS(R1, R2) - 12.56637) < EPSILON);
		}

		TEST_METHOD(TestMethod2)
		{
			double R1 = 6;
			double R2 = 3;

			Assert::IsTrue(fabs(Labwork5::ringS(R1, R2) - 84.823) < EPSILON);
		}

		TEST_METHOD(TestMethod3)
		{
			double R1 = 7;
			double R2 = 2;

			Assert::IsTrue(fabs(Labwork5::ringS(R1, R2) - 141.37166) < EPSILON);
		}

		TEST_METHOD(TestMethod4)
		{
			double R1 = 21;
			double R2 = 7;

			Assert::IsTrue(fabs(Labwork5::ringS(R1, R2) - 1231.50432) < EPSILON);
		}

		TEST_METHOD(TestMethod5)
		{
			double R1 = 0;
			double R2 = 0;

			Assert::IsTrue(fabs(Labwork5::ringS(R1, R2) - 0.0) < EPSILON);
		}
	};

	TEST_CLASS(Task2UnitTests) {
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 1;
			int K = 1;

			Assert::IsTrue(Labwork5::isPowerN(K, N));
		}

		TEST_METHOD(TestMethod2) 
		{
			int N = 0;
			int K = 1;

			Assert::IsTrue(Labwork5::isPowerN(K, N));
		}

		TEST_METHOD(TestMethod3)
		{
			int N = 3;
			int K = 9;

			Assert::IsTrue(Labwork5::isPowerN(K, N));
		}

		TEST_METHOD(TestMethod4)
		{
			int N = 2;
			int K = 7;

			Assert::IsFalse(Labwork5::isPowerN(K, N));
		}

		TEST_METHOD(TestMethod5)
		{
			int N = 7;
			int K = 2;

			Assert::IsFalse(Labwork5::isPowerN(K, N));
		}
	};

	TEST_CLASS(Task3UnitTests) {
	public:

		TEST_METHOD(TestMethod1)
		{
			int K = 0;

			Labwork5::invDigits(K);

			Assert::AreEqual(K, 0);
		}

		TEST_METHOD(TestMethod2)
		{
			int K = -25;

			Labwork5::invDigits(K);

			Assert::AreEqual(K, -52);
		}

		TEST_METHOD(TestMethod3)
		{
			int K = 31;

			Labwork5::invDigits(K);

			Assert::AreEqual(K, 13);
		}

		TEST_METHOD(TestMethod4)
		{
			int K = 854123;

			Labwork5::invDigits(K);

			Assert::AreEqual(K, 321458);
		}

		TEST_METHOD(TestMethod5)
		{
			int K = -845;

			Labwork5::invDigits(K);

			Assert::AreEqual(K, -548);
		}
	};

	TEST_CLASS(Task4UnitTests) {
	public:

		TEST_METHOD(TestMethod1) 
		{
			double A = 3;
			double B = 2;
			double C = 1;
			
			Labwork5::sortInc3(A, B, C);

			Assert::IsTrue(A >= B && B >= C);
		}

		TEST_METHOD(TestMethod2)
		{
			double A = 2;
			double B = 3;
			double C = 1;

			Labwork5::sortInc3(A, B, C);

			Assert::IsTrue(A >= B && B >= C);
		}

		TEST_METHOD(TestMethod3)
		{
			double A = 0;
			double B = 0;
			double C = 0;

			Labwork5::sortInc3(A, B, C);

			Assert::IsTrue(A >= B && B >= C);
		}

		TEST_METHOD(TestMethod4)
		{
			double A = 4;
			double B = 7;
			double C = 8;

			Labwork5::sortInc3(A, B, C);

			Assert::IsTrue(A >= B && B >= C);
		}

		TEST_METHOD(TestMethod5)
		{
			double A = 2;
			double B = 6;
			double C = 9;

			Labwork5::sortInc3(A, B, C);

			Assert::IsTrue(A >= B && B >= C);
		}
	};
}
