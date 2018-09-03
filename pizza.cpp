#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()

{
   char s1[20],s2[20]={"SHUBHAM"}, e ;

	int coffee[5]={100,80,60,40,20};
    int p;
	int pizza,  amount ,total=0;
	int f;
    int cold_drinks[10]={40,35,30,25,20};
	int ch,n;
	system("COLOR 0A");
    printf("\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 USER ID: ");
	scanf("%s",s1);
	if(stricmp(s2,s1)==0)
	{ 
	
	}
	else
	exit (3);
	printf("\n\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2              START                   \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2        WELCOME TO PIZZA HUT          \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    k:
       printf("\n\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PRESS 1.FOR PIZZA");
       printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PRESS 2.FOR COFFEE");
       printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PRESS 3.FOR COLD_DRINKS");
       printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PRESS 4.FOR EXIT");
     //  k:
       printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FILL THE CHOICE HERE ");
       scanf("%d",&ch);
       system("cls");
       switch(ch)
       {
       	case 1:
       		printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TYPES OF PIZAA");
       		printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 1.MARGRETA=300");
       			printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 2.CHEESE-N-CORN=200");
       				printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 3.PANEER MAKHANI=400");
       					printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 4.VEG SINGLE=150");
       						printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 5.VEG DOUBLES=250");
       			printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ENTER THE CHOICE HERE: ");	
				   scanf(" %d",&n);
				   switch(n)
				   {
				   	case 1:
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOUR ORDER IS MARGRETA");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  MARGRETA=300");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  IF YOU BUY MORE THAN OR EQUAL TO 5 PIZAA");
				   	printf("\n\n\t\t\t\t\t\t YOU WILL GET 100 RUPEES OFF");
				   	int b;
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NUMBER OF PIZZA: ");
				   	scanf("%d",&b);
				 if(b>=5)
				 {
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  100 RUPEES OFF");
				 	amount=b*300-100;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
				 	
				 }
				 else
				 {
					 	amount=b*300;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
					 }
				 	break;
	case 2:
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOUR ORDER IS CHEESE-N-CORN");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  cheese n corn=200");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  IF YOU BUY MORE THAN OR EQUAL TO 5 PIZAA");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOU WILL GET 100 RUPEES OFF");
				   		printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NUMBER OF PIZZA: ");
				   	scanf("%d",&b);
				 if(b>=5)
				 {
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  100 RUPEES OFF");
				 	amount=b*200-100;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
				 	
				 }
				 else
				 {
					 	amount=b*200;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
					 }
				 	break;
		case 3:
				 		printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOUR ORDER IS PANEER MAKHANI");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  PANEER MAKHANI=400");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  IF YOU BUY MORE THAN OR EQUAL TO 5 PIZAA");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOU WILL GET 100 RUPEES OFF");
				   		printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NUMBER OF PIZZA: ");
				   	scanf("%d",&b);
				 if(b>=5)
				 {
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  100 RUPEES OFF");
				 	amount=b*400-100;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
				 	
				 }
				 else
				 {
					 	amount=b*400;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
					 }
				 	break;	
				 		
		case 4:
			printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOUR ORDER IS VEG SINGLES");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  VEG SINGLES=150");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  IF YOU BUY MORE THAN OR EQUAL TO 5 PIZAA");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOU WILL GET 100 RUPEES OFF");
				   		printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NUMBER OF PIZZA: ");
				   	scanf("%d",&b);
				 if(b>=5)
				 {
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  100 RUPEES OFF");
				 	amount=b*150-100;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
				 	
				 }
				 else
				 {
					 	amount=b*150;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
					 }
				 	break;
				 	
				 	case 5:
				 	
					 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOUR ORDER IS VEG DOUBLES");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  MARGRETA=200");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  IF YOU BUY MORE THAN OR EQUAL TO 5 PIZAA");
				   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  YOU WILL GET 100 RUPEES OFF");
				   		printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NUMBER OF PIZZA: ");
				   	scanf("%d",&b);
				 if(b>=5)
				 {
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  100 RUPEES OFF");
				 	amount=b*250-100;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
				 	
				 }
				 else
				 {
					 	amount=b*250;
				 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMOUNT =%d",amount);
					 }
				 	break;		 			
				   }
    			break;
       						
       	case 2:
       		system("COLOR 4A");
		   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TYPES OF COFFEE");
		   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 1.CAPPUCINO");
       			printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 2.MOCHA");
       				printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 3.IRISH COFFEE");
       					printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 4.TURKISH COFFEE");
       						printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 5.COLD COFFEE");
       						//break;
       					//	int coffee[5]={100,80,60,40,20};
       					//	int p;
       						printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 enter the choice here: ");
       						scanf("%d",&p);
       						switch(p)
       						{
       						case 1:
							   //amount=coffee[0]*ncd;
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your orer is cappucino");
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many coffee you want=");
							   int ncd;
							   scanf("%d",&ncd);
							   	amount=coffee[0]*ncd;
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 total amount is %d",amount);
							   break;
							case 2:
								 printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your orer is mocha");
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many coffee you want=");
							   scanf("%d",&ncd);
							   	amount=coffee[1]*ncd;
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 total amount is %d",amount);
							   break;
						case 3:
							 printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your orer is irish coffee");
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many coffee you want=");
							   scanf("%d",&ncd);
							   	amount=coffee[2]*ncd;
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 total amount is %d",amount);
							   break;
							case 4:
								 printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your orer is turkish coffee");
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many coffee you want=");
							   scanf("%d",&ncd);
							   	amount=coffee[3]*ncd;
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 total amount is %d",amount);
							   break;
							case 5:
								 printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your orer is cold coffee");
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many coffee you want=");
							   scanf("%d",&ncd);
							   	amount=coffee[4]*ncd;
							   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 total amount is %d",amount);
							//break;
								
       							
							}
       						break;
       						
		   	case 3:
		   			   printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TYPES OF COLD_DRINKS");
		   	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 1.COCA COLA");
       			printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 2.THUMS_UP");
       				printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 3.LIMICA");
       					printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 4.MAZZA");
       						printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 5.SPRITE");
       					//	break;
       					//	int f;
       					//	int cold_drinks[10]={40,35,30,25,20};
       						printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ENTER THE CHOICE HERE: ");
       						scanf("%d",&f);
       						switch(f)
       						{
       							case 1:
       								int l;
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your order is coca cola");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 coca cola=");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many cold_drinks you want: ");
       								scanf("%d",&l);
       								amount=cold_drinks[0]*l;
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 amount is %d",amount);
       							case 2:
       									printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your order is thums_up");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 thums up=");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many cold_drinks you want: ");
       								scanf("%d",&l);
       								amount=cold_drinks[1]*l;
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 amount is %d",amount);
								   
								 case 3:
								 	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your order is mazza");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 mazza=");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many cold_drinks you want: ");
       								scanf("%d",&l);
       								amount=cold_drinks[2]*l;
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 amount is %d",amount);  
								  case 4:
								  	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your order is limica");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 limica=");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many cold_drinks you want: ");
       								scanf("%d",&l);
       								amount=cold_drinks[3]*l;
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 amount is %d",amount); 
								  case 5:
								  
								  	printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 your order is sprite");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 sprite=");
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 how many cold_drinks you want: ");
       								scanf("%d",&l);
       								amount=cold_drinks[4]*l;
       								printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 amount is %d",amount); 	
							   }
       						
       					break;	
       		case 4:
			   exit(0);
			   break;				
			   				
	   }
       printf(" \n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 do you want anything more  press  1 for yes 0 for no" );
       int h;
       total=total+amount;
       scanf("%d",&h);
       system("cls");
       if(h==1)
       goto k; 
	   if(h==0)
	   {
	    
    
    printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 total amount is %d",total);
	}
    
    // application software for lovely professional university
    // programmer : shubham kumar { shubh65598@gmail.com}
    //debugger: shubham kumar
    // end of programme. 
}


