#pragma once
#include "include.h"

template<typename T, int N>
void BinaryInsertSort(std::array<T, N>& list)		//默认第0项为哨兵项
{
	constexpr int size = N - 1;

	int i, j;
	int high, low, middle;
	for (i = 2; i <= size; i++) {
		list[0] = list[i];
		high = i - 1;
		low = 1;
		while (low <= high) {
			middle = (high + low) / 2;
			if (list[0] > list[middle]) {
				low = middle + 1;
			}
			else {
				high = middle - 1;
			}
		}
		for (j = i - 1; j >= high + 1; j--) {
			list[j + 1] = list[j];
		}
		list[high + 1] = list[0];
	}
}