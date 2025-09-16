#include<stdio.h>
#include "customers.h"
void WithdrawAmount(customers* head){
        int accno,amt;
        customers* temp=head;
        printf("Enter Account number 5XXX\n");
        scanf("%d",&accno);
        while(temp!=NULL){
                if(temp->AccountNumber==accno){
                        printf("Enter amount to Withdraw:\n");
                        scanf("%d",&amt);
                        if(temp->AccountBal>=amt){
                                temp->AccountBal=temp->AccountBal-amt;

                                printf("%d :Withdarw successfully\n",amt);
                                                        }
                        else{
                                printf("Insufficient Funds\n");
                        }
                        return;
                }
                temp=temp->next;
        }
        printf("Account Number not matched\n");
}

