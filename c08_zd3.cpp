#include <iostream>
#include <cstdarg>
using namespace std;

double suma (unsigned int n...)
{	
	va_list ap;
	va_start(ap, unsigned int);
	
	va_end(ap);	
	return ;
};

int main ()
{	
	int ilosc, tablica;
	cout << "Podaj ilość liczb, których średnią chcesz policzyć: ";
	cin  >> ilosc;
	cout << "Podaj te liczby: " << endl;
	for (int obrotnik = 0; obrotnik <= n-1; obrotnik++)
		cin  >> ;
	
	cout << "Suma podanych liczb to: " << suma (ilosc, ???)	
		
	return 0;
}
