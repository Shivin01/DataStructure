#include<iostream>
#include<vector>

using namespace std;

struct Node {
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i =1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);        
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

Node * deleteHead(Node *head) {    
    Node* newHead = head->next;
    if (newHead) {
      newHead->prev = nullptr;
      head->next = nullptr;
      delete (head);
      return newHead;
    } else {
        return nullptr;
    }
}

Node* DeleteDLL(Node* head, int k) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }    
    while(head) {
        if (head->data == k) {
            if (head->prev) {
            head->prev->next = head->next;
            }
            if (head->next) {
            head->next->prev = head->prev;
            }
            head->next = nullptr;            
            head->prev = nullptr;
            delete head;

        } else {            
            head = head -> next;            
        }        
    }
    return head;
}

Node *deleteNode(Node *head, int k){
        
    Node* temp = head;
    int count = 0;
    if (head->next == nullptr) {
        return nullptr;
    } else {        
        if (count == k-1) {            
            Node* newHead = head->next;
            newHead->prev = nullptr;
            head->next = nullptr;
            delete(head);
            return newHead;
        }
        else {            
            while (temp != nullptr) {            
                if (count == k-1) {                    
                    Node* back = temp->prev;
                    Node* front = temp->next;
                    if (front == nullptr) {
                        back->next = nullptr;
                    } else {
                        back->next = front;
                    }                    
                    temp->prev = nullptr;
                    temp->next = nullptr;
                    delete(temp);
                    break;
                }
                temp = temp -> next;
                count++;
            }
            return head;
        }
    }

}

// Node DeleteElementLL(Node* head, int k) {

    

//     while (head) {
//         if (head->next == )
//     }
// }

int main() {
    vector<int> arr = {1 ,2, 3, 4, 5};
    Node x = Node(arr[0], nullptr, nullptr);

    vector<int> vec = {12,2,3,4,5,6,7,8,9};
    Node* head = convertArr2LL(vec);
    cout << "Header data " << head->data << endl;
    Node* temp = head;
    Node* prev = head;

    while(temp) {
        cout << "Data " <<temp->data << endl;
        prev = temp;
        temp = temp->next;        
    }

    cout << "After while" <<prev->data << endl;

    while(prev) {
        cout << "Prev Data " <<prev->data << endl;
        prev = prev->prev;
    }

    Node* newHead = DeleteDLL(head, 9);

    Node* temp1 = head;

    while(temp1) {
        cout << "Data " <<temp1->data << endl;
        temp1 = temp1->next;
    }

}