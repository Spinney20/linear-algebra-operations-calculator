//Dobre Andrei-Teodor 314CA
#include <stdio.h>
#include <math.h>
#include "functii_infiniteproduct.h"
#define ull unsigned long long
#define ll long long
#define db double

int main(void)
{
	ll n, ps = 0;
	ull a, b, a_max = 0, b_max = 0, maxa, maxb;
	db n_a = 0, n_b = 0;
	scanf("%lld", &n);
	int oka = 0;
	int okb = 0;

	if (n != 0) {
		scanf("%llo%llo", &a, &b);

		//ne creem copii pentru primele coordonate ale vectorilor a si b
		//aceste copii ne vor ajuta sa determinam daca exista al 2lea max
		ull ca = a;
		ull cb = b;

		//automat, dupa prima citire, valoarea maxima din fiecare vector
		//este prima valoare citita
		maxa = a;
		maxb = b;

		ps += a * b;
		n_a += a * a;
		n_b += b * b;

		while (n - 1) {
			scanf("%llo %llo", &a, &b);

			//daca exista o coordonata in vector diferita de prima coordonata
			//inseamna ca exista al 2-lea maxim
			if (a != ca)
				oka = 1;

			if (b != cb)
				okb = 1;
			//calculam produsul scalar dupa formula
			ps += a * b;

			//determinarea celui de-al doilea maxim
			//pt a
			if (a > maxa) {
				a_max = maxa;
				maxa = a;
			} else if (a < maxa && a > a_max) {
				a_max = a;
			}
			//pt b
			if (b > maxb) {
				b_max = maxb;
				maxb = b;
			} else if (b < maxb && b > b_max) {
				b_max = b;
			}

			//calculam valoarea de sub radical pentru norme
			n_a += a * a;
			n_b += b * b;

			n--;
		}
	}

	afisare(oka, okb, ps, a_max, b_max, n_a, n_b);

	return 0;
}
