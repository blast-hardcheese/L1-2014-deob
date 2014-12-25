int main(){

 char wtf[64] = "AAAAAAAAA"; wtf[0] = 'f' ;wtf[1] = 'l' ;
    wtf[2] = 'a'; wtf[3] = 'g'; wtf[4] = '=' ; wtf[5] = 'w'; wtf[6] = 'h' ;
 wtf[7]='a';

 wtf[8]='t';

 int wut = 0; for(wut=0; wut<9; wut++)
    wtf[wut]++; wtf[7] = 'u'; wtf[8] = 'h'; wtf[6] -=1;
 wtf[6] = 'u'; wtf[7] = 't' ;

 for(wut=0; wut<1; wut++) wtf[wut] = 0; wtf[wut]=0;
    printf( "%s%s" ,wtf, "" ); ; wtf[2] = 'a'; wtf[3] = 'g'; wtf[4] = '=' ;
 wtf[6] = 'u'; wtf[7] = 't' ;
    printf( "%s%s" ,wtf, "" ); ; wtf[2] = 'a'; wtf[3] = 'g'; wtf[4] = '=' ;
 wtf[5]='w';

 wtf[0] = 'f' ; wtf[1] = 'l';

 wtf[8]=0;printf( "%s%s" ,wtf, "" );;
    while( 1 ) { printf( "%s%s" ,"", "" );
 printf( "%s%s" ,"\n", "" );}
}
