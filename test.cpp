#include <iostream>
#include "RefBase.h"

using namespace std;
using namespace android;

class Aba : public RefBase 
{
public:
	Aba();
	~Aba();
	virtual void onFirstRef();		
};

Aba::Aba() 
{
	cout<<"Aba Contructor"<<endl;
}

Aba::~Aba()
{
	cout<<"Ada deContructor"<<endl;
}

void Aba::onFirstRef()
{
	cout<<"Ada onFirstRef"<<endl;
}
	



int main()
{
	cout<<"Hello World"<<endl;
	Aba* pA = new Aba;
	{
		sp<Aba> spA(pA);
		wp<Aba> wpA(pA); 
	}
}
