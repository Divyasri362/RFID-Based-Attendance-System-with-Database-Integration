#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "customers_defines.h"
customers* sync_file(customers* customer){
        customers v;
        int i,j;
        FILE* fp=NULL;
        fp=fopen("readme.txt","rb");


        if(fp==NULL){
                printf("file is not existed\n");
                return customer;
        }

        while(fread(&v,sizeof(customers)-8,1,fp)){
                customers *node=malloc(sizeof(customers));
                //
                strcpy(node->contactNumber,v.contactNumber);
                strcpy(node->AccountName,v.AccountName);
                node->AccountBal=v.AccountBal;
                node->AccountTransactionsCount=v.AccountTransactionsCount;
                node->AccountNumber=v.AccountNumber;
                //
                i=node->AccountTransactionsCount;
                for(j=i;j>0;j--){
                        node->AccountTransaction[j-1].transaction_id=v.AccountTransaction[j-1].transaction_id;
                        strcpy(node->AccountTransaction[j-1].type_transaction,v.AccountTransaction[j-1].type_transaction);
                }


                if(customer==NULL){
                        node->next=NULL;
                        customer=node;
                }
                else{
                        node->next=customer;
                        customer=node;
                }
        }
        return customer;
}

