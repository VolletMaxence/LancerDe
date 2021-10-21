#include "dd.h"
#include <stdlib.h> //Pour ajouter le random
#include <qDebug>
#include <qRandomGenerator>

dd::dd(int n)
{
	this->Valeur = n;
}

dd::dd()
{
	//Resultat = 0 : pas encore de lancer
	//Mise a 0 score
	this->Valeur = 0;
	this->nbrTir = 0;
	
	qDebug() << "Instanciation ";
}

int dd::LancerDe()
{
	qDebug() << "Lance Dé";
	//Lancer du dé avec le constructeur
	
	int Valeur = QRandomGenerator::global()->bounded(1,7);
	//(*this) += Valeur;
	//On ajoute un tir
	this->Valeur = Valeur;
	this->nbrTir = this->nbrTir++;
	qDebug() << Valeur << " = Valeur";
	qDebug() << this->Valeur << " = Valeur dans objet";
	qDebug() << this->nbrTir << " = nbr Tir";

	return Valeur;
}

void dd::StockValeurDe(int Val)
{
	this->Valeur = Val;
}

void dd::Score0()
{
	//Score à 0 :
	this->ScoreTotal = 0;
	this->nbrTir = 0;
}

dd dd::operator++(int AAA)
{
	qDebug() << "Opérateur '++'";
	int Valeur = LancerDe();

	ScoreTotal += Valeur;
	qDebug() << ScoreTotal;
	qDebug() << "Sale Pute";
	return (*this);
}

dd dd::operator=(const dd & b)
{
	qDebug() << "Opérateur '='";
	Score0();
	return *this;
}

void operator+=(int &n, dd &dd)
{
	qDebug() << "Opérateur '+='";
	n = dd.Valeur;

}

void operator<(int &n, dd &dd)
{
	qDebug() << "Opérateur '<'";
	// TODO: insérer une instruction return ici
	n = dd.ScoreTotal;

}