#include <bits/stdc++.h>
using namespace std;

// Node class for singly linked list
class Node
{
public:
  int data;   // stores data value
  Node *next; // stores address of next node

  // Default constructor
  Node()
  {
    this->data = 0;
    this->next = NULL;
  }

  // Parameterized constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  ~Node()
  {
    cout << this->data << " deleted" << endl;
  }
};

// Function to print linked list
void print(Node *head)
{
  Node *temp = head; // start from head

  // traverse until NULL
  while (temp != NULL)
  {
    cout << temp->data << " "; // print current node data
    temp = temp->next;         // move to next node
  }
}

// Function to insert node at head
void insertAtHead(Node *&head, Node *&tail, int data)
{
  // If linked list is empty
  if (head == NULL)
  {
    Node *newnode = new Node(data); // create new node
    head = newnode;                 // head points to new node
    tail = newnode;                 // tail also points to new node
    return;
  }

  // Create new node
  Node *newnode = new Node(data);

  // Link new node with current head
  newnode->next = head;

  // Update head to new node
  head = newnode;
}

// Function to insert node at tail
void insertAttail(Node *&head, Node *&tail, int data)
{
  // If linked list is empty
  if (head == NULL)
  {
    Node *newnode = new Node(data); // create new node
    head = newnode;                 // head points to new node
    tail = newnode;                 // tail also points to new node
    return;
  }

  // Create new node
  Node *newnode = new Node(data);

  // Link old tail to new node
  tail->next = newnode;

  // Update tail to new node
  tail = newnode;
}

// Function to find length of linked list
int findlen(Node *&head)
{
  int len = 0;       // length counter
  Node *temp = head; // start from head

  // Count nodes until NULL
  while (temp != NULL)
  {
    temp = temp->next; // move to next node
    len++;             // increase count
  }

  return len;
}

// Function to insert node at given position
void insertAtposition(int data, int position, Node *&head, Node *&tail)
{
  // If linked list is empty
  if (head == NULL)
  {
    Node *newnode = new Node(data); // create new node
    head = newnode;                 // head points to new node
    tail = newnode;                 // tail points to new node
    return;
  }

  // If position is 0, insert at head
  if (position == 0)
  {
    insertAtHead(head, tail, data);
    return;
  }

  // Find current length of linked list
  int len = findlen(head);

  // If position is greater than or equal to length, insert at tail
  if (position >= len)
  {
    insertAttail(head, tail, data);
    return;
  }

  // Traverse to node just before required position
  int i = 1;
  Node *prev = head;

  while (i < position)
  {
    prev = prev->next;
    i++;
  }

  // curr points to node currently at given position
  Node *curr = prev->next;

  // Create new node
  Node *newnode = new Node(data);

  // Link new node to current node
  newnode->next = curr;

  // Link previous node to new node
  prev->next = newnode;
}
void deletenode(int position, Node *&head, Node *&tail)
{
  // Empty list
  if (head == NULL)
  {
    cout << "Can't delete, LL is empty\n";
    return;
  }

  int len = findlen(head);

  // Invalid position
  if (position < 1 || position > len)
  {
    cout << "Invalid position\n";
    return;
  }

  // Delete first node
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;

    // If only one node was present
    if (head == NULL)
    {
      tail = NULL;
    }

    temp->next = NULL;
    delete temp;
    return;
  }

  // Delete middle or last node
  Node *prev = head;
  int i = 1;

  while (i < position - 1)
  {
    prev = prev->next;
    i++;
  }

  Node *curr = prev->next;

  // Connect previous node to next node
  prev->next = curr->next;

  // If deleting last node, update tail
  if (curr == tail)
  {
    tail = prev;
  }

  curr->next = NULL;
  delete curr;
}
int main()
{
  Node *head = NULL; // initially list is empty
  Node *tail = NULL; // initially tail is also NULL

  insertAtHead(head, tail, 20);         // List: 20
  insertAtHead(head, tail, 90);         // List: 90 20
  insertAttail(head, tail, 77);         // List: 90 20 77
  insertAtposition(101, 2, head, tail); // List: 90 20 101 77
  insertAtposition(102, 3, head, tail); // List: 90 20 101 102 77
  deletenode(2, head, tail);

  print(head); // print final linked list

  return 0;
}