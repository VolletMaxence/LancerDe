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
	//On ajoute le score au score total :
	this->ScoreTotal = this->Valeur + this->ScoreTotal;

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



int dd::getScoreTotal()
{
	return this->ScoreTotal;
}

int dd::getValeur()
{
	qDebug() << this->Valeur << " : Valeur dans objet";

	return this->Valeur;
}

dd dd::operator++(int AAA)
{
	int Valeur = LancerDe();

	ScoreTotal += Valeur;
	qDebug() << ScoreTotal;
	qDebug() << "Sale Pute";
	return (*this);
}

dd dd::operator=(const dd & b)
{
	Score0();
	return *this;
}

dd & operator+=(int n, dd & dd)
{
	n = dd.Valeur;

	return dd;
}

dd & operator<(int n, dd & dd)
{
	// TODO: insérer une instruction return ici
	n = dd.ScoreTotal;

	return dd;
}

/*
void De::operator++(int)
{
	initializeRandom();
	currentScore = rand() % 6 + 1;
	totalScore += currentScore;
}

void operator+=(int &n, De &de)
{
	n = de.currentScore;
}

void De::operator=(int n)
{
	currentScore = n;
}

void operator<(int &n, De &de)
{
	n = de.totalScore;
}
*/
