#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
Node *head=NULL;
Node *tail=NULL;
void insert(int value)
{
	Node* new_node=new Node();
	new_node->data=value;
	new_node->next=NULL;
	if(head==NULL)
	{
	     head=new_node;
	     tail=new_node;
	}
    else
    {
    	tail->next=new_node;
        tail=new_node;
    }
}
void insert_beg()
{
	int value;
	Node *temp=new Node();
	cout<<"Enter value"<<endl;
	cin>>value;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		temp->next=head;
		head=temp;
	}
}
void insert_end()
{
	int value;
	Node *temp=new Node();
	Node *temp1=NULL;
	cout<<"Enter value"<<endl;
	cin>>value;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		temp1=head;
		while(temp1->next!=NULL)
		temp1=temp1->next;
		temp1->next=temp;
	}
}
void delete_beg()
{
	if(head==NULL)
	{
			cout<<"underflow"<<endl;
			exit(0);
	}
	else
	{
			Node *temp=head;
			head=head->next;
			temp->next=NULL;
			cout<<temp->data<<" Deleted"<<endl;
			free(temp);
	}
}
void delete_end()
{
	if(head==NULL)
	{
		cout<<"Underflow"<<endl;
		exit(0);
	}
	else if(head->next==NULL)
	head=NULL;
	else
	{
		Node *temp=head;
		Node *temp1=NULL;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=NULL;
		cout<<temp1->data<<" Deleted"<<endl;
		free(temp);
	}
}
void display()
{
	Node* temp;
	temp=head;
	cout<<"List is:"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	char ch;
	int v,s;
		cout<<"creation of list"<<endl;
	do
	{
        cout<<"Enter data"<<endl;
        cin>>v;
	    insert(v);
	    cout<<"Do you want to cintinue(y/Y)"<<endl;
	    cin>>ch;
}while(ch=='y' || ch=='Y');
do
{
cout<<"Enter value of oparation you want to do"<<endl;
cout<<"1.Insertion at beginning\n2.Insertion at End\n3.Deletion at Beginning\n4.Deletion at End\n5.Display\n6.Exit"<<endl;
cin>>s;
switch (s) {
	case 1:insert_beg();
	       break;
	case 2:insert_end();
	       break;
	case 3:delete_beg();
	       break;
	case 4:delete_end();
	       break;
	case 5:display();
	       break;
	case 6:exit(0);
	default:cout<<"Enter valide option"<<endl;
}
}while(1);
	return 0;
}
