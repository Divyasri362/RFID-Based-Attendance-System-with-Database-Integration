Bank.exe:createaccount.o depositamount.o historyofTransactions.o syncFile.o Banking.o displaydetails.o transferMoney.o findingAccount.o saveFile.o withdrawAmount.o 
	gcc createaccount.o depositamount.o historyofTransactions.o syncFile.o Banking.o displaydetails.o transferMoney.o findingAccount.o saveFile.o withdrawAmount.o -o Bank.exe

createaccount.o:createaccount.c
	gcc -c createaccount.c

depositamount.o:depositamount.c
	gcc -c depositamount.c

historyofTransactions.o:historyofTransactions.c
	gcc -c historyofTransactions.c

syncFile.o:syncFile.c
	gcc -c syncFile.c

Banking.o:Banking.c
	gcc -c Banking.c

displaydetails.o:displaydetails.c
	gcc -c displaydetails.c

transferMoney.o:transferMoney.c
	gcc -c transferMoney.c

findingAccount.o:findingAccount.c
	gcc -c findingAccount.c

saveFile.o:saveFile.c
	gcc -c saveFile.c

withdrawAmount.o:withdrawAmount.c
	gcc -c withdrawAmount.c
