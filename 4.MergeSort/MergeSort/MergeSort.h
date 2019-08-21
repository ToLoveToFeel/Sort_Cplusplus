#pragma once
#include "include.h"

//��
template <typename T, int N>
void Merge(std::array<T, N>& list2, std::array<T, N>& list, int left, int middle, int right)
{
	//listΪ�ϲ����Ŀ�����飬����������� list2[s..m] �� list2[m+1..t]�鲢Ϊ��������� list[s..t]
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

//��
template <typename T, int N>
void Msort(std::array<T, N>& list2, std::array<T, N>& list, int start, int end)
{
	//�� list2[s..t] ͨ�� list3[] �鲢����Ϊ list[s..t]
	//static std::array<T, N> list3{ list };	//error��list3��ʵΪlist������
	std::array<T, N> list3;
	if (start == end) {
		list[start] = list2[start];
	}
	else {
		int middle = (start + end) / 2;
		Msort(list2, list3, start, middle);		//�����˷־ñغϵ�˼��
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
