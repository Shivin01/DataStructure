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
    Node* next;

    public:
    Node1(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main() {

    vector<int> arr = {1 ,2, 3, 4, 5};
    // arr = {1 ,2, 3, 4, 5};
    Node x = Node(arr[0], nullptr);
    Node1* y = new Node1(arr[0], nullptr);
    cout << "y " << y << endl;
    cout << "x " << x.data << endl;
    cout << "x " << x.next << endl;
    return 0;
}