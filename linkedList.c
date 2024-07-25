#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *head = NULL;

void lastAppend(int num) {
	struct node *newNode = (struct node*) malloc(sizeof(struct node));
	newNode->data = num;
	newNode->link = NULL;
    
	if(head == NULL) {
    	head = newNode;
	}
    
	else {
    	struct node *curr;
    	curr = head;
   	 
   	 
    	while(curr->link != NULL) {
        	curr = curr->link;
    	}
    	curr->link = newNode;
	}
}


void traverse() {
	struct node *newCurr; //traversing pointer
	newCurr = head; //assigning reference to head or root, for traversing
    
	if(head == NULL) {
    	head = newCurr;
	}
    
	else {
    	while(newCurr != NULL) {
        	printf("%d ----> ", newCurr->data);
        	newCurr = newCurr->link;
    	}
	}
	printf("NULL");
}


void deleteAny() {
	struct node *temp; //similarly, a traversing pointer
	int i = 0, pos;
    
	if(head == NULL) {
    	head = temp;
	}
    
	else {
	printf("\nEnter the index of the element to be deleted: ");
	scanf("%d", &pos);
    
	struct node *deletionNode = (struct node*) malloc(sizeof(struct node)); //dynamic deletion pointer to specify the deletion node
    
	while(i < pos) {
    	temp = temp->link;
    	i++;
	}
    
	deletionNode = temp->link;
    
	temp->link = deletionNode->link;
	free(deletionNode);
    }
}


int main() {
	int choice, reply;
    
	do {
    	printf("\n1 to append at last, \n2 to traverse, or \n3 to delete any element from linked list");
    	
    	printf("\n\nEnter your choice from above: ");
    	scanf("%d", &choice);
   	 
    	switch(choice) {
        	case 1:
            	int value;
            	printf("\nEnter the value to be appended: ");
            	scanf("%d", &value);
            	lastAppend(value);
            	break;
           	 
        	case 2:
            	traverse();
            	break;
           	 
        	case 3:
            	deleteAny();
            	break;
           	 
        	default:
            	printf("\nInvalid entry..!");
            	break;
    	}
   	 
    	printf("\nWould you like to continue? (0/1): ");
    	scanf("%d", &reply);
	}while(reply == 1);
    
return 0;
}
