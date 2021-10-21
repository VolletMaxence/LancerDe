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

//Partit D�
void LancerDe::TireDe()
{
	qDebug() << "Tire D�";
	(*de)++;
	//Affichage Score d� :
	LancerDe::AfficheValeurDe();
	//Affichage score total :
	LancerDe::AfficheScoreTotal();
	this->n += (*de);	//permet de stocker dans n la valeur du d�
	this->n < (*de);	//met le score total dans n
}

void LancerDe::AfficheValeurDe()
{
	this->n += (*de); //permet de stocker dans n la valeur du d�

	//Convertion int en QString :
	QString Qscore = QString::number(this->n);
	qDebug() << this->n << " // " << Qscore<< " // " ;

	ui.ChiffreObtenue_2->setText(Qscore);
}

void LancerDe::AfficheScoreTotal()
{
	qDebug() << "ok";
	//int ScoreTotal = de->getScoreTotal();
	//Remplacer getScoreTotal par n<dd
	this->n < (*de);	//met le score total dans n

	//Convertion int en QString :
	QString QScoreTotal = QString::number(this->n);

	ui.ScoreTotal_2->setText(QScoreTotal);
}

void LancerDe::Remise0Score()
{
	(*de)=0();
}

//---------------------------------------------------------
//Partit D� histo
void LancerDe::TireMultiDe()
{
	QString nbrDe = ui.nbrDe->text();

	int nbrDeEncode = nbrDe.toInt();

	qDebug() << nbrDeEncode;

	if(nbrDeEncode == 1)
	{
		//Lancer de 1 d�
		ddhisto->jet();
		ui.Erreur->setText("");

		ui.tableWidget->setRowCount(nbrDeEncode);
		ui.tableWidget->setColumnCount(1);

		for (int i = 0; i < 1; i++)
		{
			//ui.tableWidget->insertRow(i);
			//Ajout de ligne de salope
			for (int j = 0; j < 1; j++)
			{
				//int nbrDeEncode = ddhisto->tab[i].toInt();
				//Convertir en QString
				int pute = ddhisto->getValeurTabl(i);

				ui.tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(pute)));
			}
		}

	} else if (nbrDeEncode > 7 || nbrDeEncode == 0 || nbrDeEncode == NULL)
	{
		//Ne fait rien
		ui.Erreur->setText("Erreur, merci d'entr� un nombre valide.");
	}
	else
	{
		ddhisto->jet(nbrDeEncode);
		ui.Erreur->setText("");

		ui.tableWidget->setRowCount(nbrDeEncode);
		ui.tableWidget->setColumnCount(1);

		for (int i = 0; i < nbrDeEncode; i++)
		{
			//ui.tableWidget->insertRow(i);
			//Ajout de ligne de salope
			for (int j = 0; j < 1; j++)
			{
				//Convertir en QString
				int pute = ddhisto->getValeurTabl(i);



				ui.tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(pute)));
			}
		}
	}
}