#pragma once
#include "dd.h"
class dehisto :
	public dd
{
	int tab[7];

	public:
		dehisto();
		void jet(); //simule le jet d’un dé
		void jet(int n); //simule le jet de n dé

};

