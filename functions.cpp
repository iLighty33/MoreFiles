// не будет содержать метода main
#include "functions.h"
#include <stdlib.h>
#include <time.h>

// Чтобы не создавалась копия - подключаем заголовочный файл.
// подключать файлы с помощью ковычек, а не скобочек

// Returns A + B
int sum(int A, int B) {
	return A + B;
}

void fillArr(int arr[], int length, int A, int B){
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (B - A) + A;
}
