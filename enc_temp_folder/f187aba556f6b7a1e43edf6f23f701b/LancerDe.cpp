#include "LancerDe.h"
#include "dd.h"
#include "dehisto.h"
#include <qDebug>

LancerDe::LancerDe(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	dd de;
	dehisto ddhisto;

	Remise0Score();
}

//Partit Dé
void LancerDe::TireDe()
{
	qDebug() << "Tire Dé";
	de->LancerDe();
	//Affichage Score dé :
	LancerDe::AfficheValeurDe();
	//Affichage score total :
	LancerDe::AfficheScoreTotal();

}

void LancerDe::AfficheValeurDe()
{
	int score = de->getValeur();

	//Convertion int en QString :
	QString Qscore = QString::number(score);
	qDebug() << score << " // " << Qscore;

	ui.ChiffreObtenue_2->setText(Qscore);
}

void LancerDe::AfficheScoreTotal()
{
	qDebug() << "ok";
	int ScoreTotal = de->getScoreTotal();

	//Convertion int en QString :
	QString QScoreTotal = QString::number(ScoreTotal);

	ui.ScoreTotal_2->setText(QScoreTotal);
}


void LancerDe::Remise0Score()
{
	de->Score0();
}

//---------------------------------------------------------
//Partit Dé histo
void LancerDe::TireMultiDe()
{
	QString nbrDe = ui.nbrDe->text();

	int nbrDeEncode = nbrDe.toInt();

	qDebug() << nbrDeEncode;

	if(nbrDeEncode == 1)
	{
		//Lancer de 1 dé
		ddhisto->jet();
		ui.Erreur->setText("");
	} else if (nbrDeEncode > 7 || nbrDeEncode == 0 || nbrDeEncode == NULL)
	{
		//Ne fait rien
		ui.Erreur->setText("Erreur");
	}
	else
	{
		ddhisto->jet(nbrDeEncode);
		ui.Erreur->setText("");
	}
}