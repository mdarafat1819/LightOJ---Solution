#include <bits/stdc++.h>

using namespace std;

typedef struct singly_list Node;

struct singly_list
{
    int data;
    Node *next;
};

Node *head = NULL, *tail = NULL;
int idx = 0;

void push_left(int data, int n)
{
    if(idx == n)
    {
        cout<<"The queue is full"<<endl;
        return;
    }
    cout<<"Pushed in left: "<<data<<endl;
    idx++;
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = head;
    if(head == NULL) tail = new_node;
    head = new_node;
}
void push_right(int data, int n)
{
    if(idx == n)
    {
        cout<<"The queue is full"<<endl;
        return;
    }
    cout<<"Pushed in right: "<<data<<endl;
    idx++;
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;
    if(head == NULL)
    {
        head = new_node;
        tail = head;
        return;
    }
    tail -> next = new_node;
    tail = new_node;
}

void pop_left()
{
    if(head == NULL)
    {
        cout<<"The queue is empty"<<endl;
        return;
    }
    idx--;
    cout<<"Popped from left: "<<head -> data<<endl;
    head = head -> next;
    if(head == NULL) tail = NULL;
}
void pop_right()
{
    if(head == NULL)
    {
        cout<<"The queue is empty"<<endl;
        return;
    }
    idx--;
    Node *temp = head;

    if(temp -> next == NULL)
    {
        cout<<"Popped from right: "<<temp -> data<<endl;
        tail = NULL;
        head = NULL;
        return;
    }
    while(temp -> next -> next != NULL) temp = temp -> next;
    cout<<"Popped from right: "<<temp -> next -> data<<endl;
    tail = temp;
    temp -> next = NULL;

}

void print()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<endl;
        temp = temp -> next;
    }
}

int main()
{
   int cs;

   cin>>cs;

   for(int i = 1; i <= cs; i++)
   {
       cout<<"Case "<<i<<":"<<endl;
       int n, m, data;
       cin>>n>>m;
       head = NULL, tail = NULL, idx = 0;
       while(m--)
       {
           string cmnd;
           cin>>cmnd;
           if(cmnd == "pushLeft")
           {
               cin>>data;
               push_left(data, n);
           }
           else if(cmnd == "pushRight")
           {
               cin>>data;
               push_right(data, n);
           }
           else if(cmnd == "popLeft") pop_left();
           else if(cmnd == "popRight") pop_right();
       }
   }

    return 0;
}
