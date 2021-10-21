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
	(*de)++;
	//Affichage Score dé :
	LancerDe::AfficheValeurDe();
	//Affichage score total :
	LancerDe::AfficheScoreTotal();
	this->n += (*de);	//permet de stocker dans n la valeur du dé
	this->n < (*de);	//met le score total dans n
}

void LancerDe::AfficheValeurDe()
{
	this->n += (*de); //permet de stocker dans n la valeur du dé

	//Convertion int en QString :
	QString Qscore = QString::number(this->n);
	qDebug() << this->n << " // " << Qscore<< " // " ;

	ui.ChiffreObtenue_2->setText(Qscore);
}

void LancerDe::AfficheScoreTotal()
{
	this->n < (*de);	//met le score total dans n

	//Convertion int en QString :
	QString QScoreTotal = QString::number(this->n);

	ui.ScoreTotal_2->setText(QScoreTotal);
}

void LancerDe::Remise0Score()
{
	(*de)=0();
	//Afficher O en score total : 
	this->n < (*de);	//met le score total dans n

	LancerDe::AfficheScoreTotal();
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
	} else if (nbrDeEncode > 7 || nbrDeEncode < 0 || nbrDeEncode == NULL)
	{
		//Ne fait rien
		ui.Erreur->setText("Erreur, merci d'entré un nombre valide.");
	} else
	{
		ddhisto->jet(nbrDeEncode);
		ui.Erreur->setText("");
	}
	//Affichage dans le tableau des valeur
	ui.tableWidget->setRowCount(7);
	ui.tableWidget->setColumnCount(1);

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			//Convertir en QString
			int pute = ddhisto->getValeurTabl(i);

			if (pute > 6)
			{
				//Si les valeur ne sont supérieur a 6, c'est qu'il n'y a pas encore eu de tirage, ont remplace donc par //// pour indiquer qu'il n y a rien
				ui.tableWidget->setItem(i, j, new QTableWidgetItem("////"));
			}
			else
			{
				//On affiche les valeur
				ui.tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(pute)));
			}
		}
	}

}