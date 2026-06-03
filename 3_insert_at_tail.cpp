#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node()
  {
    this->data = 0;
    this->next = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
  // step1:
  if (head == NULL)
  {
    Node *newnode = new Node(data);
    head = newnode;
    tail = newnode;
    return;
  }
  Node *newnode = new Node(data);
  // step2:
  newnode->next = head;
  // step3:
  head = newnode;
}
void insertAttail(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    Node *newnode = new Node(data);
    head = newnode;
    tail = newnode;
    return;
  }
  Node *newnode = new Node(data);
  tail->next = newnode;
  tail = newnode;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 90);
  insertAttail(head, tail, 77);
  print(head);
  return 0;
}