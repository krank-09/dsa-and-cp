// Area of a triangle.

#include<stdio.h>
#include<math.h>
int main(){
    double s1,s2,s3,ar,semiperi;
    printf("enter three sides for a triangle : ");
    scanf("%lf %lf %lf",&s1,&s2,&s3); 
    if(s1<s2+s3 && s2<s1+s3 && s3<s2+s1){
        printf("triangle possible\n");
        semiperi=(s1+s2+s3)/2;
        printf("%.2lf\n",semiperi);
        ar=sqrt(semiperi*(semiperi-s1)*(semiperi-s2)*(semiperi-s3));
        printf("%.2lf",ar);
        printf("area of the triangle : %.2lf\n",ar);
    } else 
        printf("triangle not possible");  
return 0;        
}