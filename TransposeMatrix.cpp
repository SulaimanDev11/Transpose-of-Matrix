#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main(){
	system("color 0D");
	const int s=4;
	int mat[s][s],trans[s][s],i,j;
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
			cout<<"Enter element of ["<<i+1<<"] row & ["<<j+1<<"] column: ";
			cin>>mat[i][j];
		}
	}
	system("cls");
	cout<<"Elements of Matrix\n\n";
	for(i=0;i<s;i++){
		
		for(j=0;j<s;j++){
			cout<<"\t"<<mat[i][j];
		}
		cout<<endl<<endl;
	}
	for(i=0;i<s;i++){	
		for(j=0;j<s;j++){
			trans[i][j]=mat[j][i];
		}
	}
	cout<<endl<<endl;
	cout<<"Transpose of Matrix\n\n";
	for(i=0;i<s;i++){	
		for(j=0;j<s;j++){
			cout<<"\t"<<trans[i][j];
		}
		cout<<endl<<endl;
	}
	
	
	return 0;
}
