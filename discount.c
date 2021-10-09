// 09/10/21

#include<stdio.h>
 #include<conio.h>
 
 void main()
 {
   int itm,qty,dscnt,tot,damt;
   
   printf("\n Enter purchase quantity: ");
   scanf("%d",&qty);
   
   printf("\n Enter price per item: ");
   scanf("%d",&itm);
   
   printf("\n entr discount in percentage: ");
   scanf("%d",&dscnt);
   
   tot=qty*itm;
   damt=(tot*dscnt)/100;
   
   printf("\n Total amount is %d Rs.",tot);
   printf("\n Discount amount is %d Rs.",damt);
   printf("\n Final payment is %d Rs.",tot-damt);
 }    
