#pragma once
class dd
{
	private :
		int Valeur;
		int ScoreTotal = 0;

		int nbrTir = 0;

		int LancerDe();
		void StockValeurDe(int Val);
		void Score0();

	public :
		//Constructeur
		dd(int n);//qui initialise le dé avec n
		dd(); //qui initialise le dé avec une valeur aléatoire comprise entre 1 et 6

		dd dd::operator++(int AAA);
		dd dd::operator=(const dd& b);			//permet de remettre le score à 0
		friend dd& operator+=(int n, dd &dd);	//permet de stocker dans n la valeur du dé
		friend dd& operator<(int n, dd &dd);	//met le score total dans n

		int getScoreTotal();
		int getValeur();
		
};

