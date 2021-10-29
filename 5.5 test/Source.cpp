#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int C(int k, int n)
{
	if (n > 0)
	{
		return C(k - 1, n - 1) + C(k, n - 1);
	}
	else
		if (k == n || k == 0)
		{
			return 1;
		}
		else
			return 0;
	
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color A");

	int k, n;

	cout << "n="; cin >> n;
	cout << "k="; cin >> k;
	cout << "------";cout<<endl;
	cout << "Глибина рекурсії=" << n << "." << endl;
	cout << "C=" << C(k, n) << endl;

}