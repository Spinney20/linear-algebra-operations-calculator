//Dobre Andrei-Teodor 314CA
#include <stdio.h>
#include <math.h>
#define ull unsigned long long
#define ll long long
#define db double

void afisare(int oka, int okb, ll ps, ull a_max, ull b_max, db n_a, db n_b)
{
	printf("%lld\n", ps);

	//Afisam al doilea maxim in functie de variabilele oka si okb
	//adica, in functie de existenta celui de-al doilea maxim
	if (oka == 1 && okb == 1)
		printf("%lld %lld\n", a_max, b_max);
	else if (oka == 1 && okb == 0)
		printf("%lld -1\n", a_max);
	else if (oka == 0 && okb == 1)
		printf("-1 %lld\n", b_max);
	else
		printf("-1 -1\n");

	printf("%.7f %.7f\n", sqrt(n_a), sqrt(n_b));
}
