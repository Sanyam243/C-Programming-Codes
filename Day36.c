

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

int main(){
    bool isrunning = true;
    while(isrunning){
        int choice;
        int choice1;
        float price[20]={1.10,1.20,2.10,1.50,1.20,2.30,2.50,2.30,0.90,2.30,1.10,3.00,1.30,1.20,2.10,2.00,0.80,1.00,1.80,1.10};
        float weight[]={};
        int noofdesireditem;
        int serial[]={};


        printf("\t~~Welcome to the Mall~~\n");
        printf("please choose a action\n");

        printf("\t~~customer's section~~\n");
        printf("1. buy\n");
        printf("2. just searching\n");

        printf("\n");

        printf("\t~~shopkeeper section~~\n");
        printf("3. shopkeeper login\n");

        printf("\n");

        printf("please enter your choice:");
        scanf("%d", &choice);

        //tree making
        if(choice==1){
            printf("what to buy\n");
            printf("1.  groceries\n");
            printf("2.  stationary\n");
            printf("3.  clothing\n");
            printf("4.  hardware\n");
            printf("5.  electronic store\n");
            printf("6.  food and house delivery\n");
            printf("7.  toiletries\n");
            printf("8.  drug store\n");
            printf("9.  kitchenware\n");
            printf("10. furniture and bedding\n");
            printf("11. movies and shows\n");
            printf("12. toys and showcase\n");
            printf("13. ATM and banking services\n");


            printf("\nplease enter your choice: ");
            scanf("%d", &choice1);

            if(choice1==1){
                printf("\t\t      GROCERIES\n");
                printf("\t\t~~VEGETABLE SECTION~~\n");
                printf("1.  Carrot      =$1.10/kg\n");
                printf("2.  Potato      =$1.20/kg\n");
                printf("3.  Onion       =$2.10/kg\n");
                printf("4.  Tomato      =$1.50/kg\n");
                printf("5.  Spinach     =$1.20/kg\n");
                printf("6.  Cucumber    =$2.30/kg\n");
                printf("7.  Cauliflower =$2.50/kg\n");
                printf("8.  Cabbage     =$2.30/kg\n");
                printf("9.  Peas        =$0.90/kg\n");
                printf("10. Broccoli    =$2.30/kg\n");
                printf("11. Bell Pepper =$1.10/kg\n");
                printf("12. Pumpkin     =$3.00/piece\n");
                printf("13. Radish      =$1.30/kg\n");
                printf("14. Beetroot    =$1.20/kg\n");
                printf("15. Eggplant    =$2.10/kg\n");
                printf("16. Lettuce     =$2.00/kg\n");
                printf("17. Garlic      =$0.80/kg\n");
                printf("18. Ginger      =$1.00/kg\n");
                printf("19. Corn        =$1.80/kg\n");
                printf("20. Green Beans =$1.10/kg\n");

                printf("\nhow many items you want to purchase: ");
                scanf("%d", &noofdesireditem);

                float cost;
                int total;
                int Cs;

                int quantity[noofdesireditem];
                int size = sizeof(quantity)/sizeof(quantity[0]);
                for(int i=0;i<size;i++){
                    printf("please enter serial number of item: ");
                    scanf("%d", &serial[i]);

                    printf("please enter the weight you want to buy of the desired item: ");
                    scanf("%d", &weight[i]);

                    Cs = price[serial[i]-1];

                    cost += Cs * weight[i];

                    if(i==size){
                        printf("%.2f", cost);
                        break;
                    }
                    else{
                        continue;
                    }

                }
            }

        }

    else if (choice==2){
        printf("you chose 2");
        }

    else if(choice==3){
        printf("you chose 3");
        }

    }
}