#include<stdio.h>
#include<stdlib.h>
struct Node{
	int number;
	Node* next;
};
typedef struct Node Node;
Node* f(Node* head){
	Node* tempHead = head;
	if (tempHead == NULL || tempHead->next == NULL){
		return head;}
	while (tempHead->next->next != NULL){
		tempHead = tempHead->next;}
	tempHead->next->next = head;
	head = tempHead->next;
	tempHead->next = NULL;
	return head;
}
int main() {
	Node* head = NULL;
	for (int i = 1; i <= 5; i++) {
		Node* node = (Node*)malloc(sizeof(Node));
		node->number = i;
		node->next = head;
		head = node;}
	head = f(head);
	while (head != NULL){
		printf("%d\n", head->number);
		head = head->next;
	}
	return 0;
}
