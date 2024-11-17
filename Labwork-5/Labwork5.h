#pragma once
class Labwork5
{
public:
	static int RunTasks();
	static int RunTask(int taskNumber);

#pragma region Task Selection

private:
	static int TaskSelection();
	static int TaskSelection(int taskNumber);
	static int TaskSelectionInputHandling(int& taskNumber);
	static int TaskSelectionInputTaskNumber(int& taskNumber);

#pragma endregion

#pragma region Task 1

private:
	static int Task1main();
	static int Task1InputHandling(double*& R1Array, double*& R2Array, int& length);
	static int Task1InputLength(int& length);
	static int Task1InputR1(double& R1);
	static int Task1InputR2(double& R2);
	static int Task1Parse(double* R1Array, double* R2Array, double* resulArray, int length);
	static int Task1CleanMemory(double*& R1Array, double*& R2Array, double*& resultArray);
public:
	static double* Task1(double* R1Array, double* R2Array, int length);
	static double ringS(double R1, double R2);

#pragma endregion

#pragma region Task 2

private:
	static int Task2main();
	static int Task2InputHandling(int& N, int*& KArray, int& length);
	static int Task2InputLength(int& length);
	static int Task2InputN(int& N);
	static int Task2InputK(int& K);
	static int Task2Parse(int N, int* KArray, bool* resultArray, int length);
	static int Task2CleanMemory(int*& KArray, bool*& resulArray);
public:
	static bool* Task2(int N, int* KArray, int length);
	static bool isPowerN(int N, int K);

#pragma endregion

#pragma region Task 3

private:
	static int Task3main();
	static int Task3InputHandling(int*& KArray, int& length);
	static int Task3InputLength(int& length);
	static int Task3InputK(int& K);
	static int Task3Parse(int* KArray, int* resultArray, int length);
	static int Task3CleanMemory(int*& KArray, int*& resultArray);
public:
	static int* Task3(int* KArray, int length);
	static void invDigits(int& K);

#pragma endregion
	
#pragma region Task 4

private:
	static int Task4main();
	static int Task4InputHandling(double**& jaggedABCArray, int& length);
	static int Task4InputLength(int& length);
	static int Task4InputTriple(double*& jaggedABC);
	static int Task4InputA(double& A);
	static int Task4InputB(double& B);
	static int Task4InputC(double& C);
	static int Task4Parse(double** jaggedABCArray, double** resultJaggedArray, int length);
	static int Task4CleanMemory(double**& jaggedABCArray, double**& resultJaggedArray, int& length);
public:
	static double** Task4(double** jaggedABCArray, int length);
	static void sortInc3(double& A, double& B, double& C);

#pragma endregion

#pragma region Task 5

private:
	static int Task5main();

#pragma endregion

};

