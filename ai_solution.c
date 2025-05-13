#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
     // Buat node baru
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    // Jika linked list kosong, jadikan node ini sebagai head
    if (head == NULL) {
        return newNode;
    }

    // Traversal ke akhir list
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Tambahkan node baru di akhir
    temp->next = newNode;

    return head; // Kembalikan head lama karena tidak berubah
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

