
#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<ctype.h>

#include<math.h>

#include<time.h>

 

 

//lab allot module

int laballot(int n,int i,int j,int a[5][7],int b[5][7] )

{

  int k,l;

    //printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d",1,2,3,4,5,6);

//printf("%s\n%s\n%s\n%s\n%s","mon","tue","wed","thu","fri");

  for(k=i;k!=i+1;k++)

  {

    for(l=j;l!=j+1;l++)

    {

      a[k][l]=n;

      b[k][l]=1;

    }

  }

  if(j!=0&&j!=6&&b[i][j+1]!=1){

  b[i][j+1]=2;

    b[i][j-1]=2;}

 

  

  }

 

//print timetable module

int printtt(int a[5][7],char n[10])

{

         printf("TIMETABLE OF %s\n",n);   printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n\n\n",1,2,3,4,5,6,7);

//printf("%s\n%s\n%s\n%s\n%s\n","mon","tue","wed","thu","fri");

  int i,j;

  for(i=0;i!=5;i++)

    {

      for(j=0;j!=7;j++)

      {

        printf("%d\t\t\t",a[i][j]);

      }

      printf("\n");

    }

 

  printf("\n");

}

int printtc(int a[5][7],char n[10])

{

         printf("TIMETABLE OF %s\n",n);   printf("%d\t\t\t\t%d\t\t\t\t%d\t\t\t\t%d\t\t\t\t%d\t\t\t\t%d\t\t\t\t%d\n\n\n",1,2,3,4,5,6,7);

//printf("%s\n%s\n%s\n%s\n%s\n","mon","tue","wed","thu","fri");

  int i,j;

  for(i=0;i!=5;i++)

    {

      for(j=0;j!=7;j++)

      {

        printf("%d\t\t\t",a[i][j]);

      }

      printf("\n");

    }

 

  printf("\n");

}

int randomallot(int n,int count1,int a[5][7],int b[5][7])

{

  int k,l,day,period,count;

  count=0;

  while(count!=count1){

  day=rand()%5;

  period=rand()%7;

  if(a[day][period]==0 && b[day][period]==0 && a[day][0]!=n && a[day][1]!=n && a[day][2]!=n && a[day][3]!=n && a[day][4]!=n && a[day][5]!=n && a[day][6]!=n )

  {

    a[day][period]=n;

    b[day][period]=1;

    if(period!=0 && period!=6)

    {

      b[day][period+1]=2;

      b[day][period-1]=2;

    }

    else if(period==0)

    {

      b[day][period+1]=2;

    }

    else

    {

      b[day][period-1]=2;

    }

    count++;

  }}

 

}

 

#include<stdio.h>

void print(int p[5][7],char z[3],int q, char s)

{

FILE *a;

a=fopen("f.txt","a");

fprintf(a,"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTIME TABLE OF %s\n",z);

char l='L';

char u='U';

char n='N';

char c='C';

char h='H';

char m='M';

char o='O';

char t='T';

char e='E';

char w='W';

char d='D';

char r='R';

char f='F';

char i='I';

fprintf(a,"\n___________________________________________________________________________________________");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|\t%c%c%c\t    |",m,o,n);fprintf(a," ucs%d\t| ucs%d | ucs%d | ucs%d |\t\t%c\t\t  | ucs%d| ucs%d | ucs%d  |",p[0][0],p[0][1],p[0][2],p[0][3],l,p[0][4],p[0][5],p[0][6]);

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|_________|_________|_________|_________|_________|_________|________|_________|__________|");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|\t%c%c%c\t    |",t,u,e);fprintf(a," ucs%d\t| ucs%d | ucs%d | ucs%d |\t\t%c\t\t  | ucs%d| ucs%d | ucs%d  |",p[1][0],p[1][1],p[1][2],p[1][3],u,p[1][4],p[1][5],p[1][6]);

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|_________|_________|_________|_________|_________|_________|________|_________|__________|");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|\t%c%c%c\t    |",w,e,d);fprintf(a," ucs%d\t| ucs%d | ucs%d | ucs%d |\t\t%c\t\t  | ucs%d| ucs%d | ucs%d  |",p[2][0],p[2][1],p[2][2],p[2][3],n,p[2][4],p[2][5],p[2][6]);

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|_________|_________|_________|_________|_________|_________|________|_________|__________|");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|\t%c%c%c%c    |",t,h,u,r);fprintf(a," ucs%d\t| ucs%d | ucs%d | ucs%d |\t\t%c\t\t  | ucs%d| ucs%d | ucs%d  |",p[3][0],p[3][1],p[3][2],p[3][3],c,p[3][4],p[3][5],p[3][6]);

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|_________|_________|_________|_________|_________|_________|________|_________|__________|");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|\t%c%c%c\t    |",f,r,i);fprintf(a," ucs%d\t| ucs%d | ucs%d | ucs%d |\t\t%c\t\t  | ucs%d| ucs%d | ucs%d  |",p[4][0],p[4][1],p[4][2],p[4][3],h,p[4][4],p[4][5],p[4][6]);

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|         |         |         |         |         |         |        |         |          |");

fprintf(a,"\n|_________|_________|_________|_________|_________|_________|________|_________|__________|");

fprintf(a,"\n\n\n");

 

  if(q==3 && s=='A')

  {

  fprintf(a,"\n3 rd semester-a\n\n");

  fprintf(a,"lab\n\n");

  fprintf(a,"ucs2311- digital design lab-SSA\n");

  fprintf(a,"ucs2312-data structure lab-BP/RK\n");

  fprintf(a,"ucs2313-object oriented programming lab-BB\n\n");

  fprintf(a,"theory\n\nucs2377-discrete mathematics----\nucss2351-electives-AC\nucs2301-digital principles and system design-SSA\nucs2302-data structures-HSH\nucs2303-object oriented programming-SR\n\n\n");

  }

  else if(q==3 && s=='B')

  {

    fprintf(a,"\n3 rd semester-b\n\nlab\n\nucs2311- digital design lab-YVL\nucs2312-data structure lab-HSH/DT\nucs2313-object oriented programming lab-SR\n\ntheory\n\nucs2377-discrete mathematics----\nucss2351-electives-AC\nucs2301-digital principles and system design-SSA\nucs2302-data structures-HSH\nucs2303-object oriented programming-SR\n\n\n");

  }

  else if(q==5 && s=='A')

  {

    fprintf(a,"\n5 th semester -A\n\nlab\n\nucs1511-networks lab             -JB\nucs1512-microprocessing lab pc   -KRS/AOS\n\ntheory\n\nucs1501 - computer networks      -JB\nucs1502 - microprocessors and interfacing-KRS\nucs1503- theory of computation-AB\nUCS1504-Artificial Intelligence -SK\nUCS1505-Introduction to Cryptographic Techniques-JB\nUCS1524 Logic Programming -DT\nUCS1526 Programming Paradigms -RK\n\n\n");

 

    }

  else if(q==5 && s=='B')

  {

    fprintf(a,"\n5 th semester -B\n\nlab\n\nucs1511-networks lab             -SVJ\nucs1512-microprocessing lab pc   -AOS/SK,MS\n\ntheory\n\nucs1501 - computer networks      -SVJ\nucs1502 - microprocessors and interfacing-ADS\nucs1503- theory of computation-AB\nUCS1504-Artificial Intelligence -KL\nUCS1505-Introduction to Cryptographic Techniques-VB\nUCS1524-Logic Programming -DT\nUCS1526-Programming Paradigms -RK\n\n\n");

 

  }

  else if(q==7 && s=='A')

  {

    fprintf(a,"\n7 th semester -A\n\nlab\n\nucs1711- mobile application developement   lab -KM/VSF\nucs1712-graphics and multimedia lab - NS\n\ntheory\n\nucs 1701 - distributed systems -HSH\nucs 1702- mobile computing -KM\nucs 1703- graphics and multimedia -NS\nucs 1704- management and ethical practices -YVL\nucs 1722 - social network analysis -X1\nucs 1723 - deep learning -PM\nucs 1729 - data warehousing and data minning -VSF\n\n\n");

 

  }

  else if(q==7 && s=='B')

  {

    fprintf(a,"\n7 th semester cse-B\n\nlab\n\nucs1711- mobile application developement   lab –VB/KVD\nucs1712-graphics and multimedia lab - SLP\n\ntheory\n\nucs 1701 - distributed systems -YVL\nucs 1702- mobile computing -VB\nucs 1703- graphics and multimedia -SLP\nucs 1704- management and ethical practices -GR\nucs 1722 - social network analysis -X2\nucs 1723 - deep learning -PM\nucs 1729 - data warehousing and data minning -VSF\n\n\n");

 

 

 

}}

int allot(int n,int m,int a[5][7],int b[5][7])

{

  int k,l,count=0;

  for(k=0;k!=5;k++)

  {

    if (count!=m)

    {

    for (l=k;l!=k+6;l++)

    {

      if(l>6)

      {

        l=l-7;

      }

     

      if (a[k][l]==0 && b[k][l]==0)

      {

        a[k][l]=n;

        b[k][l]=1;

        count++;

        if (l!=0&&l!=6)

        {

        b[k][l+1]=2;

        b[k][l-1]=2;

        }

        else if (l==0)

        {

          b[k][l+1]=2;

        }

        else if(l==6)

        {

          b[k][l-1]=2;

        }

       

        break;

      }

    }

 

      

  }

}

}

int allot1(int n,int m,int a[5][7],int b[5][7])

{

  int k,l,count=0;

  for(k=4;k>=0;k--)

  {

    if (count!=m)

    {

    for (l=k+2;l>=0;l--)

    {

      if(l==0)

      {

        l=l+6;

        while(l!=k+1)

          {

            l--;

          }

      }

     

      if (a[k][l]==0 && b[k][l]==0)

      {

        a[k][l]=n;

        b[k][l]=1;

        count++;

        if (l!=0&&l!=6)

        {

        b[k][l+1]=2;

        b[k][l-1]=2;

        }

        else if (l==0)

        {

          b[k][l+1]=2;

        }

        else if(l==6)

        {

          b[k][l-1]=2;

        }

       

        break;

      }

    }

      }

    }

  }

 

int freeallot(int a[5][7])

{

  int i,j;

  for(i=0;i!=5;i++)

    {

      for(j=0;j!=7;j++)

        {

          if(a[i][j]==0)

          {

            a[i][j]=9999;

          }

        }

    }

}

 

void main()

{

    int tt3a[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int tt3b[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int tt5a[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int tt5b[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int tt7a[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int tt7b[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

    int sy[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int ac[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int ssa[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int bp[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int hsh[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int bb[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int sr[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int yvl[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int dt[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int rk[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int jv[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int svj[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int krs[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int ads[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int ab[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int sk[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int kl[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int jb[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int vb[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int ms[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int ybl[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int km[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int ns[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int slp[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int gr[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int np[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int hm[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int pm[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int vsf[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

  int lvd[5][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

 

  //3 rd sem

 

  //lab

  laballot(2311,0,4,tt3a,ssa);

  laballot(2311,0,6,tt3a,ssa);

  laballot(2311,0,5,tt3a,ssa);

  laballot(2312,2,4,tt3a,bp);

  laballot(2312,2,6,tt3a,bp);

  laballot(2312,2,5,tt3a,bp);

  laballot(2313,4,4,tt3a,bb);

  laballot(2313,4,6,tt3a,bb);

  laballot(2313,4,5,tt3a,bb);

  //theory

 

  allot1(2301,4,tt3a,ssa);

  randomallot(2303,5,tt3a,bb);

  allot(2377,5,tt3a,sy);

  allot(2351,4,tt3a,ac);

  randomallot(2302,4,tt3a,bp);

  freeallot(tt3a);

  printtc(tt3a,"3a");

  printtt(bp,"bp");

  printtt(ssa,"ssa");

  printtt(bb,"bb");

  printtt(sy,"sy");

  printtt(ac,"ac");

 

// 3rd sem b

// lab

  laballot(2311,0,4,tt3b,yvl);

  laballot(2311,0,6,tt3b,yvl);

  laballot(2311,0,5,tt3b,yvl);

  laballot(2312,2,4,tt3b,hsh);

  laballot(2312,2,6,tt3b,hsh);

  laballot(2312,2,5,tt3b,hsh);

  laballot(2313,4,4,tt3b,sr);

  laballot(2313,4,6,tt3b,sr);

  laballot(2313,4,5,tt3b,sr);

  //theory

  randomallot(2301,4,tt3b,ssa); randomallot(2377,5,tt3b,sy);

  allot(2302,4,tt3b,hsh);

  randomallot(2303,5,tt3b,sr);

  randomallot(2351,4,tt3b,ac) ;

  freeallot(tt3b);

  printtc(tt3b,"3b");

  printtt(yvl,"yvl");

  printtt(hsh,"hsh");

  printtt(sr,"sr");

 

 

  //5 th sem a

  //lab

  laballot(1511,0,1,tt5a,jb);

  laballot(1511,0,0,tt5a,jb);

  laballot(1512,4,5,tt5a,krs);

  laballot(1512,4,6,tt5a,krs);

  allot(1503,5,tt5a,ab);

  allot1(1505,4,tt5a,jb);

  allot(1504,5,tt5a,sk);

  //theory

  randomallot(1524,4,tt5a,dt);

  randomallot(1526,4,tt5a,rk);

  allot(1501,3,tt5a,jb);

  randomallot(1502,3,tt5a,krs);

  freeallot(tt5a);

  printtc(tt5a,"5a");

  printtt(jb,"jb");

  printtt(krs,"krs");

  printtt(ab,"ab");

  printtt(sk,"sk");

  printtt(dt,"dt");

  printtt(rk,"rk");

 

 

  //5 th sem b

  //lab

  laballot(1511,0,1,tt5b,svj);

  laballot(1511,0,0,tt5b,svj);

  laballot(1512,4,5,tt5b,krs);

  laballot(1512,4,6,tt5b,krs);

  //theory

  allot(1503,5,tt5b,ab);

  allot(1505,4,tt5b,vb);

  randomallot(1504,5,tt5b,kl);

  allot1(1524,4,tt5b,dt);

  randomallot(1526,4,tt5b,rk);

  allot1(1501,3,tt5b,svj);

  allot(1502,3,tt5b,ads);

  freeallot(tt5b);

  printtc(tt5b,"5b");

  printtt(svj,"svj");

  printtt(vb,"vb");

 

  

  // 7 th sem a

  // lab

  laballot(1711,0,4,tt7a,km);

  laballot(1711,0,6,tt7a,km);

  laballot(1711,0,5,tt7a,km);

  laballot(1712,4,4,tt7a,ns);

  laballot(1712,4,6,tt7a,ns);

  laballot(1712,4,5,tt7a,ns);

  allot(1701,4,tt7a,hsh);

 allot1(1702,4,tt7a,km);

  allot(1703,4,tt7a,ns);

  allot(1704,4,tt7a,ns);

  randomallot(1723,4,tt7a,hm);

  randomallot(1729,4,tt7a,pm);

  randomallot(1722,3,tt7a,vsf);

  freeallot(tt7a);

 

  printtt(km,"km");

  printtt(ns,"ns");

  printtt(yvl,"yvl");

  printtt(slp,"slp");

  printtt(hm,"hm");

  printtt(np,"np");

  printtt(pm,"pm");

  printtt(vsf,"vsf");

  printtc(tt7a,"7a");

 

 

  //7 th semester b

  //lab

  laballot(1711,0,4,tt7b,lvd);

  laballot(1711,0,6,tt7b,lvd);

  laballot(1711,0,5,tt7b,lvd);

  laballot(1712,4,4,tt7b,slp);

  laballot(1712,4,6,tt7b,slp);

  laballot(1712,4,5,tt7b,slp);

  //theory

  allot(1701,4,tt7b,yvl);

  allot1(1702,4,tt7b,vb);

  allot(1703,4,tt7b,slp);

  randomallot(1704,4,tt7b,gr);

  randomallot(1722,4,tt7b,vsf);

  randomallot(1729,4,tt7b,pm);

  randomallot(1723,3,tt7b,np);

  freeallot(tt7b);

 

  printtt(lvd,"lvd");

  printtt(slp,"slp");

 

 

  //printing in file

  print(tt7b,"7b",7,'B');

  print(tt7a,"7a",7,'A');

  print(tt5b,"5b",5,'B');

  print(tt5a,"5a",5,'A');

  print(tt3b,"3b",3,'B');

  print(tt3a,"3a",3,'A');

}

 

 



 

