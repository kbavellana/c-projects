#include <stdio.h>
#include <string.h>
char name1[100],name2[100],name11[100],name12[100];
int x,y,z,a;
int num,rep,rep2;
int len1,len2;
main() {
rep=0;
printf("Input the first name: ");
gets(name1);
strupr(name1);
printf("Input the 2nd name: ");
gets(name2);
strupr(name2);
y=0;
/* for checking of names */
len1=strlen(name1);
len2=strlen(name2);
rep=0;

for(x=0;x<len1;x++)
{  if(name1[x]=='.') 
    { name1[x]=' ';}
  if(name1[x]=='/') 
    { name1[x]=' ';}
  for(y=0;y<len2;y++)
    { if((name1[x]==name2[y])&&(name2[y]!=' ')&&(name1[x]!=' ')) 
        { num++; for(z=0;z<len1;z++)
             {if((name1[x]==name1[z])&&(x!=z)&&(name1[x]!=' ')&&(name1[z]!=' ')) 
                { num++;name1[z]=' ';  }
             }/*end for z*/
   for(a=0;a<len2;a++) 
    { if((name1[x]==name2[a])&&(name1[x]!=' ')&&(name2[a]!=' ')&&(rep==0)) 
        { num++;   rep++;
          name2[a]=' ';
          }
          if((name1[x]==name2[a])&&(name1[x]!=' ')&&(name2[a]!=' ')&&(rep>0)) {
          num++;
          name2[a]=' ';
          }
       }/*end for a*/
       rep=0;
     }/*end if*/

  }/*end for y*/
}/*end for x*/
rep2=num;
num=num%6;
printf("\n\nThe total number of letters you both have is %d",rep2);
printf("\n\nYour compatability is: ");
switch (num)
{
    case 1: printf("Friend. \n\t Friends only. Sorry."); break;
    case 2: printf("Lovers. \n\t Yey! Lovers. you're one step closer to earn him/her."); break;
    case 3: printf("Anger. \n\t Stop daydreaming, you will only get him/her mad. Sorry."); break;
    case 4: printf("Marriage. \n\t The question is, will he/she become happy to you? "); break;
    case 5: printf("Engage. \n\t You have a 50% chance to marry him/her, \n\t and another 50% to lose him/her."); break;
    case 0: printf("Sweetheart. \n\t Don't be so happy. this is just a game."); break;
}
getch();
}
