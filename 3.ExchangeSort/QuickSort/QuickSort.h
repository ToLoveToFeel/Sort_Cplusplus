#pragma once
#include "include.h"

template <typename T, int N>
int partition(std::array<T, N>& list, int low, int high)
{
	list[0] = list[low];
	while (low < high) {
		while ((low < high) && (list[high] > list[0])) {
			high--;
		}
		if (low < high) {
			list[low] = list[high];
			low++;
		}
		while ((low < high) && (list[low] < list[0])) {
			low++;
		}
		if (low < high) {
			list[high] = list[low];
			high--;
		}
	}
	list[high] = list[0];

	return high;
}

template <typename T, int N>
void QuickSort(std::array<T, N>& list, int low, int high)
{
	int t;
	if (low < high) {
		t = partition(list, low, high);
		QuickSort(list, low, t - 1);
		QuickSort(list, t + 1, high);
	}
}