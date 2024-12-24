
template<typename type> void CountingSort(type* array, int size, int MaxNumb) {
	int* Array = new int[MaxNumb + 1];
	for (int i = 0; i < MaxNumb + 1; i++) {
		Array[i] = 0;
	}
	for (int i = 0; i < size; i++) {
		Array[array[i]]++;
	}
	int j = 0;
	for (int i = 0; i != MaxNumb + 1; i++) {
		while (Array[i] != 0) {
			array[j] = i;
			Array[i]--;
			j++;
		}
	}
}