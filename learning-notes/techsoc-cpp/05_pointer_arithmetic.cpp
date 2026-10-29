// Class 5: pointer arithmetic and const pointers.

//pointer arithmetic
// operator : +,-,++,-- and pointer difference
// ptr++ => ptr+1=ptr
// ptr-- => ptr-1=ptr
// int *p
// int *q = p+n
// int q-p = n
// this output n gives the numner of elements 
// when unassigned the ptr will assume a garbage value
// pointers can be used to print arrays in reverse and much more
//const values have const pointers, const pointers can hold both const int and variable int 
// const pointers can change the values stored in them
// they themselves can change from const to variable
// values with const pointers cant be manipulated with pointers 
// for const int* :: the pointed value is unchanged, but the pointer can point to some other value   
// *ptr = 3 > invalid :: *ptr = &b > valid
// for int* const ptr = &a :: the pointed value can be manipulated, but the pointer can't be changed to some other value
// *ptr = 3 > valid :: *ptr = &b > invalid
// for both value and the pointer to remain uchanged :: const int* const ptr = &a;


// #include<iostream>
// using namespace std;
// int main (){
//     int a;
//     double b;
//     float c;
//     char d;
//     int *p = &a;
//     double *po = &b;
//     float *poi = &c;
//     char *poin = &d;
//     printf("%u\t",p);
//     printf("%u\t",p+1);
//     printf("%u\n",p-1);
//     printf("%u\t",po);
//     printf("%u\t",po+1);
//     printf("%u\n",po-1);
//     printf("%u\t",poi);
//     printf("%u\t",poi+1);
//     printf("%u\n",poi-1);
//     printf("%u\t",poin);
//     printf("%u\t",poin+1);
//     printf("%u",poin-1);
// }


// #include<iostream>
// #include <cstdio>
// using namespace std;
// int main (){
//     int a;
//     double b;
//     float c;
//     char d;
//     int *p = &a;
//     double *po = &b;
//     float *poi = &c;
//     char *poin = &d;
//     cout<<(long long)p<<" "<<(long long)++p<<" "<<(long long)--p <<endl<< (long long)po<<" "<<(long long) ++po<<" "<<(long long)--po <<endl<<(long long)poi<<" "<<(long long)++poi<<" "<<(long long)--poi<<endl<<(long long)poin<<" "<<(long long)++poin<<" "<<(long long)--poin<<endl;
// }


// #include<cstdio>
// using namespace std;
// int  main (){
// int ar[5] ={1,2,3,4,5};
// int *point = &ar[0];
// int *pointe = point+4;
// printf("\n this is the difference : %d\n",(pointe-point));
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int ar[] = {1,2,3,4,5,6,7};
//     for(int i = 0; i <= 6; i++){
//         cout<< *(ar+i)<<" ";
//     }
//     cout<<endl;
//     for(int i = 6; i >= 0; i--){
//         cout<< *(ar+i)<<" ";
//     }
//}


//imp @@@@@@@@####
// #include<iostream>
// using namespace std;
// int main (){
//     int ar[]={1,2,3};
//     int n = sizeof(ar)/sizeof(int);
//     for(int i=n-1;i>=0;i--){
//         cout<<*(ar+i)<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     const int a=10;
//     const int* const ptr = &a;
//     int b = 20;
//     *ptr = 100;
//     ptr = &b;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a =20;
//     const int*p =&a;
//     a = *(p++);
//     cout<<a<<" "<<p;
// }
