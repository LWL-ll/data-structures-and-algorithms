#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node* link;
}Node;
int findNodeFs(Node* L,int k) {
	Node* fast = L->link;
	Node* slow = L->link;
	for (int i = 1; i <= k; i++)
		fast = fast->link;
	while (fast != NULL) {
		fast = fast->link;
		slow = slow->link;
	}
	return slow->data;
}