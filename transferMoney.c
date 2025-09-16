#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "customers_defines.h"
void TransferMoney(customers* head){
        customers*  Debitaccno,*Creditaccno;
        int amt,Dcnt,Ccnt,randNo=1000+rand()%1000;
        printf("for debited accno:\n");
        Debitaccno=FindingAccount(head);
        if(Debitaccno!=NULL){
                printf("for crediot accno\n");
                Creditaccno=FindingAccount(head);
                if(Creditaccno!=NULL){
                        Dcnt=Debitaccno->AccountTransactionsCount;
                        Ccnt=Creditaccno->AccountTransactionsCount;

                        printf("Enter amount to Debit:\n");
                        scanf("%d",&amt);
                        if((Debitaccno->AccountBal>=amt)&&((Debitaccno->AccountBal-amt)>=0)){
                                //printf("Acco Bal%f\n",Debitaccno->AccountBal);
                                Debitaccno->AccountBal=Debitaccno->AccountBal-amt;
                                printf("%d :Debited successfully\n",amt);
                        }
                        else{
                                printf("Insufficient Funds\n");
                                return;
                        }

                //      Debitaccno->AccountBal=Debitaccno->AccountBal-amt;
                        Creditaccno->AccountBal=Creditaccno->AccountBal+amt;
                        if(Dcnt>4){
                                memmove(Debitaccno->AccountTransaction+1,Debitaccno->AccountTransaction,\
                                                sizeof(transaction)*4);
                                Dcnt=0;
                        }
                        if(Ccnt>4){
                        memmove(Creditaccno->AccountTransaction+1,Creditaccno->AccountTransaction,                                      sizeof(transaction)*4);
                                Ccnt=0;
                        }

                        Debitaccno->AccountTransaction[Dcnt].transaction_id=randNo;
                        Debitaccno->AccountTransactionsCount+=1;
                        strcpy(Debitaccno->AccountTransaction[Dcnt].type_transaction,"Debit");
                        //Creditaccno->AccountBal=Creditaccno->AccountBal+amt;  
                        Creditaccno->AccountTransaction[Ccnt].transaction_id=randNo;
                        Creditaccno->AccountTransactionsCount+=1;
                        strcpy(Creditaccno->AccountTransaction[Ccnt].type_transaction,"Credit");

                }
                else{
                        printf("Credited account is Invalid\n");
                        return;
                }
        }
        else{
                printf("Debited account is Invalid\n");
                return;
        }
}

