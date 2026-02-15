#include <iostream>
#include <string>

using namespace std;

struct Transaction {
    int id;
    double amount;
    string type;
    Transaction* next;
    Transaction(int i, double a, string t) : id(i), amount(a), type(t), next(NULL) {}
};

class TransactionHistory {
    Transaction* head;
public:
    TransactionHistory() : head(NULL) {}
    void add(int id, double amt, string type) {
        Transaction* newNode = new Transaction(id, amt, type);
        newNode->next = head;
        head = newNode;
    }
    void display() {
        Transaction* temp = head;
        while (temp) {
            cout << "ID: " << temp->id << " | " << temp->type << ": $" << temp->amount << "\n";
            temp = temp->next;
        }
    }
};

int main() {
    TransactionHistory list;
    list.add(1, 1000, "Credit");
    list.add(2, 500, "Debit");
    cout << "--- Bank Transaction History ---" << endl;
    list.display();
    return 0;
}