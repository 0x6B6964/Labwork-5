#include "Labwork5.h"
#include <iostream>
#define NO_EXCEPTION 0x0000;
#define INVALID_INPUT_EXCEPTION -0x0001;
#
#define PI 3.141592653589793

using namespace std;

int Labwork5::RunTasks()
{
	TaskSelection();

	return NO_EXCEPTION;
}

int Labwork5::RunTask(int taskNumber)
{
	TaskSelection(taskNumber);

	return NO_EXCEPTION;
}

#pragma region Task Selection

int Labwork5::TaskSelection()
{
	int taskNumber;

	TaskSelectionInputHandling(taskNumber);

	TaskSelection(taskNumber);

	return NO_EXCEPTION;
}

int Labwork5::TaskSelection(int taskNumber)
{
	switch (taskNumber) {
		case 1:
			Task1main();
			break;
		case 2:
			Task2main();
			break;
		case 3:
			Task3main();
			break;
		case 4:
			Task4main();
			break;
		case 5:
			Task5main();
			break;
	}

	return NO_EXCEPTION;
}

int Labwork5::TaskSelectionInputHandling(int& taskNumber)
{
	while (TaskSelectionInputTaskNumber(taskNumber))
		cout << "Invalid input\n";

	return 0;
}

int Labwork5::TaskSelectionInputTaskNumber(int& taskNumber)
{
	cout << "Choose task number (1 - 5): ";
	cin >> taskNumber;

	if (taskNumber < 1 || taskNumber > 5)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

#pragma endregion

#pragma region Task 1

int Labwork5::Task1main()
{
	double* R1Array;
	double* R2Array;
	int length;

	Task1InputHandling(R1Array, R2Array, length);

	double* resultArray = Task1(R1Array, R2Array, length);

	Task1Parse(R1Array, R2Array, resultArray, length);

	Task1CleanMemory(R1Array, R2Array, resultArray);

	return NO_EXCEPTION;
}

int Labwork5::Task1InputHandling(double*& R1Array, double*& R2Array, int& length)
{
	while (Task1InputLength(length))
		cout << "Invalid input\n";

	R1Array = new double[length];
	R2Array = new double[length];

	for (int i = 0; i < length; i++) {
		while (Task1InputR1(R1Array[i]))
			cout << "Invalid input\n";

		R2Array[i] = R1Array[i];

		while (Task1InputR2(R2Array[i]))
			cout << "Invalid input\n";
	}

	return NO_EXCEPTION;
}

int Labwork5::Task1InputLength(int& length)
{
	cout << "Input amount of ring pairs (> 0): ";
	cin >> length;

	if (length < 1)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task1InputR1(double& R1)
{
	cout << "Input radius of outer ring (>= 0): ";
	cin >> R1;

	if (R1 < 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task1InputR2(double& R2)
{
	double value;

	cout << "Input radius of inner ring (<= outer ring radius): ";
	cin >> value;

	if (value > R2)
		return INVALID_INPUT_EXCEPTION;

	R2 = value;

	return NO_EXCEPTION;
}

int Labwork5::Task1Parse(double* R1Array, double* R2Array, double* resulArray, int length)
{
	return 0;
}

int Labwork5::Task1CleanMemory(double*& R1Array, double*& R2Array, double*& resultArray)
{
	delete[] R1Array;
	delete[] R2Array;
	delete[] resultArray;

	return NO_EXCEPTION;
}

double* Labwork5::Task1(double* R1Array, double* R2Array, int length)
{
	double* resultArray = new double[length];

	for (int i = 0; i < length; i++) {
		resultArray[i] = ringS(R1Array[i], R2Array[i]);
	}

	return resultArray;
}

double Labwork5::ringS(double R1, double R2)
{
	return (R1 * R1 - R2 * R2) * PI;
}

#pragma endregion

#pragma region Task 2

int Labwork5::Task2main()
{
	int N;
	int* KArray;
	int length;

	Task2InputHandling(N, KArray, length);

	bool* resultArray = Task2(N, KArray, length);

	Task2Parse(N, KArray, resultArray, length);

	Task2CleanMemory(KArray, resultArray);

	return NO_EXCEPTION;
}

int Labwork5::Task2InputHandling(int& N, int*& KArray, int& length)
{
	while (Task2InputN(N))
		cout << "Invalid input\n";

	while (Task2InputLength(length))
		cout << "Invalid input\n";

	KArray = new int[length];

	for (int i = 0; i < length; i++) {
		while (Task2InputK(KArray[i]))
			cout << "Invalid input\n";
	}

	return NO_EXCEPTION;
}

int Labwork5::Task2InputLength(int& length)
{
	cout << "Input number of potential powers (> 0): ";
	cin >> length;

	if (length < 1)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task2InputN(int& N)
{
	cout << "Input base number (> 1): ";
	cin >> N;

	if (N <= 1)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task2InputK(int& K)
{
	cout << "Input potential power (> 0): ";
	cin >> K;

	if (K <= 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task2Parse(int N, int* KArray, bool* resultArray, int length)
{
	return 0;
}

int Labwork5::Task2CleanMemory(int*& KArray, bool*& resulArray)
{
	delete[] KArray;
	delete[] resulArray;

	return NO_EXCEPTION;
}

bool* Labwork5::Task2(int N, int* KArray, int length)
{
	bool* resultArray = new bool[length];

	for (int i = 0; i < length; i++)
	{
		resultArray[i] = isPowerN(N, KArray[i]);
	}

	return resultArray;
}

bool Labwork5::isPowerN(int N, int K)
{
	int power = 1;

	while (power < K)
		power *= N;

	return power == K;
}

#pragma endregion

#pragma region Task 3

int Labwork5::Task3main()
{
	int* KArray;
	int length;

	Task3InputHandling(KArray, length);

	int* resultArray = Task3(KArray, length);

	Task3Parse(KArray, resultArray, length);

	Task3CleanMemory(KArray, resultArray);

	return NO_EXCEPTION;
}

int Labwork5::Task3InputHandling(int*& KArray, int& length)
{
	while (Task3InputLength(length))
		cout << "Invalid input\n";

	KArray = new int[length];

	for (int i = 0; i < length; i++) {
		while (Task3InputK(KArray[i]))
			cout << "Invalid input\n";
	}

	return NO_EXCEPTION;
}

int Labwork5::Task3InputLength(int& length)
{
	cout << "Input amount of number to invert (> 0): ";
	cin >> length;

	if (length < 1)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task3InputK(int& K)
{
	cout << "Input number to invert (> 0): ";
	cin >> K;

	if (K <= 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task3Parse(int* KArray, int* resultArray, int length)
{
	return 0;
}

int Labwork5::Task3CleanMemory(int*& KArray, int*& resultArray)
{
	delete[] KArray;
	delete[] resultArray;

	return NO_EXCEPTION;
}

int* Labwork5::Task3(int* KArray, int length)
{
	int* resultArray = new int[length];

	for (int i = 0; i < length; i++) {
		int K = KArray[i];
		invDigits(K);
		resultArray[i] = K;
	}

	return resultArray;
}

void Labwork5::invDigits(int& K)
{
	int sign = 1;

	if (K < 0) {
		K *= -1;
		sign = -1;
	}

	int inverse = 0;

	while (K > 0) {
		inverse *= 10;
		inverse += K % 10;
		K /= 10;
	}

	K = inverse * sign;

	return;
}

#pragma endregion

#pragma region Task 4

int Labwork5::Task4main()
{
	double** jaggedABCArray;
	int length;

	Task4InputHandling(jaggedABCArray, length);

	double** resultJaggedArray = Task4(jaggedABCArray, length);

	Task4Parse(jaggedABCArray, resultJaggedArray, length);

	Task4CleanMemory(jaggedABCArray, resultJaggedArray, length);

	return NO_EXCEPTION;
}

int Labwork5::Task4InputHandling(double**& jaggedABCArray, int& length)
{
	while (Task4InputLength(length))
		cout << "Invalid input\n";

	jaggedABCArray = new double* [length];

	for (int i = 0; i < length; i++) {
		jaggedABCArray[i] = new double[3];
		Task4InputTriple(jaggedABCArray[i]);
		cout << endl;
	}

	return NO_EXCEPTION;
}

int Labwork5::Task4InputLength(int& length)
{
	cout << "Input amount of triples to sort (> 0): ";
	cin >> length;

	if (length < 1)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork5::Task4InputTriple(double*& jaggedABC)
{
	while (Task4InputA(jaggedABC[0]))
		cout << "Invalid input\n";
	
	while (Task4InputB(jaggedABC[1]))
		cout << "Invalid input\n";

	while (Task4InputC(jaggedABC[2]))
		cout << "Invalid input\n";

	return NO_EXCEPTION;
}

int Labwork5::Task4InputA(double& A)
{
	cout << "Input first number of triple: ";
	cin >> A;

	return NO_EXCEPTION;
}

int Labwork5::Task4InputB(double& B)
{
	cout << "Input second number of a triple: ";
	cin >> B;

	return NO_EXCEPTION;
}

int Labwork5::Task4InputC(double& C)
{
	cout << "Input third number of a triple: ";
	cin >> C;

	return NO_EXCEPTION;
}

int Labwork5::Task4Parse(double** jaggedABCArray, double** resultJaggedArray, int length)
{
	return 0;
}

int Labwork5::Task4CleanMemory(double**& jaggedABCArray, double**& resultJaggedArray, int& length)
{
	for (int i = 0; i < length; i++) {
		delete[] jaggedABCArray[i];
		delete[] resultJaggedArray[i];
	}

	delete[] jaggedABCArray;
	delete[] resultJaggedArray;

	return NO_EXCEPTION;
}

double** Labwork5::Task4(double** jaggedABCArray, int length)
{
	double** resultJaggedArray = new double* [length];

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < 3; j++)
			resultJaggedArray[i][j] == jaggedABCArray[i][j];

		sortInc3(resultJaggedArray[i][0], resultJaggedArray[i][1], resultJaggedArray[i][2]);
	}

	return resultJaggedArray;
}

void Labwork5::sortInc3(double& A, double& B, double& C)
{
	if (A < B)
		swap(A, B);
	if (B < C)
		swap(B, C);
	if (A < B)
		swap(A, B);

	return;
}

#pragma endregion

#pragma region Task 5

int Labwork5::Task5main()
{
	return 0;
}

#pragma endregion
