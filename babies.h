/*  Defines */
#define MAXLENGTH 20
#define ROWS 200

/* Struct definitions */
struct pNames {
   int  year;
   int  rank[ROWS];
   char maleName[ROWS][MAXLENGTH];   
   int  maleNumber[ROWS];
   char femaleName[ROWS][MAXLENGTH];   
   int  femaleNumber[ROWS];
   int  year2;
   int  rank2[ROWS];
   char maleName2[ROWS][MAXLENGTH];   
   int  maleNumber2[ROWS];
   char femaleName2[ROWS][MAXLENGTH];   
   int  femaleNumber2[ROWS];


};

/* Function definitions */
int removeCommas ( char *);
int chop (char *);

