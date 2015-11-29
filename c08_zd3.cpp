#include <iostream>
#include <cstdarg>
using namespace std;

double suma (unsigned int n, ...)
{	
	va_list ap;
	va_start(ap, n);
	double razem = 0;
	for (int obrotnik = 0; obrotnik <= n-1; obrotnik++)
	{
		double argumenty = va_arg(ap, double);
		razem += argumenty;
	}
	va_end(ap);	
	return razem;
};

int main ()
{	
	int ilosc = 3;
	double a = 2.4, b = 3.45, c = 9.8;
	
	cout << "Suma liczb " << a << ", " << b << ", "  << c << " to: ";
	cout << suma (ilosc, a, b, c) << endl;
	
	return 0;
}
