#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to add a node at the beginning
void addAtFirst(struct Node** head_ref, int new_data) {
    // Step 1: Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Step 2: Put data in the new node
    new_node->data = new_data;

    // Step 3: Make new_node->next point to current head
    new_node->next = *head_ref;

    // Step 4: Move head to point to the new node
    *head_ref = new_node;
}

// Function to print the list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    // Add nodes at the beginning
    addAtFirst(&head, 10);
    addAtFirst(&head, 20);
    addAtFirst(&head, 30);

    // Print the linked list
    printList(head);

    return 0;
}

