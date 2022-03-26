#include <stdio.h>

int main(void)
 {
  float unit,total,  charge;
  char name[20];
  
  printf("enter the name :");
  gets(name);
  printf("enter the units:");
  scanf("%f",&unit);
  charge=0;
  if(unit>=1&&unit<=200)//charge 80 paise per unit for thre first 200 units
  { 
     charge=0.8*unit;
  }
  else if(unit>=201&&unit<=300)//charge 80 paise per unit for the first 200 units and 
  { 
    //90 paise per unit for the next 100 units
     charge = 0.8*(200)+0.9*(unit-200);
  }
  else if(unit>300)//charge 80 paise per unit for the first 200 unit,
  { 
    //90 paise per unit for the next 100 units
     
    //one rupee per unit for the all units above 300
    charge=0.8*(200)+0.9*(100)+1*(unit-300);
  }
  total =charge+100;//add meter charge of rs.100
  if(total>400)
  { 
    total=total+(0.15*total);//add addiyional surcharge of 15 percent of total amount
  }
  //display the electricity bill
  printf("\n\nELECTRICITYBILL\n");
  printf("--------------\n");

  printf("\nNAME :%s\n",name);
  printf("No. of units:%.2f\n",unit);
  printf("total bill amount:Rs.%.2f\n",total);
  printf("------------\n");
  
  return 0;
}