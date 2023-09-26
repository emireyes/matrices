#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,i,j,suma;
	srand(time(NULL));
	printf("ingrese la longitud de la matriz:\n");
	scanf("%d",&n);
	int A[n][n];
	printf ("matriz A;\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]=rand()%(9+1-1)+1;
			printf("%d",A[i][j]);
			if (i==j)	
			suma +=A[i][j];
			}
		printf("\n");
	}
	printf("la suma de la diagonal principal es: %d",suma);
	return 0;
}
