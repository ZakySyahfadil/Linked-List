#include <stdio.h>
#include <stdlib.h>

// Definisi struktur node
struct SinglyLinkedListNode {
    int data;
    struct SinglyLinkedListNode* next;
};

// Fungsi untuk mencetak semua node
void printLinkedList(struct SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

// Fungsi pembantu untuk membuat node baru
struct SinglyLinkedListNode* createNode(int data) {
    struct SinglyLinkedListNode* newNode = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Fungsi utama (main)
int main() {
    int n, value;
    scanf("%d", &n);

    struct SinglyLinkedListNode* head = NULL;
    struct SinglyLinkedListNode* tail = NULL;

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        struct SinglyLinkedListNode* newNode = createNode(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    printLinkedList(head);

    // Bebaskan memori
    struct SinglyLinkedListNode* current = head;
    while (current != NULL) {
        struct SinglyLinkedListNode* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
