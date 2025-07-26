#include<stdio.h>
 #include<time.h>
 int main(){
 int date,year,month;
 printf("enter your date of birth: date:month: year:\n");
 scanf("%d %d %d",&date,&month,&year);
 time_t now = time(NULL);
 struct tm*current=localtime(&now);
 int d=current->tm_mday;
 int m=current->tm_mon+1;
 int y=current->tm_year+1900;    
 printf  
 
 ("current date:%02d%02d%02d\n",d,m,y);
 int d_age=d-date;
 int m_age= m-month;
 int y_age= y-year;
  if(d_age<date){
    d_age+=31;
    m_age--;
 }if(m_age<month){
   m_age+=12;
   y_age--;
 }
printf("total days:%d\n",d_age);
printf("total months:%d\n",m_age);
printf("total years:%d\n",y_age);
 return 0;
}