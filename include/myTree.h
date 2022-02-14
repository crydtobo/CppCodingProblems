#pragma once

// zadanie 22
// Zaimplementuj drzewo
// Przyklad - do refactoru

template <typename T>
class Tree
{
    struct Node
    {
        T value;
        Node *right;
        Node *left;

        Node(const T &val) : value(val), right(nullptr), left(nullptr) {}
    } *root = nullptr;

public:
    Tree() : root(nullptr) {}
    ~Tree() { deallocate(root); }

    void insert(const T &value)
    {
        if (root != nullptr)
        {
            insert(root, value);
        }
        else
        {
            root = new Node(value);
        }
    }

    Node *search(const T &value)
    {
        return search(root, value);
    }

    int highTree(Node *node)
    {
        if (node != nullptr)
        {
            int leftDepth = height(node->left);
            int rightDepth = height(node->right);
            if (leftDepth < rightDepth)
            {
                return rightDepth + 1;
            }
            else
            {
                return leftDepth + 1;
            }
        }
        return 0;
    }

private:
    void deallocate(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        if (node->left != nullptr)
        {
            deallocate(node->left);
        }
        else if (node->right != nullptr)
        {
            deallocate(node->right);
        }
        delete node;
    }

    void insert(Node *node, const T &value)
    {
        if (node->value < value)
        {
            if (node->right != nullptr)
            {
                insert(node->right, value);
            }
            else
            {
                node->right = new Node(value);
            }
        }
        else if (node->value > value)
        {

            if (node->left != nullptr)
            {
                insert(node->left, value);
            }
            else
            {
                node->left = new Node(value);
            }
        }
    }

    Node *search(Node *node, const T &value)
    {
        if (node != nullptr)
        {
            if (node->value == value)
            {
                return node;
            }
            if (node->value < value)
            {
                search(node->right, value);
            }
            else
            {
                search(node->left, value);
            }
        }
        else
        {
            return nullptr;
        }
    }
};