typedef struct Transaction{
        int transaction_id;
        char type_transaction[10];
}transaction;

typedef struct Customerdetails{
        int AccountNumber;
        char AccountName[20];
         long int  AccountBal;
        char contactNumber[11];
        int AccountTransactionsCount;
        transaction AccountTransaction[5];
        struct Customerdetails *next;
}customers;     

