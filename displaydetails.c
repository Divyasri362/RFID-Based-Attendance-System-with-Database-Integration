#include<stdio.h>
#include "customers.h"
void DisplayDetails(customers* node){
        while(node!=NULL){
         printf("%-6d %-22s %-12.2f %-3d %s\n",node->AccountNumber,node-> AccountName,node->AccountBal,node->AccountTransactionsCount,node->contactNumber);
         node=node->next;
        }
}

