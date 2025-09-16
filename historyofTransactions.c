#include<stdio.h>
#include "customers_defines.h"
void historyTransaction(customers* head){
        customers* Debitaccno;
        int i,j;
        //printf("Enter accno:\n");
        Debitaccno=FindingAccount(head);
        if(Debitaccno!=NULL){
                i=Debitaccno->AccountTransactionsCount;
                if(i>5){
                        i=5;
                }
                for(j=i;j>0;j--){
                        printf("%-8d  %s\n",Debitaccno->AccountTransaction[j-1].transaction_id
                                        ,Debitaccno->AccountTransaction[j-1].type_transaction);
                }
        }
        if(i==0){
                printf("No Transactions Done\n");
        }
}

