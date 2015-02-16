#include <stdlib.h>
#include <time.h>
#include "MyLIB.h"

float veletlen(float ah, float fh) {
static int f = 0;
float vel;

	if (f == 0) {
		srand((int) time(NULL));
		rand();
		f = 1;
	}

	vel = (float) rand() / (float) RAND_MAX;
	vel = ah + vel * (fh - ah);
	return (vel);
}

float rndfloat(float ah, float fh) {
static int f = 0;
float v;
time_t t;
	
	if (f == 0) {
		t = time(&t);
		srand((int) t);
		rand();
		f = 1;
	}

	v = (float) rand() / (float) RAND_MAX;
	v = ah + v * (fh - ah);
	return v;
}

void rndfloatarrunq(float ah, float fh, float v[], int n) {
int i, j, f;
float vsz;
	
	i = 0;
	do {
		vsz = rndfloat(ah, fh);
		f = 0;
		for (j=0;j<i;j++) {
			if (v[j]==vsz) {
				f = 1;
			}
		}
		if (f==0) {
			v[i++] = vsz;
		}
	} while (i < n);
	return;
}

void baddata(void) {
	printf("Hibas adat, adja meg ujra!");
	return;
}

float getfloat(char s[], float ah, float fh) {
float value;

	do {
		printf("%s [%.2f-%.2f]: ", s, ah, fh);
		scanf("%f", &value);
		if (value<ah || fh<value) { baddata(); }
	} while (value<ah || fh<value);
	return (value);
}

int getint(char s[], int ah, int fh) {
int value;

	do {
		printf("%s [%d-%d]: ", s, ah, fh);
		scanf("%d", &value);
		if (value<ah || fh<value) { baddata(); }
	} while (value<ah || fh<value);
	return (value);
}
