#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    // Jika list kosong, node baru menjadi head
    if (head == NULL) {
        return newNode;
    }

    // Jika list tidak kosong, cari node terakhir
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Tambahkan node baru di akhir
    current->next = newNode;

    // Kembalikan head awal
    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
