#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node(int d) {
      data = d;
      next = NULL;
    }
};

Node* insert(Node* head, int data) {
  if (head == NULL) {
    head = new Node(data);
    return head;
  } else {
    Node* temp = head;
    Node* temp1 = new Node(data);
    while(temp -> next != NULL) 
      temp = temp -> next;
    temp -> next = temp1;
    return head;
  }
}

void deleteNode(Node* head, int n) {
  Node* temp = head;
  Node* temp1;
  int count = 0;
  if (head == NULL) {
    cout<<"List is empty\n";
    return;
  }

  while(temp -> next != NULL) {
    count++;
    temp = temp -> next;
  }

  if (count < n) {
    cout<<"Index out of range\n";
    return;
  }

  temp = head;

  while (n-- > 1) {
    temp1 = temp;
    temp = temp -> next;
  }
  temp1->next = temp -> next;
  delete temp;
}

void display(Node* head) {
  Node* start = head;
  while (start) {
    cout<<start->data<<" ";
    start = start -> next;
  }
}

int main() {
  Node* head = NULL;
  head = insert(head, 5);
  cout<<"Before Deleting\n";
  display(head);
  cout<<"\n";
  deleteNode(head, 0);
  cout<<"After Deleting\n";
  display(head);
  cout<<"\n";
}
