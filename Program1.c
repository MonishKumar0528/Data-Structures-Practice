//Song playlist singly link list 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char song[100];
    struct Node*next;
};
struct Node*head=NULL;
struct Node*createNode(char song[]){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newnode->song,song);
    newnode->next=NULL;
    return newnode;
}
void addatbeg(char song[])
{
    struct Node*newnode=createNode(song);
    newnode->next=head;
    head=newnode;
    printf("%s added to the playlist\n",song);
}
void display(){
   if(head==0){
   printf("empty");}
   struct Node*temp=head;
   while(temp!=NULL){
       printf("%s ->",temp->song);
       temp=temp->next;
   }
   printf("NULL \n");
   
   }

int main()
{
    int choice;char songName[100];
    while(1){printf("choice1: Add song\nchoice2:display\nchoice3:exit\n");
    scanf("%d",&choice);
    getchar();
    switch(choice){
        case 1:
        printf("enter song\n");
        fgets(songName,sizeof(songName),stdin);
        songName[strcspn(songName, "\n")]='\0';
        addatbeg(songName);
        break;
        case 2:
        display();
        break;
        case 3:
        printf("exit");
        exit(0);
        default:
        printf("enter valid choice");
    }
}
    return 0;
}
