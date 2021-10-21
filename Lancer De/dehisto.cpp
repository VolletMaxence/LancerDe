#include "dehisto.h"
#include <qDebug>

dehisto::dehisto()
{
	&dd::operator=(0);
}

void dehisto::jet()
{
	&dd::operator++;

	int n;
	n += (*this);

	qDebug() << tab[0];

	//tableView
	//Afficher Valeur dans tableau

}

//ca fonctionne lets go
void dehisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		//Tir de dé
		dd::operator++(n);

		int n;
		n += (*this);
		tab[i] = n;
		qDebug() << tab[i];
	}


}

int dehisto::getValeurTabl(int i)
{
	return this->tab[i];
}
