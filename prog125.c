#INCLUDE<STDIO.H>
VOID MAIN()
{
   INT A[3],B[5],C[8],I,J=0;;
   PRINTF("\N ARRAY 1");
   FOR(I=0;I<3;I++)
   {
      PRINTF("\N ENTER A VALUE ");
      SCANF("%D",&A[I]);

   }
   PRINTF("\N ARRAY 2");
   FOR(I=0;I<5;I++)
   {
      PRINTF("\N ENTER A SECOND  VALUE ");
      SCANF("%D",&B[I]);

   }
   FOR(I=0;I<8;I++)
   {
       IF(I<3)
        C[I]=A[I];
       ELSE
       {
           C[I]=B[J];
           J++;
       }
   }
   PRINTF("\N ARRAY 3 ");
   FOR(I=0;I<8;I++)
   {
       PRINTF("\N %D",C[I]);
   }




}
