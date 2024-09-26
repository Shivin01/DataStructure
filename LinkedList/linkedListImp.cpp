#include<iostream>
#include<vector>

using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

class Node1 {
    public:
    int data;
    Node1* next;

    public:
    Node1(int data1, Node1* next1) {
        data = data1;
        next = next1;
    }

    public:
    Node1(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node1* convertArr2LL(vector<int> &arr) {
    Node1* head = new Node1(arr[0]);
    Node1* mover = head;
    for(int i =1; i<arr.size(); i++) {
        Node1* temp = new Node1(arr[i]);
        mover-> next = temp;
        mover = temp;
    }
    return head;
}

int searchinLL(Node1* head, int k) {
    while(head) {
        if(head->data == k) {
            return 1;
        }
        head = head->next;
    }
    return 0;
}

int LenghtofLL(Node1* head) {
    int cnt = 0;
    Node1* temp = head;
    while(temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

Node1* DeleteElementofLL(Node1* head, int k) {

    while (head) {
        if(head->next->data == k) {
            Node1* temp = head->next;
            // head->next = head->next->next;
            cout << head->next->data << "Found" << endl;
            head = temp->next;
        } else {
        head = head->next;
        }
    }
    return head;
}

int main() {

    vector<int> arr = {1 ,2, 3, 4, 5};
    // arr = {1 ,2, 3, 4, 5};
    Node x = Node(arr[0], nullptr);
    Node1* y = new Node1(arr[0], nullptr);
    cout << "y " << y << endl;
    cout << "x " << x.data << endl;
    cout << "x " << x.next << endl;

    vector<int> vec = {12,2,3,4,5,6,7,8,9};
    Node1* head = convertArr2LL(vec);
    cout << "Header data " << head->data << endl;

    Node1* temp = head;

    while(temp) {
        cout << "Data " <<temp->data << endl;
        temp = temp->next;
    }

    cout << "Length of LL " << LenghtofLL(head) << endl;

    cout << "Search in LL 1 " << searchinLL(head, 12) << endl;
    cout << "Search in LL 0 " << searchinLL(head, 10) << endl;

    Node1* newHead = DeleteElementofLL(head, 7);

    Node1* temp1 = head;

    while(temp1) {
        cout << "Data " <<temp1->data << endl;
        temp1 = temp1->next;
    }

    cout << "Length of new LL " << LenghtofLL(newHead) << endl;


    return 0;
}