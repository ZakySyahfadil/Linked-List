#include <stdio.h>
#include <stdlib.h>

// Definisi struktur node
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n;
    scanf("%d", &n);

    // Jika n == 0, tidak ada node yang perlu dibuat atau dicetak
    if (n == 0)
    {
        return 0;
    }

    // Inisialisasi head dan pointer sementara
    struct Node *head = NULL;
    struct Node *temp = NULL;

    for (int i = 0; i < n; i++)
    {
        // Alokasi node baru
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            // Jika ini node pertama, set head ke newNode
            head = newNode;
        }
        else
        {
            // Sambungkan node baru ke list
            temp->next = newNode;
        }

        // Update temp ke node terakhir
        temp = newNode;
    }

    // Traversal dan cetak setiap node
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}
