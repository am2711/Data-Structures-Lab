#include<iostream.h>
#include<conio.h>
class SparseMatrix{
  public:
    int row,col,value;
};
void display(SparseMatrix b[],int n){
    for(int i=0;i<n;i++){
      cout<<b[i].row<<" "<<b[i].col<<" "<<b[i].value<<endl;
    }
    cout<<"\n"<<endl;
}
void transpose(SparseMatrix s[20]){
    SparseMatrix b[20];
    int n=s[0].value;
    b[0].row=s[0].col;
    b[0].col=s[0].row;
    b[0].value=n;
    int row_term[20],starting_pos[20],x;
    if(n>0){
      for(int i=0;i<s[0].col;i++)
                row_term[i]=0;
	  for(int j=1;j<=n;j++)
		row_term[s[j].col]++;
      starting_pos[0]=1;
      for(int l=1;l<s[0].col;l++)
		starting_pos[l]=starting_pos[l-1]+row_term[l-1];
      for(int m=0;m<=n;m++){
	x=starting_pos[s[m].col]++;
		b[x].row=s[m].col;
		b[x].col=s[m].row;
		b[x].value=s[m].value;
        }
	  }

	cout<<"The transpose is \n";
  display(b,n+1);

}
void read(SparseMatrix s[50],int a[10][10]){
  cout<<"enter order of sparse matrix ";
  int m,n,k=1;
  cin>>m>>n;
  cout<<"Enter matrix \n";
  s[0].row=m;
  s[0].col=n;
  for (int i = 0; i <m; i++){
	for (int j = 0; j<n; j++){
	      cin>>a[i][j];
	      if (a[i][j] != 0)
	      {
		   s[k].value=a[i][j];
		   s[k].row=i;
		   s[k].col=j;
		   k++;
	      }
	}
  }
  s[0].value=k-1;
  display(s,k);
  transpose(s);
}
void main(){
  clrscr();
  int a[10][10];
  SparseMatrix s[50];
  read(s,a);
  getch();

}
