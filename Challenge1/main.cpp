#include <iostream>

void GetValues(int&, int&);
void OutputValues(int, int, int*, int*);

using std::cin;

int main()
{
	int a, b = 0;
	int* ptrA = &a;
	int* ptrB = &b;

	GetValues(a, b);
	OutputValues(a, b, ptrA, ptrB);
}

void GetValues(int& a, int& b)
{
	printf("Enter value for a:\n> ");
	cin >> a;
	printf("Enter value for b:\n> ");
	cin >> b;
	return;
}

void OutputValues(int a, int b, int* ptrA, int* ptrB)
{
	printf("\nA: %d\nB: %d\n", a, b);
	printf("ptrA: %d\nptrB: %d\n", *ptrA, *ptrB);
	return;
}
