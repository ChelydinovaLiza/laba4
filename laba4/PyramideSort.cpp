
template<typename type> void pyramidSort(type* array, int size) {
	type temp;
	int end_array = size - 1;
	while (end_array != 1) {
		for (int i = size / 2 - 1; i > 0; i--) {
			if (end_array < i) i = end_array;
			if (array[0] < array[i]) {
				temp = array[0];
				array[0] = array[i];
				array[i] = temp;
			}
		}
		temp = array[0];
		array[0] = array[end_array];
		array[end_array] = temp;
		end_array--;
	}
}