#include <stdio.h>

void kijelzes(char t[], int a[], int n) {
int i;

	printf("\n%s[] (%d) elemei: ", t, n);
	for (i=0; i<n; i++) { printf("%d ", a[i]); }
	return;
	
}

int main(void) {
int i, j;
int n = 6, a[] = { 10, 11, 12, 13, 14, 15 };
int m = 6, b[] = { 10, 10, 11, 11, 12, 12 };
int o, e[36];

	o = 0;
	for (i=0; i<n; i++) {
		for (j=0; j<m && a[i]!=b[j]; j++) { ; }
		if (j<m) {
			e[o++] = a[i];
		}
	}

	kijelzes("A", a, n);
	kijelzes("B", b, m);
	kijelzes("E", e, o);
	return (0);
}
