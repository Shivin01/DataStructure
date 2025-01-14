#include <iostream>
using namespace std;


struct Node {
    Node* links[26];
    bool flag = false;

    bool containskey(char ch) {
        return links[ch - 'a'];
    }

    void put(char ch, Node* node) {
        links[ch-'a'] = node;
    }

    Node* getNode(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

class Trie {

    private:Node* root;

    public:
        Trie() {
            root = new Node();
        }

    public: void insert(string word) {
        Node* node = root;
        for(int i = 0; i<word.length(); i++) {
            if(!node->containskey(word[i])) {
                node->put(word[i], new Node());                
            }
            node = node->getNode(word[i]);
        }
        node->setEnd();

    }

    public: bool checkPrefixLength(string word) {        
        Node* node = root;
        for(int i=0; i<word.length(); i++) {
            if(node->containskey(word[i])) {
                node = node->getNode(word[i]);
                if(node->isEnd() == false) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};


string completeString(int n, vector<string> &a){
    
    Trie trie;
    string longest = "";

    for(auto &it: a) {
        trie.insert(it);
    }

    for(auto &it: a) {        
        if(trie.checkPrefixLength(it)) {
            if(it.length() > longest.length()) {
                longest = it;
            } else if (it.length() == longest.length() && it < longest) {
                longest=it;
            }
        }
    }    
    if(longest == "") return "None";
    return longest;

}