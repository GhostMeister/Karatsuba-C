#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "math.h";

int power(int a,int b){
    if(b==0){
        return 1;
    }else{
    return a*power(a,b-1);
    }
}

double multi(int u,int v){

int s = 0;
int w = 0;
int x = 0;
int y = 0;
int z = 0;
int n = 0;

if((u<10 && u>0) || (v<10 && v>0)){
    n = 1;
}else{
    n = 2;
}

if(n<2){
 w = u / 10;
 x = u % 10;
 y = v / 10;
 z = v % 10;
	return pow(10,2)*(w*y)+ 10*((w*z)+(x*y))+(x*y);
}else{
 s = n / 2;
 w = u / pow(10,s);
 x = u % power(10,s);
 y = v / pow(10,s);
 z = v % power(10,s);

    return (multi(w,y)*power(10,2*s) + (multi(w,z)+multi(x,y))*power(10,s) + multi(x,z));
}
}

int main(){

    long resultat = 0;

    resultat = multi(1000,2000);

    printf("%ld",resultat);

return 0;
}
