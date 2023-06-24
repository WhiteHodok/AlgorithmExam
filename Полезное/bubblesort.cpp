// Функция для пузырьковой сортировки двумерного массива
void bubbleSort(int** arr, int rows, int columns) {
	for (int i = 0; i < rows * columns - 1; i++) {
		for (int j = 0; j < rows * columns - i - 1; j++) {
			if (arr[j / columns][j % columns] > arr[(j + 1) / columns][(j + 1) % columns]) {
				swap(arr[j / columns][j % columns], arr[(j + 1) / columns][(j + 1) % columns]);
			}
		}
	}
}