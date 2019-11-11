#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

int main ( int argc, char *argv[] ) {

   FILE *f1;
   int i = 0;
   int j = 0;
   struct pNames popNames;
   char maleSNumber[20];
   char femaleSNumber[20];
   char string[100];
   char num[200];
   
   int rank;
   int rankm;
    char choice[20];
    int s;
   char e[10];
	char o[10];
       
	
	
	
	do{
		
		printf ( "What decade do you want?[1880 to 2010] \n");
      scanf("%s",num);        
     
      chop (num);
      s = atoi(num);
      
		
	  
	
	if ((s != 1880) && ( s != 1890)&& ( s != 1900)&& ( s != 1910)&& ( s != 1920)&& ( s != 1930)&& ( s != 1940)&& ( s != 1950)&& ( s != 1960)&& ( s != 1970)&& ( s != 1980)&& ( s != 1990)&& ( s != 2000)&& ( s != 2010)) {
	
	do{
	
	printf (" Acceptable decades are 1880,1890,1900,1910,1920,1930,1940,1950,1960,1970,1980,1990,2000 or 2010. No other numbers are acceptable.\n");
	/*}*/

	

	printf ( "What decade do you want?[1880 to 2010] \n");
      scanf("%s",num);        
     s = atoi(num);
      chop (num);
        	
	} while((s != 1880) && ( s != 1890)&& ( s != 1900)&& ( s != 1910)&& ( s != 1920)&& ( s != 1930)&& ( s != 1940)&& ( s != 1950)&& ( s != 1960)&& ( s != 1970)&& ( s != 1980)&& ( s != 1990)&& ( s != 2000)&& ( s != 2010));
	
	}
	strcat(num,"Names.txt");
	
		

	do {
	
			
		printf ( "Would you like to see a rank, search for a name or view the top 10 of the decade?\n");
      scanf("%s",choice);
	chop(choice);
	if ((strcmp(choice,"rank")!=0) && (strcmp(choice,"search")!=0) &&  (strcmp(choice,"top") != 0)){
	do{
	printf(" Please type in rank,search or top exactly as requested \n");
	
	printf ( "Would you like to see a rank, search for a name or view the top 10 of the decade?\n");
      scanf("%s",choice);
	chop (choice);
	}while ((strcmp(choice,"rank")!=0) && (strcmp(choice,"search")!=0) &&  (strcmp(choice,"top") != 0));
		} 
	 if (strcmp("rank",choice)==0){

     printf ( "What rank do you wish to see ?[1-200] \n");
      scanf("%d",&rank);       


      if (  rank > 200 || rank < 1){
	do{
	printf ( "Only numbers between 1 and 200 are acceptable. \n");
	printf ( "What rank do you wish to see ? [1-200]\n");
           scanf("%d",&rank);  
}while(rank > 200 || rank < 1);
}    
	 printf ( " Would you like to see the male(0),female(1), or both(2) name(s)?[0-2] \n");
	scanf("%d",&rankm);
	
      
	if((rankm != 0) && (rankm !=1) && (rankm !=2) ){

	do{
	printf("Only the numbers 0,1 or 2 are acceptable.\n");
	
       printf ( " Would you like to see the male(0),female(1), or both(2) name(s)? [0-2]\n");
	scanf("%d",&rankm);
	}while ((rankm != 0) && (rankm !=1) && (rankm !=2) );

	      

	}
	
	}
	
	/*
	
	printf ( " Do you wish to see the male(0),female(1), or both(2) name(s)? \n");
      scanf("%d",&opt); 
    
   */
    
   if ( (f1 = fopen(num, "r")) != NULL ) {
	j = 0;
   i = 0;
      while ( fgets(string, 100, f1) != NULL ) {
         
	sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
/* printf ( "%d %s %s %s %s\n",popNames.rank[i],popNames.maleName[i],maleSNumber,popNames.femaleName[i],femaleSNumber ); */
         removeCommas ( maleSNumber );
         removeCommas ( femaleSNumber );
         popNames.maleNumber[i] = atoi ( maleSNumber );
         popNames.femaleNumber[i] = atoi ( femaleSNumber );
         i++;
      }
   } else {
      printf ( "Cannot open %s\n", argv[1] );
      return ( -2 );
   }
   	 if (strcmp("top",choice)==0){
   for ( j=0; j < 10; j++ ) {
      printf ( "%-5d %-12s %-12d %-12s %-10d \n", popNames.rank[j], popNames.maleName[j], popNames.maleNumber[j], 
                                                     popNames.femaleName[j], popNames.femaleNumber[j] );
   }
}

   /*if (rank < 201){
  printf ( "%d %s %d %s %d\n", popNames.rank[rank-1], popNames.maleName[rank-1], popNames.maleNumber[rank-1], 
                                                     popNames.femaleName[rank-1], popNames.femaleNumber[rank-1] );
    }

*/
 
  int y;  
  int h ;
  h = rankm; 
          if (strcmp("rank",choice)==0){


    if (h == 0){
         rankm =  popNames.maleNumber[rank-1] ;
	printf( " %s  %d  \n", popNames.maleName[rank-1] , rankm);
   }

	else if (h == 1){
         rankm =  popNames.femaleNumber[rank-1] ;
	printf( " %s  %d  \n", popNames.femaleName[rank-1] , rankm);
   }


	else if (h == 2){
         rankm =  popNames.maleNumber[rank-1] ;
	 y = popNames.femaleNumber[rank-1];
	printf( " %s  %d  %s %d\n", popNames.maleName[rank-1] , rankm,popNames.femaleName[rank-1],y);
   }
} 
  
  int number;
  char r[200];
  
  

          if (strcmp("search",choice)==0){

      printf ( "What name do you wish to serach for?[case sensitive] \n");
      scanf("%s",r);  
      chop(r);      
     
	printf ( " Would you like to see the male(0),female(1), or both(2) name(s)?[0-2] \n");
      scanf("%d",&number);
     

	
	if ((number!= 0) && (number!=1) && (number!=2) ){
	
	do{
	printf("Only the numbers 0,1 or 2 are acceptable.\n");
	
	
   	printf ( " Would you like to see the male(0),female(1), or both(2) name(s)?[0-2] \n");
      scanf("%d",&number);
 } while ((number != 0) && (number !=1) && (number !=2) );
 }
	if (number==0){
	 for(j=0;j<200;j++){
	if (strcmp(popNames.maleName[j],r)==0){
       

        
	printf( " In %d, the male name %s  is ranked %d with a count of %d \n",s,r,popNames.rank[j] , popNames.maleNumber[j]);

   }



}


}
 else if ( number == 1){
      for(j=0;j<200;j++){
    if( strcmp(popNames.femaleName[j],r)==0){
	 
	
       
	printf( " In %d, the female name %s is ranked %d with a count of %d \n",s,r,popNames.rank[j] ,popNames.femaleNumber[j]);
   }  
 }  
}

  else if ( number == 2){
	
	for(j=0;j<200;j++){


	if (strcmp(popNames.maleName[j],r)==0){
	
      
	
	

	printf( " In the year %d,the female name %s is not ranked and the male name %s  is ranked %d with a count of %d   \n",s,r,r,popNames.rank[j],popNames.maleNumber[j]);
	
																					
	}
	}
	
	
	for(j=0;j<200;j++){
	 if (strcmp(popNames.femaleName[j],r)==0){
	
     	
	  /* */
	
	printf( " In the year %d, the female name %s  is ranked %d with a count of %d  and the male name %s is not ranked \n",s,r,popNames.rank[j],popNames.femaleNumber[j],r);
	/*}*/
	/*}*/

       }
	} 
	  
	for(j=0;j<200;j++){
	 if (strcmp(popNames.maleName[j],r)==0 && strcmp(popNames.femaleName[j],r)==0) {
	
	printf( " In the year %d, the female name %s is ranked %d with a count of %d  and the male name %s is ranked %d with a count of %d \n",s,r,popNames.rank[j],popNames.femaleNumber[j] ,r, popNames.rank[j] ,popNames.maleNumber[j]);
	
  
        
     }
	
  }

}

 


}

 

printf ( "Do you want to ask another question about %d ?  \n",s);
      scanf("%s",e); 
		
	
	if ((strcmp("Y",e) != 0) && (strcmp("N",e) != 0) ){
    	do{
	printf("Only the single characters Y or N are acceptable \n");
	printf ( "Do you want to ask another question about %d ?  \n",s);
      scanf("%s",e); 
	}while((strcmp("Y",e) != 0) && (strcmp("N",e) != 0) );
}	
   }
	
 	while (strcmp("Y",e)== 0); 
	
	
	printf ( "would you like to select another year [1880 to 2010] ?  \n");
      scanf("%s",o); 

	if ((strcmp("Y",o) != 0) && (strcmp("N",o) != 0) ){
    do{
	printf("Only the single characters Y or N are acceptable \n");
	
	printf ( "would you like to select another year [1880 to 2010] ?  \n");
      scanf("%s",o);
	}while ((strcmp("Y",o) != 0) && (strcmp("N",o) != 0) );

 }
 }	
	while (strcmp("Y",o)== 0);

	if (strcmp("N",o)== 0){
	
	printf ( "Thanks for using baby Query\n" );
     
      return ( -2 );

}






   return (0);

}

