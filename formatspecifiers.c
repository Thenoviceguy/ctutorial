#include <stdio.h>
#include <stdbool.h>

int main(){
// format specifers % = defines and formats a type of data to be displayed

//*%c =character
// %s = string
// %f =float
// %d integer

// %.1 = decimal precisiom
 //%1 = minimum field width
// %- left align
float item1 = 5.75;
float item2 = 10.00;
float item3 =100.99;

printf("item 1 : %8.2f\n",item1);
printf("item 2 : %8.2f\n",item2);
printf("item 3 : %8.2f\n",item3);
return 0;
}
