//
// C++ implementation of bubble sort
//
//
// https://allalgorithms.com/sorting
// https://github.com/allalgorithms/cpp
//
// Contributed by: Carlos Abraham Hernandez
// Github: @abranhe
//
#include <stdio.h>

// Swap elements
void intercambiar(int *x, int *y)
{
	int aux = *x;
	*x = *y;
	*y = aux;
}

// Implementando bubble sort
void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n - 1; i++)
   {
	   	// los ultimos elementos i quedarán ordenados
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				intercambiar(&arr[j], &arr[j + 1]);
			}
		}
   }
}

// Imprmir el arreglo
void imprimirArreglo(int arr[], int n)
{
   for (size_t i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
	int arr[] = {46, 24, 33, 10, 2, 81, 50};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Arreglo desordenado:");
	imprimirArreglo(arr, n);

	bubbleSort(arr, n);
  	
    printf("Arreglo ordendado:");
	imprimirArreglo(arr, n);
  	return 0;
}