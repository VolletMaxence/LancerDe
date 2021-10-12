#include "dd.h"
#include <stdlib.h> //Pour ajouter le random
#include <qDebug>

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
	//Mise a 0 Score
	
	qDebug() << "Instanciation ";
}

void dd::LancerDe()
{
	qDebug() << "Lance Dé";
	//Lancer du dé avec le constructeur
	
	this->Valeur = rand() % 6 + 1;
	//On ajoute un tir
	this->nbrTir = this->nbrTir++;
	qDebug() << this->nbrTir;
	//On ajoute le score au score total :
	this->ScoreTotal = this->Valeur + this->ScoreTotal;

	this->getValeur();
	this->getScoreTotal();
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
	return this->Valeur;
}
