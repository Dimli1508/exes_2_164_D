#include <iostream>
using namespace std;

 //Jumlah maksimal array didapatkan dari 10+3+20+(-4x5)+10+5+2+3 = 33
int n;

void input()
{
	while (true)
	{
		cout << "\nMasukkan jumlah element dalam array : ";
		cin >> n;
		if ((n > 0) && (n <= 33))
			break;
		else
			cout << "\nArray harus memiliki setidaknya 1 dan paling banyak 33 element";
	}
}

void binarySearch()
{
	int Dimli[33];
	int Dimas = 0;
	int islamy = n - 1;
	int mid = islamy + Dimas / 2;

	while (true)
		if (Dimli[mid] = n)
		{

			cout << "Found" << endl;
			break;
		}
	if (n < Dimli[mid])
	{
		Dimas = mid - 1;
	}
	if (n > Dimli[mid])
	{
		islamy = mid + 1;
	}
	if (islamy <= Dimas)
	{
		mid = Dimas + islamy/ 2;
		cout << "Not Found" << endl;
	}
}

int main()
{
	input();
	binarySearch();
	return 0;
}

