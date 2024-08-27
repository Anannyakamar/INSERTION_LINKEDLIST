#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node*link;
};
   struct Node*head=NULL;
void insert_At_Beginning()
{      
int item;
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
      printf("Enter the data of Node: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->link = NULL;
    
   if(head==NULL){
   	head=ptr;
   }
   else{
   ptr->link=head;
   	head=ptr;
   }
   	printf("Insert at Beginning successful\n");
}
void insert_At_Ending()
{
int item;
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
struct Node*ptr1;
   printf("Enter the data of Node: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->link = NULL;
    
	if(ptr==NULL){
		printf("Node not created\n");
	}
	else if(head==NULL){
		head=ptr;
	}
	else if(head->link==NULL){
		head->link=ptr;
	}
	else{
	    ptr1=head;
		while(ptr1->link!=NULL){
		    ptr1=ptr1->link;
		}
    ptr1->link=ptr;
	}
	printf("Insert at Ending successful\n");
}
void insert_At_anyPosition(){
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
		struct Node*ptr1;
	int pos,item;
	printf("Enter the position where you want to insert: ");
	scanf("%d",&pos);
	  printf("Enter the data of Node: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->link = NULL;
    
	if(head==NULL){
		printf("Not Possible\n");
	}
	
	else if(pos==1){
	ptr->link=head;
		head=ptr;
	}
	else{
		int counter=1;
		ptr1=head;
		while((ptr1->link!=NULL) &&(counter<pos-1)){
			ptr1=ptr1->link;
			counter++;
			if(ptr->link==NULL && counter!=pos-1)
			{
				printf("Position not exist\n");
				break;
			}
		 ptr->link=ptr1->link;
		 ptr1->link=ptr;
		 printf("Insert at %d position successful\n",pos);
		}	
    }
}

void display()
{
    struct Node *ptr1 = head;
    while (ptr1 != NULL)
    {
        printf("%d -> ", ptr1->data);
        ptr1 = ptr1->link;
    }
    printf("NULL\n");
}
int main(){
do{
		int n;
printf("\nENTER YOUR CHOICE :\n\n1.INSERT AT BEGINNING\n2.INSERT AT ENDING\n3.INSERT AT ANY POSITION\n4.DISPLAY\n5.EXIT\n");
scanf("%d",&n);
switch(n){
	case 1:insert_At_Beginning();
                break;
	case 2:insert_At_Ending();
                break;
	case 3: insert_At_anyPosition();
	break;
	case 4: display();
	           break;
	case 5: exit(0);
	default:printf(" Wrong Input \n");
}
}while(1);
return 0;
}

