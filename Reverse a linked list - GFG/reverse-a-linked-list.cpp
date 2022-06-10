// { Driver Code Starts
//Initial Template for C++// C program to find n'th Node in nexted list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* next list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* nexted List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a nexted list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node* temp=NULL;
        struct Node* temp2=NULL;
        
        while(head!=NULL)
        {
            temp2=head->next;
            head->next=temp;
            temp=head;
            head=temp2;
        }
        head=temp;
        return head;
        
    }
    
};
    


// { Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends