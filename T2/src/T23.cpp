//��������ƽ����׳ˡ�
#include <iostream>
using namespace std;
class IntegerNum {
    private:int n;
    public:
		IntegerNum(int x){n=x;}
		int getSQR();
		int getJie();
};
int IntegerNum::getSQR(){
	cout<<n;
	return n*n;
}
int IntegerNum::getJie(){
	int x=1;
	for(int i=1;i<=n;i++) x=x*i;
	return x;
}
int main() {
    int n;
    cout<<"������һ��һλ����:";
	cin>>n;
    cout<<n;
    IntegerNum num(n);
    cout<<"\n����������ǣ�"<<n<<"  ��ƽ���ǣ�"<<num.getSQR();
	cout<<".  ��׳���:  "<<num.getJie()<<" . \n";
 }
