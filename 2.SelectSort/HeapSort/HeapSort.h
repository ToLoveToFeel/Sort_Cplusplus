#pragma once
#include "include.h"

//从指定位置（即m）处开始建堆
template <typename T, int N>
void HeapAdjust(std::array<T, N>& list, int m, int n)	//第一项为哨兵项，不参与排序
{
	int i;
	list[0] = list[m];
	for (i = 2 * m; i <= n; i *= 2) {
		if (i < n && list[i] < list[i + 1]) {		//选择左右孩子最大的一个
			i++;
		}
		if (list[0] > list[i]) {
			break;
		}
		list[m] = list[i];
		m = i;
	}
	list[m] = list[0];
}

template <typename T, int N>
void HeapSort(std::array<T, N>& list)
{
	constexpr int size = N - 1;

	int i;
	for (i = size / 2; i > 0; i--) {		//建堆
		HeapAdjust(list, i, size);
	}
	for (i = size; i > 1; i--) {			//排序
		list[0] = list[i];
		list[i] = list[1];
		list[1] = list[0];
		HeapAdjust(list, 1, i - 1);
	}
}
