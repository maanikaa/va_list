#include <iostream>
#include <cstdarg>
using namespace std;

double suma (unsigned int n...)
{	
	va_list ap;
	va_start(ap, unsigned int);
	double argumenty = va_arg(ap, double);
	
	
	va_end(ap);	
	return ;
};

int main ()
{	
	int ilosc, tablica;
	cout << "Podaj ilość liczb, których średnią chcesz policzyć: ";
	cin  >> ilosc;
	cout << "Podaj te liczby: " << endl;
	int wartosci = new int [ilosc];
	for (int obrotnik = 0; obrotnik <= n-1; obrotnik++)
		cin  >> wartosci[onrotnik];
	
	cout << "Suma podanych liczb to: " << suma (ilosc, ???)	
	
	delete []wartosci;
	return 0;
}
