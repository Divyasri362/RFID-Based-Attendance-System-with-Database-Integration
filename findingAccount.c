#include<stdio.h>
#include "customers.h"
customers* FindingAccount(customers* head){
        int accno;
        customers* temp=head;
        printf("Enter Account number 5XXX\n");
        scanf("%d",&accno);
        while(temp!=NULL){
                if(temp->AccountNumber==accno){
                        printf("Account is Existed\n");
                        return temp;
                }
                temp=temp->next;
        }
        return NULL;

}

