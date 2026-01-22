#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node* link;
}Node;
int findNodeFs(Node* L,int k) {
	if (L->link == NULL) {
		printf("链表为空！\n");
		return -1;
	}
	Node* fast = L->link;
	Node* slow = L->link;
	for (int i = 1; i <= k; i++) {
		if (fast == NULL) {
			printf("k值超过链表长度！\n");
			return -1;
		}
		fast = fast->link;
	}
	while (fast != NULL) {
		fast = fast->link;
		slow = slow->link;
	}
	return slow->data;
}