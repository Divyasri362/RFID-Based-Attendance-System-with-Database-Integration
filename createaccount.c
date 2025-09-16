#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
#include "customers.h"
customers* CreateAccount(customers *head){
        int randNum;
        char str[100];
        char name[20];
        customers* temp=head,*temp1=head;
        customers *node=malloc(sizeof(customers));
        printf("enter  Holder name \n");
        __fpurge(stdin);
//      printf("enter  Holder name \n");
        fgets(name,20,stdin);
        if(name[strlen(name)-1]=='\n'){
                name[strlen(name)-1]='\0';
        }

L2:printf("enter contact number\n");
        __fpurge(stdin);
        fgets(str,100,stdin);
        if(str[strlen(str)-1]=='\n'){
                str[strlen(str)-1]='\0';
	}
        if(strlen(str)!=10){
                printf("Invalid contact Number\n");
                goto L2;
        }
        for(int i=0;i<10;i++){
                if((str[i]>='0')&&(str[i]<='9'));
                else
                {
                        printf("Invalid contact Number\n");
                        goto L2;
                }
                 //printf("%d",str[i]);
        }
	temp=head;
	while(temp!=NULL){
                        if(strcmp(temp->contactNumber,str)==0){
                                printf("sorry number isAlready exist\n");
				goto L2;
                        }
                        //node->AccountNumber=randNum;
                       temp=temp->next;
        }
        strncpy(node->contactNumber,str,10);
        strcpy(node->AccountName,name);
L1: randNum=5000+rand()%1000;
        node->AccountBal=0;
        node->AccountTransactionsCount=0;
        if(head==NULL){
                node->AccountNumber=randNum;
                node->next=NULL;
                head=node;
                temp=head;
        }
        else{
                while(head!=NULL){
                        if(head->AccountNumber==randNum){
                                head=temp1;
                                goto L1;
                        }
                        //node->AccountNumber=randNum;
                        head=head->next;
                }
                node->AccountNumber=randNum;
                node->next=temp1;
                temp1=node;
        }
        return temp1;
}

