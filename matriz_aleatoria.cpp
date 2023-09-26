#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,i,j,suma;
	srand(time(NULL));
	printf("ingrese la longitud de la matriz:\n");
	scanf("%d",&n);
	int A[n][n];
	
	printf ("matriz Aleatoria;\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if(i==j)
			A[i][j]=1;
		else
			A[i][j]=0;
			printf("%d",A[i][j]);
		suma +=A[i][j];
			}
		printf("\n");
	}
		printf("la suma de la diagonal principal es: %d",suma);
	return 0;
}
