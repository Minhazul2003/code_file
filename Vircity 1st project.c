#include<stdio.h>

int main(){
    printf("                                    MAKE A RESTURENT BILL\n");
    printf("                            ------------------------------------\n\n");

    printf("Item Code                   Item Name                   Item Price\n");
    printf("----------              -----------------            ----------------\n");
    printf("170                        Chicken Soup                     260\n");
    printf("171                        Chicken Corn Soup                200\n");
    printf("172                        Thai Special Soup                300\n");
    printf("260                        Chicken Fried Rice               250\n");
    printf("261                        Egg Fried Rice                   230\n");
    printf("262                        Prawn Fried Rice                 300\n");
    printf("310                        Beef Mutton Kabab                150\n");
    printf("311                        Chicken Grill                    340\n");
    printf("450                        Chicken Curry                    280\n");
    printf("451                        Beef Special Curry               320\n");
    printf("452                        Chicken Sizzling                 240\n");
    printf("453                        Beef Sizzling                    190\n");
    printf("\n---------------------------------------------------------------------------------\n\n");




//   input all needed
    int table_no;
    int n;
    printf("\n\nEnter Table No: ");
    scanf("%d", &table_no);
    printf("Enter Number of Items: ");
    scanf("%d", &n);
    int code[n];
    int Quantity[n];
    int i;
    for(i=0; i<n; i++){

        printf("Enter Item %d Code:", i+1);
        scanf("%d", &code[i]);
        int found=0;
        if( code[i]==170){
            found=1;
        }
        else if( code[i]==171){
            found=1;
        }
        else if( code[i]==172){
            found=1;
        }
        else if( code[i]==260){
            found=1;
        }
        else if( code[i]==261){
            found=1;
        }
        else if( code[i]==262){
            found=1;
        }
        else if( code[i]==310){
            found=1;
        }
        else if( code[i]==311){
            found=1;
        }
        else if( code[i]==450){
            found=1;
        }
        else if( code[i]==451){
            found=1;
        }
        else if( code[i]==452){
            found=1;
        }
        else if( code[i]==453){
            found=1;
        }
        else{
            printf("Item Code is not Found. Please try again.\n");
        }
        while(found!=1)
        {
            printf("Enter Item %d Code:", i+1);
            scanf("%d", &code[i]);
            if( code[i]==170){
                found=1;
            }
            else if( code[i]==171){
                found=1;
            }
            else if( code[i]==172){
                found=1;
            }
            else if( code[i]==260){
                found=1;
            }
            else if( code[i]==261){
                found=1;
            }
            else if( code[i]==262){
                found=1;
            }
            else if( code[i]==310){
                found=1;
            }
            else if( code[i]==311){
                found=1;
            }
            else if( code[i]==450){
                found=1;
            }
            else if( code[i]==451){
                found=1;
            }
            else if( code[i]==452){
                found=1;
            }
            else if( code[i]==453){
                found=1;
            }
            else{
                printf("Item Code is not Found. Please try again.\n");
            }
        }
            printf("Enter Item %d  Quantity:", i+1);
            scanf("%d", &Quantity[i]);


    }


//  Count price

    int price[n];
    int total_price=0;
    int j;
    for(j=0; j<n; j++){
            if( code[j]==170){
                price[j]= Quantity[j]*260;
                total_price=total_price+price[j];
            }
            else if( code[j]==171){
                price[j]= Quantity[j]*200;
                total_price=total_price+price[j];
            }
            else if( code[j]==172){
                price[j]= Quantity[j]*300;
                total_price=total_price+price[j];
            }
            else if( code[j]==260){
                price[j]= Quantity[j]*250;
                total_price=total_price+price[j];
            }
            else if( code[j]==261){
                price[j]= Quantity[j]*230;
                total_price=total_price+price[j];
            }
            else if( code[j]==262){
                price[j]= Quantity[j]*300;
                total_price=total_price+price[j];
            }
            else if( code[j]==310){
                price[j]= Quantity[j]*150;
                total_price=total_price+price[j];
            }
            else if( code[j]==311){
                price[j]= Quantity[j]*340;
                total_price=total_price+price[j];
            }
            else if( code[j]==450){
                price[j]= Quantity[j]*280;
                total_price=total_price+price[j];
            }
            else if( code[j]==451){
                price[j]= Quantity[j]*320;
                total_price=total_price+price[j];
            }
            else if( code[j]==452){
                price[j]= Quantity[j]*240;
                total_price=total_price+price[j];
            }
            else if( code[j]==453){
                price[j]= Quantity[j]*190;
                total_price=total_price+price[j];
            }

    }

//     Make Bill

    printf("\n\n");
    printf("                                       Bill Summary\n");
    printf("                            ------------------------------------\n");
    printf("                                       Table No : 0%d\n\n", table_no);
    printf("Item Code           Item Name             Item Price              Item Quantity              Total Price\n");
    int x;
    for(x=0; x<n; x++){

            if( code[x]==170){
                printf("  %d               Chicken Soup             260                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==171){
                printf("  %d               Chicken Corn Soup        200                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==172){
                printf("  %d               Thai Special Soup        300                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==260){
                printf("  %d               Chicken Fried Rice       250                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==261){
                printf("  %d               Egg Fried Rice           230                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==262){
                printf("  %d               Prawn Fried Rice         300                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==310){
                printf("  %d               Beef Mutton Kabab        150                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==311){
                printf("  %d               Chicken Grill            340                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==450){
                printf("  %d               Chicken Curry            280                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==451){
                printf("  %d               Beef Special Curry       320                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==452){
                printf("  %d               Chicken Sizzling         240                        %d                        %d", code[x], Quantity[x], price[x]);
            }
            else if( code[x]==453){
                printf("  %d               Beef Sizzling            190                        %d                        %d", code[x], Quantity[x], price[x]);
            }
        printf("\n");

    }
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("  Total                                                                                          %d\n", total_price);
    float tax=(float)total_price*0.07;
    printf("  Tax                                                                                            %.2f\n", tax);
    printf("---------------------------------------------------------------------------------------------------------\n");
    float net_total= (float)total_price + tax;
    printf("  Net Total(+tax)                                                                                %.2f\n\n", net_total);


    return 0;
}
