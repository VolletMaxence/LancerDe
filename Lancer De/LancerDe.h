#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LancerDe.h"
#include "dd.h"
#include "dehisto.h"

class LancerDe : public QMainWindow
{
    Q_OBJECT

	public:
		LancerDe(QWidget *parent = Q_NULLPTR);

	private:
		Ui::LancerDeClass ui;
		dd *de;
		dehisto *ddhisto;
		int n;

	private slots:
		//Partit D�
		void AfficheValeurDe();
		void TireDe();
		void AfficheScoreTotal();
		void Remise0Score();

		//Partit D� histo
		void TireMultiDe();
};
