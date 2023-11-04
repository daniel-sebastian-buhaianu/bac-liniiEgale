#include <iostream>
#define MMAX 50
#define NMAX 50
using namespace std;
int main()
{
	int a[MMAX][NMAX], m, n, i, j, x;
	bool ok, exista;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	cout << "Introdu " << m*n << " numere cu cel mult 4 cifre fiecare:\n";
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	for (exista = i = 0; i < m; i++)
	{
		x = a[i][0];
		for (ok = j = 1; j < n; j++)
			if (a[i][j] != x)
				ok = 0;
		if (ok)
		{
			exista = 1;
			cout << i+1 << ' ' << x << '\n';
		}
	}
	if (!exista)
		cout << "nu exista";
	return 0;
}
