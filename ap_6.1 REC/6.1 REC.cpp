#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Print(int* mas, const int n, int i);
int Sum(int* mas, const int n, int i);
int Numbers(int* mas, const int n, int i);
void Zamina_0(int* mas, const int n, int i);

void Create(int* a, const int n, int i)
{
	a[i] = rand() % 85 + 5;
	if (i < n - 1)
		Create(a, n, i + 1);
}

int main()
{
	srand((unsigned)time(NULL));
	const int a = 25;
	int A[a];
	cout << "A={"; Create(A, a, 0);
	Print(A, a, 0); cout << "}";
	cout << endl;

	cout << "Suma = " << Sum(A, a, 0) << endl;
	cout << "Numbers = " << Numbers(A, a, 0) << endl;
	cout << "Zamina_0 ={"; Zamina_0(A, a, 0); 
	Print(A, a, 0); cout << "}";
	return 0;
};

void Print(int* mas, const int n, int i)
{
	cout << setw(4) << mas[i];
	if (i < n - 1)
		Print(mas, n, i + 1);
	else
		cout << endl;
}

int Sum(int* mas, const int n, int i)
{
	if (i < n)
	{
		if (mas[i] % 2 == 0 || !(mas[i] % 8 == 0))
			return mas[i] + Sum(mas, n, i + 1);
		else
			return Sum(mas, n, i + 1);
	}
	else
		return 0;
}

int Numbers(int* mas, const int n, int i)
{
	if (i < n)
		Numbers(mas, n, i + 1);
	else
		return i;
}

void Zamina_0(int* mas, const int n, int i)
{
	mas[i] = 0;
	if (i < n - 1)
		Zamina_0(mas, n, i + 1);

}
