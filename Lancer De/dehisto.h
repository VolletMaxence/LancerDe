#pragma once
#include "dd.h"
class dehisto :
	public dd
{
private:
	int tab[6];

	public:
		dehisto();
		void jet(); //simule le jet d�un d�
		void jet(int n); //simule le jet de n d�
		int getValeurTabl(int i);
};

