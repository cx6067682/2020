#include <iostream>
using namespace std;

void sortx(int array[],int n)
{
 int i,j,k,t;
 for(i=0;i<n-1;i++){
   k=i;
   for(j=i+1;j<n;j++)
     if(array[j]<array[k]) k=j;
   /////////////////////////////请补充必要的语句

   t=array[k];array[k]=array[i];array[i]=t;


   /////////////////////////////补充完毕
  }
}

int main(){
	int a[10],i,x;
	cout<<"请输入10个整数：";
	for(i=0;i<10;i++){
        cin>>x; a[i]=x;
	}
	//////////////////////////////////////
	cout<<"数组中的内容如下:\n";
    for (i=0;i<10;i++)
        cout<<a[i]<<"  "; cout<<"\n";
    //////////////////////////////////////
    sortx(a,10);
    //////////////////////////////////////
    cout<<"数组中的内容如下:\n";
    for (i=0;i<10;i++)
    	cout<<a[i]<<"  "; cout<<"\n";
    //////////////////////////////////////
    return 0;
}
