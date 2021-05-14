#include <iostream>

#include <string>

#include <windows.h>

#include <conio.h>

#include <stdlib.h>

using namespace std;

int main(){
	START:
	int withdraw, transfer, amount, AccNumber, transaction, Rescip, newBalance, type,newPin;
	char pin [4]; //to store pin
	string receipt, continu;
//	bool savings = true;
//	bool current = false;
	string AccName = "Mete Oyama"; //store account name
	double balance = 10000; //store account balance
	int card = 0;
	int seconds = 2000; //time in milliseconds for sleep
	
	cout << "Welcome to GTBANK ATM, Please Insert Your Card. (1)" << endl;
	cin >> card;
	
	if(card == 1){
		
		system("cls");
		cout << "Welcome, " << AccName << endl;
		Sleep(1000);
		system("cls");
	}
	
//	cin.get();


	
	cout << "Enter Your Pin: ";
	 int i = 0;
    char a;//a Temp char
    for(i=0;;)//infinite loop
    {
        a = getch();//stores char typed in a
        if((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z')||(a >= '0' && a <= '9'))
            //check if a is numeric or alphabet
        {
            pin[i]=a;//stores a in pass
            ++i;
            cout<<"*";
        }
        if(a == '\b' && i >= 1)//if user typed backspace
            //i should be greater than 1.
        {
            cout << "\b \b";//rub the character behind the cursor.
            --i;
        }
        if(a == '\r')//if enter is pressed
        {
            pin[i]='\0';//null means end of string.
            break;//break the loop
        }
    }
    
    if(i<=3)
    {
        cout<<"\nMinimum 4 digits needed.\nEnter Again" << endl;;
        getch();//It was not pausing :p
        system("cls");
        goto START;
    }
    
    LIST:
	system("cls");
	cout << "What Type of Transaction do you wish to do? " << endl;
	cout << "(1)Account Balance		" ;
	cout << "(4)Withdrawal" <<endl;;
	cout << "(2)Transfer			";
	cout << "(5)Open Account" << endl;
	cout << "(3)Pay Bills			";
	cout << "(6)New Pin" << endl;
	cin >> transaction;
	

	
	switch(transaction){
		
		case 1 :
			system("cls");
			cout << "Your Account Balance is: $" << balance << endl;
			Sleep(seconds);
			system("cls");
			cout << "Do You Wish To Continue? (y/n)" << endl;
			cin >> continu;
				if(continu == "y"){
				 	system("cls");
				 	goto LIST;
				 }else if (continu == "n"){
				 	system("cls");
				 	cout << "Thank You For Banking with us!!!" << endl;
				 	Sleep(1000);
				 	system("cls");
				 	cout << "Take Your Card" << endl;
				 	card--;
				 	system("exit");
				 }
			
			break;
			
		case 2 :
			system("cls");
			cout << "Enter Rescipients Account Number" << endl;
			cin >> Rescip;
			cout << "Enter Amount" << endl;
			cin >> amount;
			system("cls");
			cout << "Transaction Processing..." << endl;
			Sleep(seconds);
			system("cls");
			cout << "Transaction Successful" << endl;
			
			newBalance = balance - amount;
			
			Sleep(1000);
			system("cls");
			cout << "Your New Balance is: $" << newBalance << endl;
			Sleep(seconds);
			system("cls");
			cout << "Do You Wish To Continue? (y/n)" << endl;
			cin >> continu;
				if(continu == "y"){
				 	system("cls");
				 	goto LIST;
				 }else if (continu == "n"){
				 	system("cls");
				 	cout << "Thank You For Banking with us!!!" << endl;
				 	Sleep(1000);
				 	system("cls");
				 	cout << "Take Your Card" << endl;
				 	card--;
				 	system("exit");
				 }
			break;
		
		case 3 :
			system("cls");
			cout << "We're Sorry, this Service is temporarily Unavailable" << endl;
			Sleep(seconds);
			system("cls");
			cout << "Do You Wish To Continue? (y/n)" << endl;
			cin >> continu;
				if(continu == "y"){
				 	system("cls");
				 	goto LIST;
				 }else if (continu == "n"){
				 	system("cls");
				 	cout << "Thank You For Banking with us!!!" << endl;
				 	Sleep(1000);
				 	system("cls");
				 	cout << "Take Your Card" << endl;
				 	card--;
				 	system("exit");
				 }
			break;
			
		case 4 :
			system("cls");
			cout << "What Account Type? " << endl;
			cout << "(1)Current" << endl;
			cout << "(2)Savings" << endl;
			cout << "(3)Other" << endl;
			cin >> type;
			if(type == 1 || type == 2 || type == 3){
				system("cls");
				cout << "Do you want a Receipt? (y/n)" << endl;
				cin >> receipt;
				 if (receipt == "y" || receipt == "Y" || receipt == "n" || receipt == "N"){
				 	system("cls");
				 	TRANS:
				 	cout << "How Much do you wish to withdraw?" << endl;
				 	cout << "(1)$1000			" ;
				 	cout << "(5)$20000" << endl;
				 	cout << "(2)$2000			" ;
				 	cout << "(6)$30000" << endl;
				 	cout << "(3)$5000			" ; 
				 	cout << "(7)$50000" << endl;
				 	cout << "(4)$10000			";
				 	cout << "(8)other" << endl;
				 	cin >> withdraw;
				 	
				 
				 	
				 	switch(withdraw){
				 		
				 		case 1 :
				 			
				 			if(balance < 1000){
				 				system("cls");
				 				cout << "Insufficient Balance!" << endl;
				 				cout << "Available Balance: $" << balance << endl;
				 				Sleep(1000);
				 				system("cls");
				 				goto TRANS;
							 }else{
								cout << "Transaction Processing..." << endl;
								Sleep(seconds);
								system("cls");
				 				cout << "Transaction Successful!" << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Take Your Cash" << endl;
				 				newBalance = balance - 1000;
				 				cout << "$1000 Deducted. New Balance is: " << newBalance << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Do You Wish To Continue?(y/n)" << endl;
				 				cin >> continu;
				 			if(continu == "y"){
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			
				 			}
				 			break;
				 			
				 		case 2 :
				 			
				 			if(balance < 2000){
				 				system("cls");
				 				cout << "Insufficient Balance!" << endl;
				 				cout << "Available Balance: $" << balance << endl;
				 				Sleep(1000);
				 				system("cls");
				 				goto TRANS;
							 }else{
								cout << "Transaction Processing..." << endl;
								Sleep(seconds);
				 				system("cls");
				 				cout << "Transaction Successful!" << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				newBalance = balance - 2000;
				 				cout << "$2000 Deducted. New Balance is: " << newBalance << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Do You Wish To Continue?(y/n)" << endl;
				 				cin >> continu;
				 			if(continu == "y"){
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			
				 		}
				 		
				 		break;
				 		
				 		case 3 :
				 			
				 			if(balance < 5000){
				 				system("cls");
				 				cout << "Insufficient Balance!" << endl;
				 				cout << "Available Balance: $" << balance << endl;
				 				Sleep(1000);
				 				system("cls");
				 				goto TRANS;
							 }else{
								cout << "Transaction Processing..." << endl;
								Sleep(seconds);
				 				system("cls");
				 				cout << "Transaction Successful!" << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				newBalance = balance - 5000;
				 				cout << "$5000 Deducted. New Balance is: " << newBalance << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Do You Wish To Continue?(y/n)" << endl;
				 				cin >> continu;
				 			if(continu == "y"){
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			
				 		}
				 		
				 		break;
				 		
				 		case 4 :
				 			
				 			if(balance < 10000){
				 				system("cls");
				 				cout << "Insufficient Balance!" << endl;
				 				cout << "Available Balance: $" << balance << endl;
				 				Sleep(1000);
				 				system("cls");
				 				goto TRANS;
							 }else{
								cout << "Transaction Processing..." << endl;
								Sleep(seconds);
				 				system("cls");
				 				cout << "Transaction Successful!" << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				newBalance = balance - 10000;
				 				cout << "$10000 Deducted. New Balance is: " << newBalance << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Do You Wish To Continue?(y/n)" << endl;
				 				cin >> continu;
				 			if(continu == "y"){
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			
				 		}
				 		break;
				 		
				 		case 5 :
				 			
				 			if(balance < 20000){
				 				system("cls");
				 				cout << "Insufficient Balance!" << endl;
				 				cout << "Available Balance: $" << balance << endl;
				 				Sleep(1000);
				 				system("cls");
				 				goto TRANS;
							 }else{
							 	cout << "Transaction Processing..." << endl;
								Sleep(seconds);
				 				system("cls");
				 				cout << "Transaction Successful!" << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				newBalance = balance - 20000;
				 				cout << "$20000 Deducted. New Balance is: " << newBalance << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Do You Wish To Continue?(y/n)" << endl;
				 				cin >> continu;
				 			if(continu == "y"){
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			
				 		}
				 		break;
				 		
				 		case 6 :
				 			
				 			if(balance < 30000){
				 				system("cls");
				 				cout << "Insufficient Balance!" << endl;
				 				cout << "Available Balance: $" << balance << endl;
				 				Sleep(1000);
				 				system("cls");
				 				goto TRANS;
							 }else{
							 	cout << "Transaction Processing..." << endl;
								Sleep(seconds);
				 				system("cls");
				 				cout << "Transaction Successful!" << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				newBalance = balance - 30000;
				 				cout << "$30000 Deducted. New Balance is: " << newBalance << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Do You Wish To Continue?(y/n)" << endl;
				 				cin >> continu;
				 			if(continu == "y"){
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			
				 		}
				 		break;
				 		
				 		case 7 :
				 			
				 			if(balance < 50000){
				 				system("cls");
				 				cout << "Insufficient Balance!" << endl;
				 				cout << "Available Balance: $" << balance << endl;
				 				Sleep(1000);
				 				system("cls");
				 				goto TRANS;
							 }else{
							 	cout << "Transaction Processing..." << endl;
								Sleep(seconds);
				 				system("cls");
				 				cout << "Transaction Successful!" << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				newBalance = balance - 50000;
				 				cout << "$50000 Deducted. New Balance is: " << newBalance << endl;
				 				Sleep(seconds);
				 				system("cls");
				 				cout << "Do You Wish To Continue? (y/n)" << endl;
				 				cin >> continu;
				 			if(continu == "y"){
				 				Sleep(1000);
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			
				 		}
				 		
				 		break;
				 		
				 		case 8 :
				 			system("cls");
				 			cout << "Enter Amount: " << endl;
				 			cin >> amount ;
				 			Sleep(seconds);
				 			system("cls");
				 			cout << "Transaction Processing..." << endl;
							Sleep(seconds);
				 			system("cls");
				 			cout << "Transaction Successful!" << endl;
				 			newBalance = balance - amount;
				 			cout << "$" << amount << " Deducted. New Balance is: " << newBalance << endl;
				 			Sleep(seconds);
				 			system("cls");
				 			cout << "Do You Wish To Continue? (y/n)" << endl;
				 			cin >> continu;
				 			if(continu == "y"){
				 				system("cls");
				 				goto LIST;
							 }else if (continu == "n"){
				 				system("cls");
				 				cout << "Thank You For Banking with us!!!" << endl;
				 				Sleep(1000);
				 				system("cls");
				 				cout << "Take Your Card" << endl;
				 				card--;
				 				system("exit");
				 			}
				 			break;
				 			
				 		default :
				 			system("cls");
				 			cout << "Invalid Input" << endl;
				 			Sleep(seconds);
				 			system("cls");
				 			goto LIST;
				 			break;
					 }
				 }
			}
			break;
			
		case 5 :
			system("cls");
			cout << "Go to the Nearest GTBANK to open your account" << endl;
				Sleep(seconds);
				 			system("cls");
				 			cout << "Do You Wish To Continue? (y/n)" << endl;
				 			cin >> continu;
				 			if(continu == "y" || continu == "n"){
				 				system("cls");
				 				goto LIST;
							 }
			break;
			
		case 6 :
			system("cls");
			cout << "Enter Old pin" << endl;
			cin >> pin;
			system("cls");
			cout << "Enter New Pin" << endl;
			cin >> newPin;
			system("cls");
			cout << "New Pin Created!" << endl;
			Sleep(1000);
			system("cls");
			cout << "Your new pin is: " << newPin << endl;
			
			Sleep(seconds);
			system("cls");
			cout << "Do You Wish To Continue? (y/n)" << endl;
			cin >> continu;
				if(continu == "y" || continu == "n"){
				 	system("cls");
				 	goto LIST;
				 }
			break;
			
		
	}
	
	return 0;
}

//project Author : Mete Odey Oyama
//Project Date : 4/22/21 9:14am
//High_Rise4
