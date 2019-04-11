#include <iostream>
using namespace std ;
int w, x,y;
int main (int argc,char** argv)
{
	cout<<"三角形的三邊長一定滿足任兩邊邊長和大於第三邊，輸入三邊，判斷是否可圍成三角形 "<<endl;
	cin>> w;
	cin>> x;
	cin>> y;
	if(w+x>y)
	{
		if(w+y>x)
		{
			if(x+y>w)
			{
				cout<<"可圍成三角形"<<endl;
			}
		}
	}
	else
	{
		cout<<"不可圍成三角形"<<endl;
	}
		system("pause");
		return 0;
}
