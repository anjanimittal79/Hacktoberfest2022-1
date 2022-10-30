#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	 int data;
	 struct node *next;
}Node;

Node *head = NULL;

void insertAtEnd(int data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	Node *temp;
	newNode->data=data;
	newNode->next=NULL;
	temp = head;
	if(temp == NULL)
	{
		head = newNode;
		return;
	}
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next=newNode;
}

void display(){
	Node *temp;
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int data;
		for(int i=0; i<n; i++)
		{
			cin>>data;
			insertAtEnd(data);
		}
		display();
		cout<<endl;
		head = NULL;
	}
	return 0;
}
