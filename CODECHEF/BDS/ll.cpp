#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

int getNthNodeFromEnd(struct Node* head, int n){
        int len = 0;
	Node *temp = head;
	while(temp){
        len++;
		temp = temp->next;
		
	}
    temp = head;
	if(len >= n){
        int tp = 1;
        while(tp!=len - n){
            temp = temp->next;
            tp++;
        }
    }
	
	return temp->data;
    
}