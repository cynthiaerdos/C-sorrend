#include <stdio.h>
#include "MyLIB.h"

#define MAXDARAB 20
#define MINVALUE 30
#define MAXVALUE 80


int main(void) {
int n, a[MAXDARAB];
int m, e[MAXDARAB];
int o, f[MAXDARAB];
int t;
int i;

	n = rndint(1, MAXDARAB);
	rndintarrunq(MINVALUE, MAXVALUE, a, n);
	t = rndint(MINVALUE, MAXVALUE);

	printf("\nHatarertek: %d", t);
	printf("\nDarabszam: %d", n);
	printf("\nTomb elemei: ");
	for(i = 0; i < n; i++) {
		printf("%s%d",((i) ? (", "):("")), a[i]);
	}

	m = o = 0;
	for(i = 0; i < n; i++) {
		if(a[i]>t) {
			e[m++] = a[i];
		} else {
			f[o++] = a[i];
		}
	}

	printf("\nNagyobb elemek: ");
	for(i = 0; i < m; i++) {
		printf("%s%d",((i) ? (", "):("")), e[i]);
	}
	printf("\nNem nagyobb elemek: ");
	for(i = 0; i < o; i++) {
		printf("%s%d",((i) ? (", "):("")), f[i]);
	}
	return 0;
}