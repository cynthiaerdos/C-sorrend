#include <stdio.h>
#include "MyLIB.h"

#define MAXDB 20
#define MIN 10
#define MAX 90

int main(void){
int i, j, cs, k, index, mozgat;
int n = 10, a[] = { 11, 12, 23, 28, 35, 46, 47, 57, 87, 91 };
//int n = 10, a[] = { 87, 11, 23, 57, 91, 47, 12, 28, 35, 46 };

	// n = rndint(1, MAXDB);
	// rndintarr(MIN, MAX, a, n);

	printf("\nRendszertelen elemek: ");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	mozgat = 0;
	for(i=0; i<n-1; i++){
		index = i;
		for(j=i+1; j<n; j++){
			if(a[index]>a[j]){
				index = j;
			}
		}
		cs = a[i];
		a[i] = a[index];
		a[index] = cs;
		mozgat++;
		printf("\nRendezett elemek (%2d): ", mozgat);
		for(k=0; k<n; k++){
			printf("%d ", a[k]);
		}
	}

	printf("\nRendezett elemek: ");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return (0);
}

