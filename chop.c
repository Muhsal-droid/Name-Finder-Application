#include <string.h>
#include<stdio.h>
 
int chop ( char *line ) {
   
	int i = 0 ;

     	while (i < strlen (line)){
	    	i++;
				if (line[i] ==  '\n') {
		          
				 line[i] = '\0' ;			
     				 } 
			 }
    
 return ( 0 );
}

