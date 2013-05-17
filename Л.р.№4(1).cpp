#include <iostream>
#include <string.h>
using namespace std;

void main(){
  char A[100]="";
	cin>>A;
	int b,m,i,k,s,p;
	p=s=m=i=k=0;
	b=strlen(A);
	while (!(i>b)) {
		if (A[i]==')') k--;
		if (A[i]=='(') k++;
		if (A[i]=='>')	m--;
		if (A[i]=='<')	m++;
		if (A[i]=='}') p--;
		if (A[i]=='{') p++;
		if (A[i]==']')	s--;
		if (A[i]=='[')	s++;
		if ((k<0)||(m<0)||(p<0)||(s<0)) break;
		i++;
	}
	if ((k==0)&&(m==0)&&(s==0)&&(p==0)) cout<<"Correct";
	else cout<<"Incorrect";
	cin.get();
	cin.get();
}
