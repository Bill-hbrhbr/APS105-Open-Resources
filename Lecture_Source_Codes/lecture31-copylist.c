#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Represents a node in a linked list.
 */
typedef struct node {
    int data;
    struct node *next;
} Node;

/**
 * @brief Represents a linked list.
 */
typedef struct linkedList {
    Node *head;
} LinkedList;

/**
 * @brief Allocate a new node on the heap.
 *
 * @param value The data value of the node.
 *
 * @return A pointer to the new node.
 */
Node *createNode(int value) {
    Node *newNode = (Node *) malloc(sizeof(Node));

    if (newNode != NULL) {
        newNode->data = value;
        newNode->next = NULL;
    }

    return newNode;
}

/**
 * @brief Initialize the members of a linked list.
 *
 * @param list A pointer to the linked list to initialize. Assumed to be non-NULL.
 */
void initList(LinkedList *list) {
  // The head initially points to nothing.
  list->head = NULL;
}

/**
 * @brief Print out the data value of each element of the list.
 *
 * @param list A pointer to the linked list to print. Assumed to be non-NULL.
 */
void printList(LinkedList *list) {
  Node *current = list->head;
  
  while (current != NULL) {
    // Print out the data at this element.
    printf("%d\n", current->data);
    // Move to the next element in the list.
    current = current->next;
  }
}

/**
 * @brief Insert a new node at the front of the list.
 *
 * This function will allocate space for a new node and update the list.
 *
 * @param list A pointer to the linked list to modify. Assumed to be non-NULL.
 * @param value The data value of the new node being added.
 *
 * @return true if a new node was successfully added, false otherwise (e.g., out-of-memory).
 */
bool insertAtFront(LinkedList *list, int value) {
    // Create a new node.
    Node *temp = createNode(value);
    if (temp == NULL) {
        // We couldn't allocate enough memory for a new node.
        return false;
    }

    // The node will be inserted before head, so next should point to head.
    temp->next = list->head;
    // Now update head to the new front of the list.
    list->head = temp;

    return true;
}

// Fall 2008 final exam question
void copyList(LinkedList *dest, LinkedList *source) {
  dest->head = NULL;

  if (source->head != NULL)
  {
    dest->head = createNode(source->head->data);
    Node *current = source->head;
    Node *tail = dest->head;

    while (current->next != NULL)
    {
      tail->next = createNode(current->next->data);
      current = current->next;
      tail = tail->next;
    }
  }
}

int main(void) {
    const int size = 10;

    // Create and initialize a LinkedList.
    LinkedList sourceList, destList;
    initList(&sourceList);

    // Testing insertAtFront
    printf("Adding %d random numbers to the front of the list.\n", size);
    for (int i = 0; i < size; i++) {
        int randomValue = rand() % 10 + 1;
        printf("Generated: %d\n", randomValue);

        // Add it to the front of the list.
        insertAtFront(&sourceList, randomValue);
    }

    printf("The source list contains:\n");
    printList(&sourceList);

    copyList(&destList, &sourceList);
    printf("After copying from the source, the destination list contains:\n");
    printList(&destList);

    return 0;
}
