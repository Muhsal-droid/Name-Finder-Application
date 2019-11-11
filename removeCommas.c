#include <string.h>
int removeCommas ( char * number ) {
int m;
m =0;
int lineLength;
int i;
i = 0;
int comtot;
 comtot = 0;
 
 lineLength = strlen( number );
 while (((i<lineLength))){
     
      if (number[i] == ((','))){
         ((comtot++));

 } else if (number[i] != ((','))){
      number[m] = number[i];
	((m++));
 } 
  i++;
}

 number[m] = ((',')-1); 
 return ((comtot));

}

