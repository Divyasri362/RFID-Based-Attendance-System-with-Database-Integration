#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>

//#include "customers.h"
#include "customers_defines.h"

int main(){
        customers *customer=NULL;
        customer=sync_file(customer);
        char option;
        while(1){
		printf("--------------MENU------------\n");
                printf("c\\C: Create account\n");printf("e\\E:DisplayAll Account details\n");
		printf("d\\D:DepositAmount\n");printf("w\\W:withdraw Amount\n");
                printf("f\\F:findAccount\n");
		printf("t\\T:Transfermoney\n");printf("h\\H:history of transactions\n");
		printf("s\\S:save\n");
		printf("q\\Q:Quit from app\n");
                __fpurge(stdin);
		
                option=getchar();
		if(option>=65&&option<=90)
			option^=32;

                switch(option){
                        case 'c':customer=CreateAccount(customer);
                                 break;
                        case 'e':DisplayDetails(customer);
                                 break;
                        case 'd':DepositAmount(customer);
                                 break;
                        case 'w':WithdrawAmount(customer);
                                 break;
                        case 't':TransferMoney(customer);
                                 break;
                        case 'f':FindingAccount(customer);
                                 break;
                        case 'h':historyTransaction(customer);
                                 break;
                        case 's':save(customer);break;
			case 'q':exit(0);

                }
        }
}

