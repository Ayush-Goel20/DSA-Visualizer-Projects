#include <iostream>
#include <queue>
#include <map>
#include <string>

using namespace std;

struct Node {
    char data;
    int freq;
    Node *left, *right;
    Node(char d, int f) : data(d), freq(f), left(NULL), right(NULL) {}
};

struct compare {
    bool operator()(Node* l, Node* r) { return l->freq > r->freq; }
};

void printCodes(Node* root, string str) {
    if (!root) return;
    if (root->data != '$') cout << root->data << ": " << str << "\n";
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

int main() {
    string text = "placemate dsa project";
    map<char, int> freq;
    for (char c : text) freq[c]++;

    priority_queue<Node*, vector<Node*>, compare> pq;
    for (auto pair : freq) pq.push(new Node(pair.first, pair.second));

    while (pq.size() != 1) {
        Node *l = pq.top(); pq.pop();
        Node *r = pq.top(); pq.pop();
        Node *top = new Node('$', l->freq + r->freq);
        top->left = l; top->right = r;
        pq.push(top);
    }

    cout << "--- Huffman Binary Encoding ---" << endl;
    printCodes(pq.top(), "");
    return 0;
}