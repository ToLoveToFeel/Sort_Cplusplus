#include "RadixSort.h"

int ord(std::string& keys, unsigned int i)
{
	if (i > keys.length()) {
		return 0;
	}
	else {
		return (int)(keys[i] - '0');
	}
}

void Distribute(SLCell R[], int t, ArrType & f, ArrType & r, int& head)
{
	int i;
	for (i = 0; i < RADIX; i++) {
		f[i] = -1;	//链尾指针置为-1
		r[i] = -1;
	}
	for (int p = head; p != -1; p = R[p].next) {
		i = ord(R[p].keys, NUM_OF_NUM - t - 1);		//ord将将记录中的第i个关键字映射到[]
		if (-1 == f[i]) {	//说明关键字为该数字的是第一个
			f[i] = p;
		}
		else {
			R[r[i]].next = p;
		}
		r[i] = p;
	}
}

void Collect(SLCell R[], ArrType f, ArrType r, int& head)
{
	int i;
	int t;
	for (i = 0; i < RADIX && -1 == f[i]; ++i) {
		
	}
	head = f[i];		//找到第一个存在的
	t = r[i];
	while (i < RADIX) {
		for (++i; i < RADIX - 1 && -1 == f[i]; ++i) {

		}
		if (i < RADIX && -1 != f[i]) {
			R[t].next = f[i];
			t = r[i];
		}
	}
	R[t].next = -1;
}

int head = 0;
void RadixSort(SLList& list)
{
	for (int i = 0; i < list.recnum; i++) {
		list.r[i].next = i + 1;
	}
	list.r[list.recnum - 1].next = -1;
	ArrType f, r;
	for (int i = 0; i < list.keynum; i++) {
		Distribute(list.r, i, f, r, head);
		Collect(list.r, f, r, head);
	}
}

void RadixPrint(SLList list)
{
	int p = head;
	for (int i = 0; i < list.recnum; i++) {
		cout << list.r[p].keys << "  ";
		p = list.r[p].next;
	}
	cout << endl;
}