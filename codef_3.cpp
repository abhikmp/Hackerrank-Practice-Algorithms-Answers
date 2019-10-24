#include<bits/stdc++.h>

using namespace std;

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *createNode(int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int countNodesinLoop(Node *head, int index, int n) {
    Node *temp = head;
    if(index == 0) {
        return 0;
    }
    int i=0;
    while(i<index && i<n) {
        temp = temp->next;
        i++;
    }
    Node *loopNode = temp;
    int count = 1;
    while()
}
int main() {
    int n;
    int val;
    Node *temp = NULL;
    Node *head = NULL;
    int i = 0;
    cin>>n;
    cin>>val;
    head = createNode(val);
    temp = head;
    i++;

    while(i<n) {
        cin>>val;
        temp->next = createNode(val);
        temp = temp->next;
        i++;
    }
    
    temp = head;
    int index;
    cin>>index;
    countNodesinLoop(head,index,n);
    return 0;
}