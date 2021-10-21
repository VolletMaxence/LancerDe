#include "dehisto.h"
#include <qDebug>

dehisto::dehisto()
{
	&dd::operator=(0);
}

void dehisto::jet()
{
	//pour que ca marche, il faut mettre une variable dans l opératuer, on instancie donc n avant de faire l'operateur 
	int n;
	dd::operator++(n);

	n += (*this);
	tab[0] = n;
	qDebug() << "tab[0] = " << tab[0];
}

//ca fonctionne lets go
void dehisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		//Tir de dé
		dd::operator++(n);

		int m;
		m += (*this);
		tab[i] = m;
		qDebug() << tab[i];
	}
}

int dehisto::getValeurTabl(int i)
{
	qDebug() << "valeur de Tab["<< i << "] = " << tab[i];
	return this->tab[i];
}
