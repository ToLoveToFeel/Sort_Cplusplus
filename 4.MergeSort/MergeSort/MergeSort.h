#pragma once
#include "include.h"

//合
template <typename T, int N>
void Merge(std::array<T, N>& list2, std::array<T, N>& list, int left, int middle, int right)
{
	//list为合并后的目标数组，将有序的序列 list2[s..m] 和 list2[m+1..t]归并为有序的序列 list[s..t]
	int i, j, k;
	for (i = left, j = middle + 1, k = left; (i <= middle) && (j <= right); k++) {
		if (list2[i] <= list2[j]) {
			list[k] = list2[i++];
		}
		else {
			list[k] = list2[j++];
		}
	}
	if (i <= middle) {
		for (; i <= middle;) {
			list[k++] = list2[i++];
		}
	}
	if (j <= right) {
		for (; j <= right;) {
			list[k++] = list2[j++];
		}
	}
}

//分
template <typename T, int N>
void Msort(std::array<T, N>& list2, std::array<T, N>& list, int start, int end)
{
	//将 list2[s..t] 通过 list3[] 归并排序为 list[s..t]
	//static std::array<T, N> list3{ list };	//error，list3其实为list的引用
	std::array<T, N> list3;
	if (start == end) {
		list[start] = list2[start];
	}
	else {
		int middle = (start + end) / 2;
		Msort(list2, list3, start, middle);		//体现了分久必合的思想
		Msort(list2, list3, middle + 1, end);
		Merge(list3, list, start, middle, end);
	}
}

template <typename T, int N>
void MergeSort(std::array<T, N> & list)
{
	int size = N - 1;
	Msort(list, list, 1, size);
}
