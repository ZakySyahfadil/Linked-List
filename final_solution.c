#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct LinkedList
{
    Node *head;
    Node *tail;
} LinkedList;

void initList(LinkedList *list)
{
    list->head = NULL;
    list->tail = NULL;
}

void append(LinkedList *list, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        printf("Gagal mengalokasikan memori!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;

    if (list->head == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void printList(const LinkedList *list)
{
    Node *current = list->head;
    printf("Isi Linked List: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void freeList(LinkedList *list)
{
    Node *current = list->head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    list->head = NULL;
    list->tail = NULL;
}

int main()
{
    LinkedList list;
    initList(&list);

    int n, value;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &value);
        append(&list, value);
    }

    printList(&list);
    freeList(&list);

    return 0;
}
