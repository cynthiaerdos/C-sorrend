#include <stdio.h>
#include "MyLIB.h"

#define MAXDARAB 20
#define MINVALUE 30
#define MAXVALUE 80


int main(void) {
int n, a[MAXDARAB];
int m, b[MAXDARAB];
int o, c[MAXDARAB];
int i;

	n = rndint(1, MAXDARAB);
	rndintarrunq(MINVALUE, MAXVALUE, a, n);

	printf("\nDarabszam: %d", n);
	printf("\nTomb elemei: ");
	for(i = 0; i < n; i++) {
		printf("%s%d",((i) ? (", "):("")), a[i]);
	}

	m = rndint(1, MAXDARAB);
	rndintarrunq(MINVALUE, MAXVALUE, b, m);

	printf("\nDarabszam: %d", m);
	printf("\nTomb elemei: ");
	for(i = 0; i < m; i++) {
		printf("%s%d",((i) ? (", "):("")), b[i]);
	}

	

	printf("\nEredmenytomb elemeinek szama: %d", o);
	printf("\nEredmenytomb elemei: ");
	for(i = 0; i < o; i++) {
		printf("%s%d",((i) ? (", "):("")), c[i]);
	}
	return 0;
}