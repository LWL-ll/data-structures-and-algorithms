#define  _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
typedef char ElemType;
typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;
int getLength(Node* head) {
	if (head == NULL) return 0;
	int len=0;
	Node* p = head->next;
	while (p != NULL) {
		p = p->next;
		len++;
	}
	return len;
}
Node* findCommOnSuffix(Node* str1, Node* str2) {
	int len1 = getLength(str1);
	int len2 = getLength(str2);
	Node* p1 = str1->next;
	Node* p2 = str2->next;
	if (len1 > len2)
		for (int i = 1; i <= len1 - len2; i++)
			p1 = p1->next;
	else
		for (int i = 1; i <= len2 - len1; i++)
			p2 = p2->next;
	while (p1 != p2) {
		p1 = p1->next;
		p2 = p2->next;
	}
	return p1;
}