#include <iostream>
using namespace std;

void sortx(int array[],int n)
{
 int i,j,k,t;
 for(i=0;i<n-1;i++){
   k=i;
   for(j=i+1;j<n;j++)
     if(array[j]<array[k]) k=j;
   /////////////////////////////�벹���Ҫ�����

   t=array[k];array[k]=array[i];array[i]=t;


   /////////////////////////////�������
  }
}

int main(){
	int a[10],i,x;
	cout<<"������10��������";
	for(i=0;i<10;i++){
        cin>>x; a[i]=x;
	}
	//////////////////////////////////////
	cout<<"�����е���������:\n";
    for (i=0;i<10;i++)
        cout<<a[i]<<"  "; cout<<"\n";
    //////////////////////////////////////
    sortx(a,10);
    //////////////////////////////////////
    cout<<"�����е���������:\n";
    for (i=0;i<10;i++)
    	cout<<a[i]<<"  "; cout<<"\n";
    //////////////////////////////////////
    return 0;
}
