#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
double x,y,m,p,dist,ar,third,s,t;
printf("enter x:n");
scanf("%lf",&x);
printf("enter y:n");

scanf("%lf",&y);
printf("enter mn");
scanf("%lf",&m);
printf("enter angle:n");
scanf("%lf",&p);
dist =sqrt((x*x)+(y*y)-(2*x*y*cos(p*(pi/180))));
printf("distance bw cliffs is::%lfn",dist);
s=(x+y+dist)/2;
t=(m*m)*p*(0.5)*(pi/180);

third=sqrt(s*(s-x)*(s-y)*(s-dist));
ar=(third-t);
printf("area without radar is::%lfn",ar);


return 0;
}