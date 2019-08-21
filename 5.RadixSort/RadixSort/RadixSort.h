#pragma once
#include "include.h"

#define MAX_NUM_OF_NUM 8	//�ؼ������������ֵ,��ʱ�������8λ
#define NUM_OF_NUM 3	//ʵ�ʹؼ��ָ���
#define RADIX 10	//�ؼ��ֵĻ�������ʱ��ʮ���������Ļ���
#define MAX_SPACE 100 

typedef struct {
	std::string keys;	//����������
	int next;
}SLCell;

typedef struct {
	SLCell r[MAX_SPACE];	//��̬����Ŀ����ÿռ䣬r[0]Ϊͷ���
	int keynum;	//��¼�ĵ�ǰ�ؼ��֣�λ��������
	int recnum;	//��̬����ĵ�ǰ����
}SLList;

typedef int ArrType[RADIX]; //ָ����������

int ord(std::string& keys, unsigned int i);
void Distribute(SLCell R[], int t, ArrType& f, ArrType& r, int& head);
void Collect(SLCell R[], ArrType f, ArrType r, int& head);
void RadixSort(SLList& list);
void RadixPrint(SLList list);


