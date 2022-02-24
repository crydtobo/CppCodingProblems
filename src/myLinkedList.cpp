#include "../include/myLinkedList.h"

// Zadanie 51
// Napisz funkcję odwracającą listę jednostronną.
Node *MyLinkedList::reverse(Node *node)
{
    Node *prev = nullptr;
    Node *head = node;
    Node *next = nullptr;
    while (head != nullptr)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}
