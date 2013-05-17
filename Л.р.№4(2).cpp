#include <iostream>
#include <string.h>
using namespace std;
int skob(char*,char,char,int*);

void main(){
  char A[100]="";
	cin>>A;
	int b,m,i,k,s,p;
	p=s=m=i=k=0;
	b=strlen(A);
	while (!(i>b)) {
		skob(&A[i],')','(',&k);
		skob(&A[i],'>','<',&m);
		skob(&A[i],'}','{',&s);
		skob(&A[i],']','[',&p);
		if ((k<0)||(m<0)||(p<0)||(s<0)) break;
		i++;}
	if ((k==0)&&(m==0)&&(s==0)&&(p==0)) cout<<"Correct";
	else cout<<"Incorrect";
	cin.get();
	cin.get();
}
int skob(char *x,char y,char z,int* c){
	if (*x==y) c--;
	if (*x==z) c++;
}

