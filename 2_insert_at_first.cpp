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
void printLL(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
void insertAtFirst(Node *&head, int data)
{
  //step1:
  Node *newnode = new Node(data);
  //step2:
  newnode->next = head;
  //step3:
  head = newnode;
}
int main()
{
  Node *head = NULL;
  insertAtFirst(head, 10);
  insertAtFirst(head, 20);
  insertAtFirst(head, 30);
  insertAtFirst(head, 40);
  printLL(head);

  return 0;
}