#include <stdio.h>
#include <stdlib.h>
// This calculator will determine the price of a object after applying the newly introduced Luxury Tax


double LuxuryTax ( const double PriceOfObject ){


  double result; 
  double FinalPrice;
  double PriceA;
  double PriceB;
  

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

    printf("\nThe price of the taxes will come out to be $%1.2f, and the total purchase price will be $%1.2f\n", result, FinalPrice );
    
    } else if (PriceOfObject == 0) {
    
      printf("Thank you for using this Calculator!"); 
    
    } else if (PriceOfObject < 100000) {
      printf("Luxury Tax does not apply to items under $100,000");
  
    
    }
  
  return 0;
}


int main() {

  //double *Price = (double *) malloc(1000000000*sizeof(double));
  double Price;
  int IsRunning = 1;
  
  printf("Welcome to the Luxury Tax Calulator!\n ");
  
  while ( IsRunning ) {
    
  
    printf("\nPlease enter in the price of your purchase: $");

    if (scanf("%lf", &Price) == 1){
      
      LuxuryTax(Price);
      
    } else {
      
      //*Price = NULL;
      //scanf("%lf", &Price);

      printf("invalid input! Please try again!\n");
      //IsRunning = 1;
      //scanf("%lf", &Price);
      break;

    }

    //printf("\nPlease enter in the price of your purchase: $");
        
    if (Price == 00){
      
      IsRunning = 0;
      
    }  

    //scanf("%lf", Price);

    //printf("Enter in a value");
    //scanf("%lf", &Price);
    //IsRunning = 1;
    //scanf("%lf", &Price);
  
    //Price = 0;
    //IsRunning = 1;
  }
  //scanf("%lf", &Price);
  //free (Price);
  //IsRunning = 1;
  
  return 0; 
    
}