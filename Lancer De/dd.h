#pragma once
class dd
{
	private :
		int Valeur;
		int nbrTir = 0;
		int ScoreTotal = 0;

	public :
		//Constructeur
		dd(int n);//qui initialise le d� avec n
		dd(); //qui initialise le d� avec une valeur al�atoire comprise entre 1 et 6

		void LancerDe();
		void Score0();
		int getScoreTotal();
		int getValeur();
		
};