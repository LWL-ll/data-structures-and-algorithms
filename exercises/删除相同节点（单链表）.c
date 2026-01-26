#define  _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<math.h>

typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

ElemType findListAbsMax(Node* Head) {
	if (Head == NULL || Head->next == NULL) {
		return -1;
	}
	Node* p = Head->next;
	ElemType Max = abs(p->data);
	while (p != NULL) {
		ElemType current_abs = abs(p->data);
		if (current_abs > Max)                
			Max = current_abs;
		p = p->next;
	}
	return Max;
}

void deleteNextNode(Node* p) {
	if (p == NULL || p->next == NULL) return;  //防止空指针导致崩溃
	Node* temp = p->next;
	p->next = temp->next;
	free(temp);
}

Node* removeDuplicateNodes(Node* Head) {
	if (Head == NULL || Head->next == NULL) return Head;  //空链表直接返回
	ElemType len = findListAbsMax(Head) + 1;
	ElemType* arr = (ElemType*)calloc(len, sizeof(ElemType));
	if (arr == NULL) return Head;  //内存分配失败保护

	Node* p = Head;
	while (p->next != NULL) {
		ElemType abs_val = abs(p->next->data);
		if (arr[abs_val] == 1)
			deleteNextNode(p);  //删除后p不移动，因为p->next已更新
		else {
			arr[abs_val] = 1;
			p = p->next;
		}
	}
	free(arr);
	return Head;
}
