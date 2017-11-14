/*Pokemon: Battle of Survival - its a pokemon battle game having 7 pokemon in it
version: 1.1
author: Karan Mohindroo*/
/*
any feedbacks are welcomed at karanmohindroo14@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>   
#include<windows.h>
COORD coord={0,0};
void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void typdisplay(int typch);
int chkspd(int userspd,int cpuspd);
void delay(int a);
int calcdmgmul(int pktyp,int atktyp);
void colors();
int main()
{
    char tempstr[10],title[]={"******************************Pokemon: Battle For Survival******************************\n\n"};
    int user,cpu=0,i,j,usermv,cpumv,dmgmul,clk=0,a,k,c,c1,d,d1,e=0,e1=0;
    char moves[20][20]={/*0*/"tackle",/*1*/"scratch",/*2*/"ember",/*3*/"water gun",/*4*/"vine whip",/*5*/"growl",/*6*/"tail whip",/*7*/"sand tomb",/*8*/"thundershock",/*9*/"hydro pump",/*10*/"fire blast",/*11*/"solar beam",/*12*/"thunder",/*13*/"earthquake",/*14*/"gust",/*15*/"sky attack",/*16*/"scary face",/*17*/"agility",/*18*/"aurora beam",/*19*/"ice beam"};
    char atktyp[20]={'n','n','f','w','g','n','n','G','e','w','f','g','e','G','F','F','n','n','i','i'};
    int atkpwr[20]={40,40,40,40,40,0,0,50,40,80,80,80,100,80,40,90,0,0,40,90};
    int atkpp[20]={10,10,6,6,6,4,4,6,6,3,3,3,3,3,6,3,4,4,6,3};
    int atkppuser[20]={10,10,6,6,6,4,4,6,6,3,3,3,3,3,6,3,4,4,6,3};
    int atkppcpu[20]={10,10,6,6,6,4,4,6,6,3,3,3,3,3,6,3,4,4,6,3};
    struct pokemon{
    char name[20];
    float atk;
    float def;
    int spd;
    int hp;
    int moveset[4];
    char typ;
    };
    system("color 0e");
    struct pokemon p[7]={{"Pikachu",11,8,11,60,{0,6,8,12},'e'},{"Sandshrew",10,12,8,60,{1,5,7,13},'G'},{"Bulbasaur",11,9,10,60,{0,4,5,11},'g'},{"Charmander",13,8,9,60,{1,2,5,10},'f'},{"Squirtle",10,13,7,60,{0,3,6,9},'w'},{"Pidgeotto",9,9,12,60,{0,17,14,15},'F'},{"Seel",11,12,7,60,{0,16,18,19},'i'}};
    // "pokemon name", ,hp, {attack power} ,"type"
    printf("\n\n\n\t\t");
	while(title[clk]!='\0')          
    {                                 
            printf("%c", title[clk]);
            clk++;                      
            delay(40);                  
    }
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t   Game By :- Karan Mohindroo\n\n\t\t\t\t\t   Version 1.1");
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t  Please wait Game is LOADING....");
	
    printf("\n\t");
	for(int i=0;i<101;i++) 
	{
			printf("%c", 177);
			
	}
printf("\r\t");
	for(int i=0;i<50;i++) 
	{
			printf("%c", 219);
			delay(20);
			
	}
	for(int i=0;i<=49;i++) 
	{
			printf("%c", 219);
			delay(90);
			
	}int x;
	//delay(2000);printf("%c",219);
	y1:
		int f=0;
	system("cls");
            	
gotoxy(43,2);
printf("%c",201);
for(i=24;i<59;i++)
{
gotoxy(i+20,7-5);
printf("%c",205);
}
gotoxy(24+55,7-5);
printf("%c",187);
for(i=8;i<21;i++)
{gotoxy(43,i-5);
printf("%c",186);
}
gotoxy(43,21-5);
printf("%c",200);
for(i=24;i<59;i++)
{
gotoxy(i+20,21-5);
printf("%c",205);
}
gotoxy(72+7,21-5);
printf("%c",188);
for(i=20;i>7;i--)
{
gotoxy(72+7,i-5);
printf("%c",186);
}gotoxy(54,4);
	   printf("Pokemons In Game"); //delay(500);    
	   gotoxy(45,6);            
    printf("Index  Pokemon Name       Type");
    gotoxy(47,7); 
    printf("1      Pikachu         Electric");delay(500);
    gotoxy(47,8); 
    printf("2      Sandshrew       Ground");delay(500);
    gotoxy(47,9); 
    printf("3      Bulbasaur       Grass");delay(500);
    gotoxy(47,10); 
    printf("4      Charmander      Fire");gotoxy(47,11); delay(500);
	printf("5      Squirtle        Water");gotoxy(47,12); delay(500);
	printf("6      Pidgey          Flying");gotoxy(47,13); delay(500);
	printf("7      Seel            Ice");delay(500);
	gotoxy(2,17); 
	
//	printf("\n\t\t\t\t\t      1      Pikachu         Electric\n\t\t\t\t\t      2      Sandshrew       Ground\n\t\t\t\t\t      3      Bulbasaur       Grass\n\t\t\t\t\t      4      Charmander      Fire\n\t\t\t\t\t      5      Squirtle        Water\n\t\t\t\t\t      6      Pidgey          Flying\n\t\t\t\t\t      7      Seel            Ice\n\n");
   
    delay(2000);
   printf("%c",201);
   gotoxy(3,17); printf("%c",205);
   gotoxy(4,17); printf("%c",205);
   gotoxy(98,21); printf("%c",205);
   gotoxy(97,21); printf("%c",205);
   for(i=1;i<3;i++)
   {
   	gotoxy(2,i+17);
   	printf("%c",186);
   }
    for(i=2;i<=3;i++)
   {
   	gotoxy(99,i+17);
   	printf("%c",186);
   }
    
   gotoxy(3,17+1);
	printf("Short forms used in game ");gotoxy(3,19);printf("HP->Hit Point . It means Health");gotoxy(3,20);printf("PP->Power points . It means number of attack pokemon can make for particular move in one battle\n");
	gotoxy(99,21);	  	
	 printf("%c",188);
	    delay(2000);
	   
	  	gotoxy(22,22+2);
	  	printf("%c",201);
	  	for(i=0;i<10;i++)
	  	{
	  			gotoxy(23+i,22+2);
	  	
		  	printf("%c",205);
		  }
		  for(i=0;i<3;i++)
		  {
		  	 gotoxy(22,23+i+2);printf("%c",186);
		  }
		  for(i=0;i<3;i++)
		  {
		  	 gotoxy(22,23+i+2);printf("%c",186);
		  }
		  
		  for(i=0;i<10;i++)
	  	{
	  			gotoxy(63+i,22+2);
	  		printf("%c",205);
		  }
		  gotoxy(63+i,22+2);printf("%c",187);
		  for(i=0;i<3;i++)
		  {
		  	 gotoxy(73,23+i+2);printf("%c",186);
		  }
		  for(i=0;i<16;i++)
		  	{
		  		gotoxy(41+i,22+2);printf("%c",205);
			  }
			   gotoxy(41,23);
	    printf(" SELECTION MENU");
		  	gotoxy(3+20,25);
		  	
	 
	printf("IF YOU WANT TO START BATTLE RIGHT AWAY     PRESS 1");gotoxy(23,24+2);
    printf("IF YOU WANT TO INSPECT STATS OF POKEMON    PRESS 2");gotoxy(23,25+2);
    printf("SETTINGS                                   PRESS 3");
		gotoxy(26,28);
    scanf("%d",&x);
    if(x==3){
    colors();
	goto y1;
	}
    if(x==2)
    {x:
    	system("cls");
    gotoxy(43,2);
printf("%c",201);
for(i=24;i<59;i++)
{
gotoxy(i+20,7-5);
printf("%c",205);
}
gotoxy(24+55,7-5);
printf("%c",187);
for(i=8;i<21;i++)
{gotoxy(43,i-5);
printf("%c",186);
}
gotoxy(43,21-5);
printf("%c",200);
for(i=24;i<59;i++)
{
gotoxy(i+20,21-5);
printf("%c",205);
}
gotoxy(72+7,21-5);
printf("%c",188);
for(i=20;i>7;i--)
{
gotoxy(72+7,i-5);
printf("%c",186);
}gotoxy(57,4);
	   printf("POKEMONS"); //delay(500);    
	   gotoxy(45,6);            
    printf("Index  Pokemon Name       Type");
    gotoxy(47,7); delay(500);
    printf("1      Pikachu         Electric");delay(500);
    gotoxy(47,8); 
    printf("2      Sandshrew       Ground");delay(500);
    gotoxy(47,9); 
    printf("3      Bulbasaur       Grass");delay(500);
    gotoxy(47,10); 
    printf("4      Charmander      Fire");gotoxy(47,11); delay(500);
	printf("5      Squirtle        Water");gotoxy(47,12); delay(500);
	printf("6      Pidgey          Flying");gotoxy(47,13); delay(500);
	printf("7      Seel            Ice");delay(500);
	gotoxy(2,17); 
	printf("\n\n\t\t\t\tChoose the pokemon by entering Index : ");
	printf("\n\n\t\t\t\tEXIT    PRESS 8\n\t\t\t\t");
    scanf("%d",&x);
    if(x==8)goto y1;
    
    system("cls");
    gotoxy(43,2);
printf("%c",201);
for(i=24;i<59;i++)
{
gotoxy(i+20,7-5);
printf("%c",205);
}
gotoxy(24+55,7-5);
printf("%c",187);
for(i=8;i<21;i++)
{gotoxy(43,i-5);
printf("%c",186);
}
gotoxy(43,21-5);
printf("%c",200);
for(i=24;i<59;i++)
{
gotoxy(i+20,21-5);
printf("%c",205);
}
gotoxy(72+7,21-5);
printf("%c",188);
for(i=20;i>7;i--)
{
gotoxy(72+7,i-5);
printf("%c",186);
}gotoxy(48,4);
    printf("Name -> %s",p[x-1].name);
	gotoxy(48,5);
	printf("HP -> %d",p[x-1].hp);
	gotoxy(48,6);
	printf("ATK -> %0.1f",p[x-1].atk);
	gotoxy(48,6);printf("DEF -> %0.1f\n",p[x-1].def);
	gotoxy(48,7);
    printf("Speed -> %d");
	gotoxy(48,8);printf("MOVES :-",p[x-1].spd);
    gotoxy(48,10);
    printf("No.  PP     Type     Move Name\n");
    for(i=0;i<4;i++)
        {  gotoxy(48,11+i);
            printf("%d",i+1);gotoxy(48+5,11+i);printf("%d   ",atkpp[p[x-1].moveset[i]]);
           
            typdisplay(atktyp[p[x-1].moveset[i]]);
         
            puts(moves[p[x-1].moveset[i]]);
        }
        printf("\n\n\t\t\tSelect an option from below");
        printf("\n\t\t\t1  Start Battle\n\t\t\t2  Check Stats\n");int x1;
        printf("\t\t\t");
        scanf("%d",&x1);
        if(x1==1)
        {system("cls");
        gotoxy(43,2);
printf("%c",201);
for(i=24;i<59;i++)
{
gotoxy(i+20,7-5);
printf("%c",205);
}
gotoxy(24+55,7-5);
printf("%c",187);
for(i=8;i<21;i++)
{gotoxy(43,i-5);
printf("%c",186);
}
gotoxy(43,21-5);
printf("%c",200);
for(i=24;i<59;i++)
{
gotoxy(i+20,21-5);
printf("%c",205);
}
gotoxy(72+7,21-5);
printf("%c",188);
for(i=20;i>7;i--)
{
gotoxy(72+7,i-5);
printf("%c",186);
}gotoxy(57,4);
	   printf("POKEMONS"); //delay(500);    
	   gotoxy(45,6);            
    printf("Index  Pokemon Name       Type");
    gotoxy(47,7); 
    printf("1      Pikachu         Electric");delay(500);
    gotoxy(47,8); 
    printf("2      Sandshrew       Ground");delay(500);
    gotoxy(47,9); 
    printf("3      Bulbasaur       Grass");delay(500);
    gotoxy(47,10); 
    printf("4      Charmander      Fire");gotoxy(47,11); delay(500);
	printf("5      Squirtle        Water");gotoxy(47,12); delay(500);
	printf("6      Pidgey          Flying");gotoxy(47,13); delay(500);
	printf("7      Seel            Ice");delay(500);
	gotoxy(2,17); }
		if(x1==2)goto x;
	}
	if(x==1)
	{
		system("cls");
		            	
gotoxy(43,2);
printf("%c",201);
for(i=24;i<59;i++)
{
gotoxy(i+20,7-5);
printf("%c",205);
}
gotoxy(24+55,7-5);
printf("%c",187);
for(i=8;i<21;i++)
{gotoxy(43,i-5);
printf("%c",186);
}
gotoxy(43,21-5);
printf("%c",200);
for(i=24;i<59;i++)
{
gotoxy(i+20,21-5);
printf("%c",205);
}
gotoxy(72+7,21-5);
printf("%c",188);
for(i=20;i>7;i--)
{
gotoxy(72+7,i-5);
printf("%c",186);
}gotoxy(49,4);
	   printf(" BATTLE POKEMON SELECTION"); //delay(500);    
	   gotoxy(45,6);            
    printf("Index  Pokemon Name       Type");
    gotoxy(47,7); 
    printf("1      Pikachu         Electric");delay(500);
    gotoxy(47,8); 
    printf("2      Sandshrew       Ground");delay(500);
    gotoxy(47,9); 
    printf("3      Bulbasaur       Grass");delay(500);
    gotoxy(47,10); 
    printf("4      Charmander      Fire");gotoxy(47,11); delay(500);
	printf("5      Squirtle        Water");gotoxy(47,12); delay(500);
	printf("6      Pidgey          Flying");gotoxy(47,13); delay(500);
	printf("7      Seel            Ice");
	gotoxy(2,17); 
	
	}
	printf("\n\t\t\t\tChoose your pokemon by entering Index : ");
	printf("\n\n\t\t\t\tEXIT    PRESS 8\n\t\t\t\t");
    scanf("%d", &user);
    if(user==8)goto y1;
    
    user=user-1;
    srand(time(NULL));
    while(cpu==user)
    {cpu=rand()%7;}
    system("cls");
    printf("You chose %s\n\n", p[user].name);
    printf("ASH chose %s\n\n",p[cpu].name);
    printf("Press enter to continue...........");
    fflush(stdin);	
    gets(tempstr);
    system("cls");
    c=p[cpu].hp;
    c1=c;
    d=p[user].hp;
    d1=d;
    for(a=0;;a++)
    {

        printf("%s\nHP: %d\n", p[cpu].name,p[cpu].hp);
       if(a==0)
        {
            for(i=0;i<(p[cpu].hp);i++)
            {printf("%c",219);
            delay(10);
			}
            e1=1;
        }
        else
        {
			
        	 for(int i1=0;i1<60;i1++)
        	 {
        	 	gotoxy(i1,12);
        	 	printf("%c",177);
			 }
                    gotoxy(0,12);
           for(i=0;i< c - p[cpu].hp;i++)
            {
            	
                printf("\r");
                for(k=0;k<c1;k++)
                {
                    printf("%c",219);
                }
                for(i=0;i<c-c1;i++){
			
                    printf("%c",177);
                }
                c1--;
                delay(20);
                e1=1;
            }
            
            
        }
        if(e1==0)
        {
            for(i=0;i<p[cpu].hp;i++)
                printf("%c", 219);
        }
        printf("\n\n");
        printf("%s\nHP: %d\n", p[user].name,p[user].hp);
        if(a==0)
        {
            for(i=0;i<p[user].hp;i++)
            {
                printf("%c",219);
                delay(10);
            }
            e=1;
        }
        else
        {
        	 for(int i1=0;i1<60;i1++)
        	 {
        	 	gotoxy(i1,15);
        	 	printf("%c",177);
			 }
                    gotoxy(0,15);
            for(i=0;i< d - p[user].hp;i++)
            {
                printf("\r");
                for(k=0;k<d1;k++)
                    printf("%c",219);
                for(i=0;i<d-d1;i++)
                    printf("%c",177);
                d1--;
                delay(20);
                e=1;
            }
        }
        if(e==0)
        {
            for(i=0;i<p[user].hp;i++)
                printf("%c",219);
        }
        printf("\n");
         c=p[cpu].hp;
        c1=c;
        d=p[user].hp;
        d1=d;
        e=0;
        e1=0;
        printf("\nSelect a Move from Below \n\n");
        for(i=0;i<4;i++)
        {
            printf("%d: %d/%d ", i+1,atkppuser[p[user].moveset[i]],atkpp[p[user].moveset[i]]);
            typdisplay(atktyp[p[user].moveset[i]]);
            puts(moves[p[user].moveset[i]]);
        }
        
        scanf("%d", &usermv);
        while(usermv > 4 || usermv < 1)
        {
            printf("Invailid move try again\n");
            scanf("%d",&usermv);
        }
        while(atkppuser[p[user].moveset[usermv-1]]==0)
        {
            if(atkppuser[p[user].moveset[usermv-1]]==0)
                printf("No PP left. Try other move\n");
            scanf("%d", &usermv);
        }
        usermv=usermv-1;
        cpumv=rand()%4;
        while(atkppcpu[p[cpu].moveset[cpumv]]==0)
        {
            cpumv=rand()%4;
        }
        system("cls");
        if(chkspd(p[user].spd,p[cpu].spd)==1)
        {
            printf("\n\n%s used ", p[user].name);
            puts(moves[p[user].moveset[usermv]]);
            atkppuser[p[user].moveset[usermv]]--;
            dmgmul=calcdmgmul(p[cpu].typ,atktyp[p[user].moveset[usermv]]);
            p[cpu].hp = p[cpu].hp - (((p[user].atk*atkpwr[p[user].moveset[usermv]])/(p[cpu].def*20))*dmgmul);
            if(p[user].moveset[usermv]==5)
               {
                   p[cpu].atk--;
                   printf("\n%s ATTACK FELL",p[cpu].name);
               }
            if(p[user].moveset[usermv]==6)
                {
                    p[cpu].def--;
                    printf("\n%s DEFENSE FELL",p[cpu].name);
                }
                if(p[user].moveset[usermv]==16)
               {
                   p[cpu].spd--;
                   printf("\n%s SPEED FELL",p[cpu].name);
               }
               if(p[user].moveset[usermv]==17)
               {
                   p[user].spd++;
                   printf("\n%s SPEED ROSE",p[user].name);
               }
            if(p[cpu].hp<=0)
            {printf("\n\n%s fainted\n\nYOU WIN\n\n", p[cpu].name);f=0;
            break;
            }
            printf("\n\n%s used ",p[cpu].name);
            puts(moves[p[cpu].moveset[cpumv]]);
            atkppcpu[p[cpu].moveset[cpumv]]--;
            dmgmul=calcdmgmul(p[user].typ,atktyp[p[cpu].moveset[cpumv]]);
            p[user].hp = p[user].hp - (((p[cpu].atk*atkpwr[p[cpu].moveset[cpumv]])/(p[user].def*20))*dmgmul);
            if(p[cpu].moveset[cpumv]==5)
                {
                    p[user].atk--;
                    printf("\n%s ATTACK FELL",p[user].name);
                }
            if(p[cpu].moveset[cpumv]==6)
                {
                    p[user].def--;
                    printf("\n%s DEFENSE FELL",p[user].name);
                }
                if(p[cpu].moveset[cpumv]==16)
               {
                   p[user].spd--;
                   printf("\n%s SPEED FELL",p[user].name);
               }
               if(p[cpu].moveset[cpumv]==17)
               {
                   p[cpu].spd++;
                   printf("\n%s SPEED ROSE",p[cpu].name);
               }
            printf("\n\n");
        }
        else
        {
            printf("\n\n%s used ",p[cpu].name);
            puts(moves[p[cpu].moveset[cpumv]]);
            atkppcpu[p[cpu].moveset[cpumv]]--;
            dmgmul=calcdmgmul(p[user].typ,atktyp[p[cpu].moveset[cpumv]]);
           p[user].hp = p[user].hp - (((p[cpu].atk*atkpwr[p[cpu].moveset[cpumv]])/(p[user].def*20))*dmgmul);
            if(p[cpu].moveset[cpumv]==5)
               {
                   p[user].atk--;
                   printf("\n%s ATTACK FELL",p[user].name);
               }
            if(p[cpu].moveset[cpumv]==6)
                {
                    p[user].def--;
                    printf("\n%s DEFENSE FELL",p[user].name);
                }
                if(p[cpu].moveset[cpumv]==16)
               {
                   p[user].spd--;
                   printf("\n%s SPEED FELL",p[user].name);
               }
               if(p[cpu].moveset[cpumv]==17)
               {
                   p[cpu].spd++;
                   printf("\n%s SPEED ROSE",p[cpu].name);
               }
            if(p[user].hp<=0)
            {printf("\n\n%s fainted\n\nYou lose\n\n", p[user].name);f=1;
            break;}
            printf("\n\n%s used ", p[user].name);
            puts(moves[p[user].moveset[usermv]]);
            atkppuser[p[user].moveset[usermv]]--;
            dmgmul=calcdmgmul(p[cpu].typ,atktyp[p[user].moveset[usermv]]);
           p[cpu].hp = p[cpu].hp - (((p[user].atk*atkpwr[p[user].moveset[usermv]])/(p[cpu].def*20))*dmgmul);
            if(p[user].moveset[usermv]==5)
                {
                    p[cpu].atk--;
                    printf("\n%s ATTACK FELL",p[cpu].name);
                }
            if(p[user].moveset[usermv]==6)
               {
                   p[cpu].def--;
                   printf("\n%s DEFENSE FELL",p[cpu].name);
               }
               if(p[user].moveset[usermv]==16)
               {
                   p[cpu].spd--;
                   printf("\n%s SPEED FELL",p[cpu].name);
               }
               if(p[user].moveset[usermv]==17)
               {
                   p[user].spd++;
                   printf("\n%s SPEED ROSE",p[user].name);
               }
            printf("\n\n");
        }
        if(p[user].hp<=0)
            {printf("%s fainted\nYou lose", p[user].name);f=1;
        break;}
        if(p[cpu].hp<=0)
            {printf("%s fainted\nYOU WIN", p[cpu].name);f=0;
        break;
        }
        
    }
   
    delay(2000);
    system("cls");
	gotoxy(40,7);
    if(f==1)
    {
    	printf("POKEMON MASTER NEVER LOOOSES HOPE");
    	delay(2000);
	}
	if(f==0)
	{
		printf("CONGRATULATIONS!! YOU ARE A POKEMON MASTER");
		delay(2000);
	}
	gotoxy(40,12);
	char ctt,ctt1;
	scanf("%c",&ctt1);
	printf("Do You Wish to Play Again(Y/N)");
	scanf("%c",&ctt);
	if(ctt=='y'||ctt=='Y')
	{
		goto y1;
	}
	else if(ctt=='n'||ctt=='N')
	{gotoxy(40,17);
	printf("THANKYOU  FOR  PLAYING");
    return 0;
	}
	
}
int chkspd(int userspd,int cpuspd)
{
    srand(time(NULL));
    if(userspd>cpuspd)
        return 1;
    if(cpuspd>userspd)
        return 2;
}
int calcdmgmul(int pktyp,int atktyp)
{
    switch(pktyp)
    {
    case 101:
        switch(atktyp)
        {
        case 101:
            return 1;
            break;
        case 71:
            return 3;
            break;
        case 103:
            return 2;
            break;
        case 102:
            return 2;
            break;
        case 119:
            return 2;
            break;
        case 110:
            return 2;
            break;
        case 70:
            return 1;
            break;
        case 105:
            return 2;
            break;
        }
        break;
    case 71:
        switch(atktyp)
        {
        case 101:
            return 1;
            break;
        case 71:
            return 2;
            break;
        case 103:
            return 3;
            break;
        case 102:
            return 1;
            break;
        case 119:
            return 3;
            break;
        case 110:
            return 2;
            break;
        case 70:
            return 2;
            break;
        case 105:
            return 3;
            break;
        }
        break;
    case 103:
        switch(atktyp)
        {
        case 101:
            return 2;
            break;
        case 71:
            return 2;
            break;
        case 103:
            return 1;
            break;
        case 102:
            return 3;
            break;
        case 119:
            return 2;
            break;
        case 110:
            return 2;
            break;
        case 70:
            return 3;
            break;
        case 105:
            return 3;
            break;
        }
        break;
    case 102:
        switch(atktyp)
        {
        case 101:
            return 2;
            break;
        case 71:
            return 3;
            break;
        case 103:
            return 1;
            break;
        case 102:
            return 1;
            break;
        case 119:
            return 3;
            break;
        case 110:
            return 2;
            break;
        case 70:
            return 2;
            break;
        case 105:
            return 1;
            break;
        }
        break;
    case 119:
        switch(atktyp)
        {
        case 101:
            return 3;
            break;
        case 71:
            return 2;
            break;
        case 103:
            return 3;
            break;
        case 102:
            return 1;
            break;
        case 119:
            return 1;
            break;
        case 110:
            return 2;
            break;
        case 70:
            return 2;
            break;
        case 105:
            return 1;
            break;

        }
        break;
    case 70:
         switch(atktyp)
        {
        case 101:
            return 2;
            break;
        case 71:
            return 2;
            break;
        case 103:
            return 2;
            break;
        case 102:
            return 3;
            break;
        case 119:
            return 2;
            break;
        case 110:
            return 2;
            break;
        case 70:
            return 2;
            break;
        case 105:
            return 1;
            break;

        }
        break;
    case 105:
         switch(atktyp)
        {
        case 101:
            return 3;
            break;
        case 71:
            return 1;
            break;
        case 103:
            return 1;
            break;
        case 102:
            return 2;
            break;
        case 119:
            return 2;
            break;
        case 110:
            return 2;
            break;
        case 70:
            return 2;
            break;
        case 105:
            return 3;
            break;

        }
        break;
    }
}/*Karan*/
void typdisplay(int typch)
{
    switch(typch)
    {
        case 101:
            printf("  electric  ");
            break;
        case 71:
            printf("  ground    ");
            break;
        case 103:
            printf("  grass     ");
            break;  
        case 102:
            printf("  fire      ");
            break;
        case 119:
            printf("  water     ");
            break;
        case 110:
            printf("  normal    ");
            break;
        case 70:
            printf("  flying    ");
            break;
        case 105:
            printf("  ice       ");
            break;
    }
}
void delay(int a)
{
    clock_t start;
    start=clock();
    while(clock() - start < a)
    {

    }
}
void colors()
{	int x;
x1:
	system("cls");
	int i;
gotoxy(43,7);
printf("%c",201);
for(i=24;i<52;i++)
{
gotoxy(i+20,7);
printf("%c",205);
}
printf("%c",187);
for(i=8;i<21;i++)
{gotoxy(43,i);
printf("%c",186);
}
gotoxy(43,21);
printf("%c",200);
for(i=24;i<52;i++)
{
gotoxy(i+20,21);
printf("%c",205);
}
gotoxy(72,21);
printf("%c",188);
for(i=20;i>7;i--)
{
gotoxy(72,i);
printf("%c",186);
}
gotoxy(46,9);
	printf("CHANGE TEXT COLOR  PRESS 1");
	gotoxy(46,11);
	printf("RETURN   PRESS 2");
	gotoxy(46,13);
	scanf("%d",&x);
	if(x==2)return ;
	if(x==1)
	{system("cls");
	            	
gotoxy(43,5);
printf("%c",201);
for(i=24;i<59;i++)
{
gotoxy(i+20,5);
printf("%c",205);
}
gotoxy(24+55,5);
printf("%c",187);
for(i=8;i<27;i++)
{gotoxy(43,i-2);
printf("%c",186);
}
gotoxy(43,25);
printf("%c",200);
for(i=24;i<59;i++)
{
gotoxy(i+20,25);
printf("%c",205);
}
gotoxy(72+7,25);
printf("%c",188);
for(i=26;i>7;i--)
{
gotoxy(72+7,i-2);
printf("%c",186);
}gotoxy(54,4);
	printf("\n\n\t\t\t\t\t\t");
		printf("LIST OF COLORS\n\n");delay(500);
		printf("\t\t\t\t\t\t");
		printf("1.DARK BLUE\n");delay(500);
		printf("\t\t\t\t\t\t");
		printf("2.DARK GREEN\n");delay(500);
		printf("\t\t\t\t\t\t");
		printf("3.DARK AQUA\n");delay(500);//;Karan Mohindroo
		printf("\t\t\t\t\t\t");
		printf("4.DARK RED\n\t\t\t\t\t\t");delay(500);printf("5.DARK PURPLE\n\t\t\t\t\t\t");delay(500);printf("6.DARK YELLOW\n\t\t\t\t\t\t");delay(500);
		printf("7.DARK WHITE\n\t\t\t\t\t\t");delay(500);printf("8.GREY\n\t\t\t\t\t\t");delay(500);printf("9.LIGHT BLUE \n\t\t\t\t\t\t");delay(500);
		printf("10.LIGHT GREEN\n\t\t\t\t\t\t");printf("11.LIGHT AQUA\n");
		printf("\t\t\t\t\t\t");delay(500);
		printf("12.LIGHT RED\n\t\t\t\t\t\t");delay(500);printf("13.LIGHT PURPLE\n\t\t\t\t\t\t");delay(500);
		printf("14.LIGHT YELLOW\n\t\t\t\t\t\t");
		delay(500);printf("15.BRIGHT WHITE\n\t\t\t\t\t\t");delay(500);
		printf("16.EXIT\n\t\t\t\t\t\t");
		scanf("%d",&x);
		if(x==1)
		{
			system("color 01");
		}
		if(x==2)
		{
			system("color 02");
		}
		if(x==3)
		{
			system("color 03");
		}
		if(x==4)
		{
			system("color 04");
		}
		if(x==5)
		{
			system("color 05");
		}
		if(x==6)
		{
			system("color 06");
		}
		if(x==7)
		{
			system("color 07");
		}
		if(x==8)
		{
			system("color 08");
		}if(x==9)
		{
			system("color 09");
		}
		if(x==10)
		{
			system("color 0A");
		}
		if(x==11)
		{
			system("color 0B");
		}
		if(x==12)
		{
			system("color 0C");
		}
		if(x==13)
		{
			system("color 0D");
		}
		if(x==14)
		{
			system("color 0E");
		}
		if(x==15)
		{
			system("color 0F");
		}
		
		goto x1;
		
	}
	else
	{system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tINVALID OPTION");
		printf("\n\n\n\n\t\t\t\t\t  PLEASE SELECT VALID OPTION");
		delay(1000);
		goto x1;
	}
	
}
/*void effdisplay(int dmgmul)
{
    switch(dmgmul)
    {
    case 1:
        printf("Its not very effective");
        break;
    case 4:
        printf("Its super effective");
        break;
    }
}*/
