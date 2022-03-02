// Program to implement SSL operations
// Roll number  :     19QM1A0557
// NAME         :     TARUN KOTAGIRI

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void append();
int length();
void addAtBeginning();
void addAtLocation();
void display();
void delete();
                           
struct node{
    int data;
    struct node* next;
};

struct node* root = NULL;

void main(){

    int ch, len;

    while(1){
        clrscr();
        puts("\n--------------------------------------------------------------------------");
        puts("Single linked list operations");
        puts("1. Append");
        puts("2. Add at beginning");
        puts("3. Add at a location");
        puts("4. Length");
        puts("5. Display");
        puts("6. Delete");
        puts("7. EXIT");
        puts("--------------------------------------------------------------------------");

        puts("Enter your choice: ");
        scanf("%d", &ch);
    

    switch (ch)
    {
    case 1:
        append();
        break;
    case 2:
        addAtBeginning();
        break;
    case 3:
        addAtLocation();
        break;
    case 4:
        len = length();
        printf("The length of current linked list is %d",len);
        break;
    case 5:
        display();
        break;
    case 6:
        delete();
        break;
    case 7:
        exit(1);
        break;
    
    default:
        puts("Invalid Input");
        break;
    }

    }

}

void append(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    puts("Enter node data:");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (root == NULL)
        root = temp;

    else{
        struct node* t = root;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = temp;

    }
}

int length(){
    struct node * temp = root;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}   

void addAtBeginning(){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    puts("Enter node data:");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(root == NULL)
    root = temp;
    else{
        temp->next = root;
        root = temp;
    }
}

void addAtLocation(){
    struct node *temp, *t;
    int loc, len, i =1;
    
    puts("Enter the location:");
    scanf("%d", &loc);
    len = length();
    if(loc > len){
        printf("Invalid Location!");
        printf("Currently the linked list has %d locations", len);
    } else{
        t = root;
        while(i < loc - 1){
            t = t->next;
            i++;
        }

            temp =  (struct node*)malloc(sizeof(struct node));
        puts("Enter node data: ");
        scanf("%d", &temp->data);
        temp->next = t->next;
        t->next = temp;
        
    }
    
}

void display(){
    if (root == NULL)
    {
        printf("Linked list does not exist!\n");
    } else{
        struct node* temp = root;
        while(temp != NULL){
            printf("%d->", temp->data);
            temp = temp->next;
        }
    }
        

}

void delete(){
    struct node* temp;
    int loc;
    puts("Enter location to delete:");
    scanf("%d", &loc);
    if(loc > length()){
        puts("Invalid Location");
    } else if(loc == 1){
        temp = root;
        root = temp->next;
        temp->next = NULL;
        free(temp);
        printf("Successfully deleted the first node");
    } else{
        struct node *p, *q;
        p = root;
        int i = 1;
        while(i < loc - 1){
            p = p->next;
            i++;
        }
        q = p->next;
        p->next = q->next;
        q->next = NULL;
        free(q);
    }
}