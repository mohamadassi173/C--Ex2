#include <stdio.h>

double c[50][2];
int l = sizeof(c)/sizeof(c[0]);


int newAcc(double x){
int i;
for(i=0;i<l;i=i+1){
if(c[i][0]==0){
c[i][0]=i+901;
c[i][1]=x;
printf("%d\n",(int)c[i][0]);
return 0;
}
}
printf("You cant open more than 50 accounts!/n");
return 0;
}

double showAmount(int x){
  if(x > 951 || x < 901){
    printf("Error: The accounts must be between 901-951/n");
    return 0;
  }
int i;
for(i=0;i<l;i=i+1){
if(c[i][0]==x){
printf("%.2f\n",c[i][1]);
return 0;
}
}
printf("This account is closed!/n");
return 0;
}


int deposit(int x,double y){
 if(x > 951 || x < 901){
    printf("Error: The accounts must be between 901-951/n");
    return 0;
  }
int i;
for(i=0;i<l;i=i+1){
if(c[i][0]==x){
  c[i][1]=c[i][1]+y;
printf("%.2f\n",c[i][1]);
return 0;
}
}
printf("this account is closed/n");
  return 0;
}

int withDraw(int x,double y){
 if(x > 951 || x < 901){
    printf("Error: The accounts must be between 901-951/n");
    return 0;
  }
int i;
for(i=0;i<l;i=i+1){
if(c[i][0]==x){
  c[i][1]=c[i][1]-y;
printf("%.2f\n",c[i][1]);
return 0;
}
}
printf("this account is closed/n");
  return 0;
}

int close(int x){
 if(x > 951 || x < 901){
    printf("Error: The accounts must be between 901-951/n");
    return 0;
  }
int i;
for(i=0;i<l;i=i+1){
if(c[i][0]==x){
c[i][0]=0;
c[i][1]=0;
return 0;
}
}
printf("this account is already closed/n");
 return 0;
}

int addPercent(double y){
int i;
for(i=0;i<l;i=i+1){
if(c[i][0]<952 && c[i][0]>900){
c[i][1]=c[i][1]*(100+y)/100;
return 0;
}
}
  return 0;
}

int showOpenAcc(){
int i;
for(i=0;i<l;i=i+1){
if(c[i][0]>900 && c[i][0]<952){
printf("%d: %.2f\n",(int)c[i][0],c[i][1]);
}
}
  return 0;
}

int closeAll(){
int i;
for(i=0;i<l;i=i+1){
c[i][0]=0;
c[i][1]=0;
}
  return 0;
}

