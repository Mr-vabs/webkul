#include <stdio.h>

void numinput() {
    int n;
	printf("Number of lines 'only odd number' :: ");
	scanf("%d",&n);
	if (n%2!=0 && n>2)
		diode(n);
	else {
		printf("\n:: Only odd numbers and not 1 ::\n");
		numinput();
	}
}


void diode(int n) {
	printf("\n");
	int i, j;
	for(i = 1; i < n+3; i++) {
		for(j=1; j<5*(n+2)/2; j++) {
			if (i<=n/2+2 && j<=i || i>1 && i<n+2 && j>=3*(n/2+2) || i>n/2+2 && j<=2*(n/2+2)-i)
				printf("@");
			else if (i==n/2+2 && j>i && j<i*3)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	numinput();
}

int main() {
    printf("\nIt's a symbol like a diode.\n");
    numinput();
    return 0;
}
