#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

         Node* removeDuplicates(Node *head)
            {
                Node* temp = head;
                Node* temp1 = head->next;

                while(temp -> next != NULL) {
                    while (temp->data == temp1->data && temp1->next!=NULL) {
                        temp->next = temp1->next;
                        temp1->next=NULL;
                        temp1 = temp->next;
                    }
                    if(temp1->next!=NULL || temp->data!=temp1->data)
                    {
                        temp = temp->next;
                        temp1 = temp1->next;
                    }
                    else
                    {
                        temp->next = NULL;
                    }
                }
                return head;
            }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);		
}
