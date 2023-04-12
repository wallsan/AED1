#include <stdio.h>  

int main() {  

    int array[10] = {0};

	for (int i = 0; i < 10; i++){
		int numero;
		scanf("%d", &numero);
		array[i] = numero;
	}

	for (int i = 0; i < 10; i++){

		if(array[i] <= 0)
			array[i] = 1;

		printf("X[%d] = %d\n", i, array[i]);
	}

    return 0;
}
