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
	int ilosc;
	cout << "Podaj ilość liczb, których średnią chcesz policzyć: ";
	cin  >> ilosc;
	cout << "Podaj te liczby: " << endl;
	double *wartosci = new double [ilosc];
	for (int obrotnik = 0; obrotnik <= ilosc-1; obrotnik++)
		cin  >> wartosci[obrotnik];
	
	cout << "Suma podanych liczb to: " << suma (ilosc, wartosci[ilosc]) << endl;
	
	delete []wartosci;
	return 0;
}
