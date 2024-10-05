#include <iostream>
#include <string>
using namespace std;

struct Review{
    double rating;
    string comments;
}

void add_at_head(Review*& head, Review*& tail, double rating, const string& comments);
void add_at_tail(Review*& head, Review*& tail, double rating, const string& comments);
void display_review(Review*& head);

int main() {
    Review* head = nullptr;
    Review* tail = nullptr;
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "[1] New nodes are added at the head of the linked list";
    cout << "[2] New nodes are added at the tail of the linked list";
    cout << "Choice: ";
    cin >> choice;
}

void add_at_head(Review*& head, Review*& tail, double rating, const string& comments){
    Review* new_node = new Review{};
    new_node-> next = head;
    head = new_node;
    if (!tail){

    }
}

void add_at_tail(Review*& head, Review*& tail, double rating, const string& comments){
    Review* new_node = new Review{};
    if(!head){

    }

}

void display_review(Review*& head){
    Review* temp = head;
    int count = 1;
    double total_rating;
    int number_reviews = 0;

    while (temp){
        cout << "> Review #" << count << ": " << temp->rating << ":"
            << temp-> comments << endl;
        total_rating += 
        number_reviews++;
        temp = temp->next;
        count++;
    }

    if (number_reviews > 0){
        cout << 
    }
}

