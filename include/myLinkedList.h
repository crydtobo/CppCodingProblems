#pragma once

#include <iostream>
#include <string>

struct Node
{
    int val;
    Node *next;
};

class MyLinkedList
{
public:
    MyLinkedList() : head(nullptr), tail(nullptr)
    {
    }

    int get(int index)
    {
        Node *tmp = head;
        int i = 0;
        while (tmp != nullptr)
        {
            if (i == index)
                return tmp->val;
            tmp = tmp->next;
            i++;
        }
        // delete tmp;
        return -1;
    }

    void addAtHead(int val)
    {
        Node *new_node = new Node;
        new_node->val = val;
        new_node->next = nullptr;

        if (head)
        {
            new_node->next = head;
            head = new_node;
        }
        else
        {
            head = new_node;
            tail = new_node;
        }
    }

    void addAtTail(int val)
    {
        Node *new_node = new Node;
        new_node->val = val;
        new_node->next = nullptr;

        if (head)
        {
            Node *tmp = head;
            while (tmp->next)
                tmp = tmp->next;

            tmp->next = new_node;
            tmp = new_node;
        }
        else
        {
            head = new_node;
            tail = new_node;
        }
    }

    void addAtIndex(int index, int val)
    {
        Node *new_node = new Node;
        new_node->val = val;
        new_node->next = nullptr;

        if (index < 0)
            std::cout << "Zly index < 0" << std::endl;
        else if (index == 0)
        {
            new_node->next = head;
            head = new_node;
        }
        else
        {
            Node *tmp = head;
            for (int i = 1; i < index; i++)
            {
                if (tmp != nullptr)
                    tmp = tmp->next;
            }

            if (tmp != nullptr)
            {
                new_node->next = tmp->next;
                tmp->next = new_node;
            }
            else
            {
                std::cout << "The previous node is null" << std::endl;
            }
            // delete tmp;
        }
    }

    void deleteAtIndex(int index)
    {
        Node *tmp = head;
        Node *to_delete = nullptr;
        if (!head)
            std::cout << "Empty! " << std::endl;
        else
        {
            for (int i = 0; i < index; i++)
            {

                if (tmp != nullptr)
                {
                    if (i == index - 1)
                        to_delete = tmp;
                    tmp = tmp->next;
                }
            }
            if (index == 0)
            {
                tmp = head;
                head = head->next;
                delete tmp;
            }
            else if (tmp != nullptr)
            {
                to_delete->next = tmp->next;
                delete tmp;
            }
        }
    }

    void deleteValue(const int &value)
    {
        if (!head)
        {
            throw std::runtime_error("Pusta Lista");
        }
        Node *tmp = head;
        Node *deleteVal = new Node;
        while (tmp->next)
        {
            if (head->val == value)
            {
                head = head->next;
            }
            else
            {
                deleteVal = tmp;
                tmp = tmp->next;
                if (tmp->val == value)
                {
                    deleteVal->next = tmp->next;
                    tmp = nullptr;
                    delete tmp;
                }
            }
        }
    }

private:
    Node *head;
    Node *tail;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
