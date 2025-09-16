#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "customers.h"
#include<stdio_ext.h>
void DepositAmount(customers* head){
        int accno;
	char str[20];
	long int amt;
        customers* temp=head;
        printf("Enter Account number 5XXX\n");
        scanf("%d",&accno);
	__fpurge(stdin);
        while(temp!=NULL){
                if(temp->AccountNumber==accno){
                        printf("Enter amount to Deposit:\n");
                        fgets(str,20,stdin);
			if(str[strlen(str)-1]=='\n'){
                		str[strlen(str)-1]='\0';
		        }
			amt=atoi(str);

                        temp->AccountBal=temp->AccountBal+amt;
                        //temp->AccountTransactionsCount+=1;
                        return;
                }
                temp=temp->next;
        }
        printf("Account Number not matched\n");
}

