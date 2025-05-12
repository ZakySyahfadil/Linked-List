#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk mencetak linked list
void display(Node* head) {
    Node* current = head;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {
    int T, data;
    scanf("%d", &T);

    Node *head = NULL, *tail = NULL;

    while (T-- > 0) {
        scanf("%d", &data);
        Node* newNode = createNode(data);

        if (head == NULL) {
            head = tail = newNode;  // List kosong
        } else {
            tail->next = newNode;   // Tambahkan langsung ke akhir
            tail = newNode;
        }
    }

    display(head);
    return 0;
}
