#include<stdio.h>
#include<conio.h>
int main(){
    int aracin[5][3]={{000001,5342,2000},{000002,8632,30000},{000003,1323,4500},{000004,2312,50000},{000005,6728,3000}};
    int accno,pass,op,amt;
    printf("ENTER ACCOUNT NO");
    scanf("%d",&accno);
    for(int i=0;i<5;i++){
        if(aracin[i][0]==accno){
            printf("ENTER PASSWORD");
            scanf("%d",&pass);
            if(aracin[i][1]==pass){
                printf("PLEASE SELECT YOUR OPTION\n 1.WITHDRAW AMOUNT \n 2.DEPOSIT AMOUNT \n 3.CHECK BALANCE \n 4.EXIT");
                scanf("%d",&op);
                switch(op){
                    case 1:
                        printf("PLEASE ENTER YOUR AMOUNT TO WITHDRAW");
                        scanf("%d",&amt);
                        aracin[i][2]-=amt;
                        printf("\nAMOUNT WITHDRAWN");
                        printf("\n REMAINING BALANCE IN YOUR ACCOUNT:%d",aracin[i][2]);
                        break;
                    case 2:
                        printf("PLEASE ENTER YOUR AMOUNT TO DEPOSIT");
                        scanf("%d",&amt);
                        aracin[i][2]+=amt;
                        printf("\nAMOUNT DEPOSITED");
                        printf("\n REMAINING BALANCE IN YOUR ACCOUNT:%d",aracin[i][2]);
                        break;
                    case 3:
                        printf("\n REMAINING BALANCE IN YOUR ACCOUNT:%d",aracin[i][2]);
                        break;
                    case 4:
                        printf("THANK YOU FOR YOUR TIME");
                        break;
                }
            }
            else{
                    printf("WRONG PASSWORD");
                    break;
                }
        }
    }
    return 0;
}
