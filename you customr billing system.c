#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void design()
{
    system("color 30");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t*****************************************************\n");
    printf("\t\t\t\t\t     --!Welcome to my shop!--\n\n\n");
    printf("\t\t\t\t\t       --!HAPPY SHOPPING :)!--\n\n");
    printf("\t\t\t\t*****************************************************\n\n\n");
}
int main()
{
    design();
    sleep(3);
    system("cls");
    system("color 80");
    time_t T;
    time(&T);
    srand(time(NULL));
    char name[50];
    int phone_number;
    unsigned int customer_id= rand();

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    FILE *record;
    printf("\n\t\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb   AMINUL SURER MARKET  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");

    printf ("\n\t\t\t\t\t\t-----------------------\n");
    printf ("\t\t\t\t\t\t  CUSTOMER'S INVOICE \n");
    printf ("\t\t\t\t\t\t-----------------------\n\n\n");

    printf ("Customer Details-\n\n");
    printf("Date:%s\n\n",ctime(&T));
    printf ("Customer Name : ");
    gets(name);
    printf ("Customer Number : ");
    scanf ("%d", &phone_number);
    printf ("Customer Id : ");
    printf ("%d\n",customer_id);

    printf("------------------------\n");

    printf("COSMETICS:\n\n");

    printf("Body Soap ( Taka 10 ) : ");
    scanf ("%d", &body_soap);
    printf ("Hair Cream ( Taka 25 ) : ");
    scanf ("%d", &hair_cream);
    printf ("Body Spray ( Taka 50 ) : ");
    scanf ("%d", &body_spray);
    printf("Face wash ( Taka 50 ) : ");
    scanf ("%d", &hair_spray);

    printf("------------------------\n");

    printf("GROCERIES:\n\n");

    printf("Sugar ( Taka 100 ) : ");
    scanf("%d", &sugar);
    printf("Tea ( Taka 15 ) : ");
    scanf("%d", &tea);
    printf("Coffee ( Taka 50 ) : ");
    scanf("%d", &coffee);
    printf("Rice ( Taka 150 ) : ");
    scanf("%d", &rice);
    printf("Wheat ( Taka 160 ) : ");
    scanf("%d", &wheat);

    printf("------------------------\n");

    printf("BEVERAGES:\n\n");

    printf("PEPSI ( Taka 30 ) : ");
    scanf("%d", &pepsi);
    printf("SPRITE ( Taka 35 ) : ");
    scanf("%d", &sprite);
    printf("COKE ( Taka 30 ) : ");
    scanf("%d", &coke);
    printf("MOJO ( Taka 25 ) : ");
    scanf("%d", &mojitos);
    printf("PRAN UP ( Taka 35 ) : ");
    scanf("%d", &thumbs_up);

    printf("------------------------\n");

    printf("Here is your all shopping products:--\n\n");

    int boso;
    int hc;
    int hs;
    int bosp;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    cosmetics_total = boso + hc + hs + bosp;

    printf("Body Soap : ");
    printf("%d Taka\n", boso);
    printf("Hair Cream : ");
    printf("%d Taka\n", hc);
    printf("Face wash : ");
    printf("%d Taka\n", hs);
    printf("Body Spray : ");
    printf("%d Taka\n", bosp);
    printf("Total Cosmetics Price : ");
    printf("%d Taka\n", cosmetics_total);

    printf("------------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s = 100*sugar;
    t = 15*tea;
    c = 50*coffee;
    r = 150*rice;
    w = 160*wheat;
    grocery_total = s+t+c+r+w;

    printf ("Sugar : ");
    printf ("%d Taka\n", s);
    printf("Tea : ");
    printf("%d Taka\n", t);
    printf ("Coffee : ");
    printf ("%d Taka\n", c);
    printf("Rice : ");
    printf("%d Taka\n", r);
    printf("Wheat : ");
    printf("%d Taka\n", w);
    printf ("Total Grocery Price : ");
    printf("%d Taka\n", grocery_total);

    printf("------------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep = 30*pepsi;
    spr = 35*sprite;
    cok = 30*coke;
    moj = 25*mojitos;
    thu = 35*thumbs_up;
    beverage_total = pep+spr+cok+moj+thu;

    printf("Pepsi : ");
    printf("%d Taka\n", pep);
    printf ("Sprite : ");
    printf("%d Taka\n", spr);
    printf("Coke : ");
    printf("%d Taka\n", cok);
    printf("Mojo : ");
    printf ("%d Taka\n", moj);
    printf ("Pran Up : ");
    printf ("%d Taka\n", thu);
    printf ("Total Beverage Price : ");
    printf("%d Taka\n", beverage_total);

    printf ("----------------------\n");

    total = cosmetics_total + grocery_total + beverage_total;

    printf ("Total Amount : ");
    printf("%d Taka\n", total);

    printf ("------------------------\n\n");

    printf("====================================================================================\n");

    printf("Customer Name : ");
    printf("%s\n", name);
    printf("Customer Phone Number : ");
    printf("%d\n", phone_number);
    printf("Customer Id : ");
    printf("%d\n", customer_id);
    printf("Date:%s\n\n",ctime(&T));

    printf("Product Name                     Quantity                      Price");
    printf("\n-----------------------------------------------------------------------\n");
    printf("|Body Soap                        %d                            %d\n", body_soap,boso);
    printf("|Hair Cream                       %d                            %d\n", hair_cream,hc);
    printf("|Body Spray                       %d                            %d\n", body_spray,bosp);
    printf("|Hair Spray                       %d                            %d\n", hair_spray,hs);
    printf("|Sugar                            %d                            %d\n", sugar,s);
    printf("|Tea                              %d                            %d\n", tea,t);
    printf("|Coffee                           %d                            %d\n", coffee,c);
    printf("|Rice                             %d                            %d\n", rice,r);
    printf("|Wheat                            %d                            %d\n", wheat,w);
    printf("|Pepsi                            %d                            %d\n", pepsi,pep);
    printf("|Sprite                           %d                            %d\n", sprite,spr);
    printf("|Coke                             %d                            %d\n", coke,cok);
    printf("|Mojitos                          %d                            %d\n", mojitos,moj);
    printf("|pran Up                          %d                            %d\n", thumbs_up,thu);

    printf("-----------------------------------------------------------------------\n");

    printf("Grocery Total Price : %d\n\n", grocery_total);

    printf("Cosmetic Total Price : %d\n\n", cosmetics_total);

    printf("Beverage Total Price : %d\n\n", beverage_total);

    printf("Total Price : %d\n\n", total);

    record=fopen("customar_record.text","ab+");

    fprintf(record,"Date:%s\nCustomer name =%s\nCustomer Id =%d\nGrocery Total Price = %d\nCosmetic Total Price = %d\nBeverage Total Price : %d\nTotal Price : %d\n",ctime(&T),name,customer_id,grocery_total,cosmetics_total,beverage_total,total);
    fprintf(record,"\n----------------------------------------------------------------------------\n");
    fclose(record);
    puts("\t\t\t\t\xdb\xdb\xdb\xdb\xdb\tThank you for Shopping Visit Again!\t\xdb\xdb\xdb\xdb\xdb\n");
    printf("=====================================================================================");
    getch();
}

