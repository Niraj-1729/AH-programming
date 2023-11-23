// problem link:- https://www.geeksforgeeks.org/problems/avl-tree-insertion/1

class Solution {
public:
    Node* insertToAVL(Node* node, int data) {
        // code here
        if (node == nullptr) return new Node(data);
        if (node->data > data) node->left = insertToAVL(node->left, data);
        if (node->data < data) node->right = insertToAVL(node->right, data);

        node->height = max(height(node->left), height(node->right)) + 1;
        int diff = height(node->left) - height(node->right);

        if (diff > 1) {
            if (data < node->left->data) return rightRotate(node);
            else {
                node->left = leftRotate(node->left);
                return rightRotate(node);
            }
        }
        if (diff < -1) {
            if (data > node->right->data) return leftRotate(node);
            else {
                node->right = rightRotate(node->right);
                return leftRotate(node);
            }
        }
        return node;
    }

private:
    int height(Node* node) {
        if (node == nullptr) return 0;
        return node->height;
    }

    Node* rightRotate(Node* node) {
        Node* l = node->left;
        Node* lr = l->right;
        l->right = node;
        node->left = lr;

        node->height = max(height(node->left), height(node->right)) + 1;
        l->height = max(height(l->left), height(l->right)) + 1;
        return l;
    }

    Node* leftRotate(Node* node) {
        Node* r = node->right;
        Node* rl = r->left;
        r->left = node;
        node->right = rl;

        node->height = max(height(node->left), height(node->right)) + 1;
        r->height = max(height(r->left), height(r->right)) + 1;

        return r;
    }
};