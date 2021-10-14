#include "dehisto.h"
#include <qDebug>

dehisto::dehisto()
{

}

void dehisto::jet()
{
	//this->operator++;
	tab[0] = this->getValeur();
	qDebug() << tab[0];

	//tableView
	//Afficher Valeur dans tableau

}

void dehisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		//Tir de dé
		//this->operator++;

		//Afficher chaque tir dans tableau
		tab[i] = this->getValeur();
		qDebug() << tab[i];
	}
}

int dehisto::getValeurTabl(int i)
{
	return this->tab[i];
}
