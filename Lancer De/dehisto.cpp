#include "dehisto.h"
#include <qDebug>

dehisto::dehisto()
{

}

void dehisto::jet()
{
	this->LancerDe();
	tab[0] = this->getValeur();
	qDebug() << tab[0];
}

void dehisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		//Tir de dé
		this->LancerDe();
		//Afficher chaque tir dans tableau
		tab[i] = this->getValeur();
		qDebug() << tab[i];
	}
}