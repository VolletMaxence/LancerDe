#pragma once
class dd
{
	private :
		int Valeur;
		int nbrTir = 0;
		int ScoreTotal = 0;

	public :
		//Constructeur
		dd(int n);//qui initialise le dé avec n
		dd(); //qui initialise le dé avec une valeur aléatoire comprise entre 1 et 6

		void LancerDe();
		void Score0();
		int getScoreTotal();
		int getValeur();
		
};