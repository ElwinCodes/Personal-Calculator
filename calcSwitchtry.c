#include <stdio.h>

int main()
{
  double result; 
  double FinalPrice;
  double PriceA;
  double PriceB,PriceOfObject;
  int Province;
  //har Province[2];

  printf("Welcome to the Luxury Tax Calulator!\n ");
  printf("Please enter the Province you reside in! enter 1");
  scanf("%d", &Province );

  while (Province != 0){
    
    switch(Province)
      {
        case 1:
        {
          printf("\nPlease enter in the price of your purchase: $");
          if (scanf("%lf", &PriceOfObject) == 1){
            if(PriceOfObject > 100000){
      
            PriceA = PriceOfObject * 0.10;
            PriceB = (PriceOfObject - 100000)* 0.20;    
            
            if (PriceA < PriceB){
              result = PriceA;
              printf("Method of using total taxable amount by 10%% has been applied\n");
              
            } else if (PriceA > PriceB){  
              result = PriceB;
              printf("Method of multiplying the difference of 100,000 by 20%% has been applied\n");
            }
          
            FinalPrice = result + PriceOfObject;


              }else {
              PriceOfObject = 0.0;
              break;
              }
            }
          
        
            printf("Welcome to the Luxury Tax Calulator!\n ");
            printf("Please enter the Province you reside in!");
            scanf("%d", &Province );
            break;
        }
        
        default:
          {
              PriceOfObject = 0.0;
              printf("Invalid input please try again! \n");
              printf("Welcome to the Luxury Tax Calulator!\n ");
              printf("Please enter the Province you reside in!");
              scanf("%d", &Province );
              break;
          }
    




        
      }

    
  }
    




  
  return 0;
}