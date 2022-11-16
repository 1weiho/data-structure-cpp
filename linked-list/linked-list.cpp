using namespace std;

class LinkedList;

class Node {
   private:
    int data;
    Node *next;

   public:
    Node() {
        data = 0;
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    friend class LinkedList;
};

class LinkedList {
   private:
    Node *head;

   public:
    LinkedList() { this->head = NULL; }
    void printList();
    void pushFront(int x);
    void pushEnd(int x);
    void deleteNode(int x);
    void clear();
    void reverse();
};

void LinkedList::printList() {
    Node *curr = head;
    if (head == NULL) {
        cout << "The list is empty" << endl;
        return;
    }
    while (1) {
        if (curr == NULL) {
            break;
        }
        cout << curr->data;
        if (curr->next != NULL) cout << " -> ";
        curr = curr->next;
    }
    cout << endl;
}

// TODO: check the duplicate value
void LinkedList::pushFront(int x) {
    Node *node = new Node(x);
    if (head == NULL) {
        head = node;
        return;
    }
    node->next = head;
    head = node;
}

void LinkedList::pushEnd(int x) {
    Node *node = new Node(x);
    Node *curr = head;
    if (head == NULL) {
        head = node;
        return;
    }
    while (1) {
        if (curr->next == NULL) {
            break;
        }
        curr = curr->next;
    }
    curr->next = node;
}

void LinkedList::deleteNode(int x) {
    Node *curr = head;
    Node *prev = NULL;
    if (head == NULL) {
        cout << "The list is empty" << endl;
        return;
    }

    while (1) {
        if (curr == NULL) {
            cout << x << "can not found in the list" << endl;
            return;
        }

        if (curr->data == x && curr == head) {
            head = curr->next;
            delete (curr);
            break;
        } else if (curr->data == x) {
            prev->next = curr->next;
            delete (curr);
            break;
        }

        prev = curr;
        curr = curr->next;
    }

    cout << "Delete " << x << " from the list successfully" << endl;
}

void LinkedList::clear() {
    if (head == NULL) {
        cout << "The list is empty" << endl;
        return;
    }

    while (head != 0) {
        Node *current = head;
        head = head->next;
        delete current;
        current = 0;
    }

    cout << "The list has been clear" << endl;
}

// void LinkedList::reverse() {
//     Node *curr = head;

//     if (head == NULL) {
//         cout << "The list is empty" << endl;
//     }

//     while (1) {
//         head = head->next;
//     }
// }
