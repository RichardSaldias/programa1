#include <stdio.h>
#include <stdlib.h>
#include <time.h> 	
#include "extern.h"

void programa1(){
	int j,posicion;
	for (j = 0; j< 20; j++){
		clock_t start = clock();
		int *array,i;
		array = (int *)malloc( 536870912*sizeof(int));

		for (i = 0; i < 536870912; i++){
			posicion = i;
			array[posicion] = rand() % 536870912;
		}
		free(array);
		printf("Tiempo total: %f\n", ((double)clock() - start) / CLOCKS_PER_SEC);
	}
}