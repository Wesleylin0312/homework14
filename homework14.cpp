#include <iostream>
using namespace std ;
int w, x,y;
int main (int argc,char** argv)
{
	cout<<"�T���Ϊ��T����@�w��������������M�j��ĤT��A��J�T��A�P�_�O�_�i�򦨤T���� "<<endl;
	cin>> w;
	cin>> x;
	cin>> y;
	if(w+x>y)
	{
		if(w+y>x)
		{
			if(x+y>w)
			{
				cout<<"�i�򦨤T����"<<endl;
			}
		}
	}
	else
	{
		cout<<"���i�򦨤T����"<<endl;
	}
		system("pause");
		return 0;
}
