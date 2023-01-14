//C K2Soft
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int pin=0000, card, biometric,opp,new_balance,withdrawal,account_balance=10000000,i,Exit,limit=3;
    char c,y,n;
    printf("------------------------------------------------------");
    printf("\n----------WELCOME TO K2SOFT BANKING SYSTEM------------");
    printf("\n------------------------------------------------------");
    printf("\nAre you a K2Soft Customer? [y/n]: ");
    scanf("%c",&c);
    if(c=='n'){
        printf("Register with K2SOFT and get 10% Bonus and or Discount on all transactions");
        printf("\nEnter Card: ");
        scanf("%d",&card);
        printf("Enter Pin: ");
        scanf("%d",&pin);
        for(i=0; i<3; i++){
                    if(pin==0000){
        printf("Enter Withdrawal Amount: ");
        scanf("%dXAF",&withdrawal);
        new_balance=account_balance-withdrawal;
        if(withdrawal > account_balance){
            printf("\nInsufficient balance, withdrawal unsuccessful");
        }
        else if(withdrawal <= account_balance){
            printf("\nWithdrawal Successful");
        }
        printf("\nYou have Withdrawn: %dXAF\n New Account balance: %dXAF",withdrawal,new_balance);
        printf("\nThank You For Trusting K2SOFT");
        break;
        }
                    do{
                        printf("Incorrect Pin!!!\ntry again: ");
                        scanf("%d",&pin);
                        i+=1;
                    }while(i<limit);
            }printf("\nyour card has been swallowed! thief!!!!!! You are being watched!");exit(0);
    }
    do{
        printf("\nWelcome Dear K2SOFT Customer");
        printf("\n0. Exit");
        printf("\n1. Card + Pin");
        printf("\n2. Card + Biometric");
        printf("\nSelect Withdrawal option[1/2]: ");
        scanf("%d",&opp);

        switch(opp){
    case 0:
            printf("\nExit");
            printf("\nThank You for Banking With K2SOFT");
            printf("\nPlease, Visit www.K2SOFT.com for more Info and Updates");
            exit(0);
    case 1:
        printf("Card + Pin Selected");
        printf("\nEnter Card: ");
        scanf("%d",&card);
        printf("Enter Pin: ");
        scanf("%d",&pin);
            for(i=0; i<3; i++){
                    if(pin==0000){
        printf("Enter Withdrawal Amount: ");
        scanf("%dXAF",&withdrawal);
        new_balance=account_balance-withdrawal;
        if(withdrawal > account_balance){
            printf("\nInsufficient balance, withdrawal unsuccessful");
        }
        else if(withdrawal <= account_balance){
            printf("\nWithdrawal Successful");
        }
        printf("\nYou have Withdrawn: %dXAF\n New Account balance: %dXAF",withdrawal,new_balance);
        printf("\nThank You For Trusting K2SOFT");
        break;}
                    do{
                        printf("Incorrect Pin!!!\ntry again: ");
                        scanf("%d",&pin);
                        i+=1;
                    }while(i<limit);
            }
            printf("\nyour card has been swallowed! thief!!!!!! You are being watched!");exit(0);


    case 2:
        printf("\nPin + Biometric Selected");
        printf("\nEnter card: ");
        scanf("%d",&card);
        printf("Initiate Biometric Scan: ");
        scanf("%d",&biometric);
        printf("Enter Withdrawal Amount: ");
        scanf("%dXAF",&withdrawal);
        new_balance=account_balance-withdrawal;
        if(withdrawal > account_balance){
            printf("\nInsufficient balance, withdrawal unsuccessful");
        }
        else if(withdrawal <= account_balance){
            printf("\nWithdrawal Successful");
        }
        printf("\nYou have withdrawn: %dXAF\n New Account Balance: %dXAF",withdrawal,new_balance);
        printf("\nThank You For Trusting K2SOFT");exit(0);
        break;

    default:
        printf("\nQuit Screwing Around BOZO!!!");
        break;
        }
    }
    while(c=='y');
}

