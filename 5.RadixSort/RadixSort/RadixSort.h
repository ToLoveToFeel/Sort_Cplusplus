#pragma once
#include "include.h"

#define MAX_NUM_OF_NUM 8	//关键字项数的最大值,此时整数最多8位
#define NUM_OF_NUM 3	//实际关键字个数
#define RADIX 10	//关键字的基数，此时是十进制整数的基数
#define MAX_SPACE 100 

typedef struct {
	std::string keys;	//待排序数据
	int next;
}SLCell;

typedef struct {
	SLCell r[MAX_SPACE];	//静态链表的可利用空间，r[0]为头结点
	int keynum;	//记录的当前关键字（位数）个数
	int recnum;	//静态链表的当前长度
}SLList;

typedef int ArrType[RADIX]; //指针数组类型

int ord(std::string& keys, unsigned int i);
void Distribute(SLCell R[], int t, ArrType& f, ArrType& r, int& head);
void Collect(SLCell R[], ArrType f, ArrType r, int& head);
void RadixSort(SLList& list);
void RadixPrint(SLList list);


