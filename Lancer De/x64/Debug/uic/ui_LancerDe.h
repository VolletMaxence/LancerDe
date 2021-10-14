/********************************************************************************
** Form generated from reading UI file 'LancerDe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANCERDE_H
#define UI_LANCERDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LancerDeClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *AfficheVal;
    QPushButton *TireDe;
    QPushButton *Reset;
    QPushButton *AfficheValTotal;
    QLabel *ScoreTotal;
    QLabel *ChiffreObtenue;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *AfficheVal_2;
    QPushButton *TireDe_2;
    QPushButton *Reset_2;
    QPushButton *AfficheValTotal_2;
    QLabel *ScoreTotal_2;
    QLabel *ChiffreObtenue_2;
    QWidget *tab_4;
    QWidget *tab_2;
    QLineEdit *nbrDe;
    QPushButton *ChoixNbrDe;
    QPlainTextEdit *plainTextEdit;
    QLabel *Erreur;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LancerDeClass)
    {
        if (LancerDeClass->objectName().isEmpty())
            LancerDeClass->setObjectName(QString::fromUtf8("LancerDeClass"));
        LancerDeClass->resize(1018, 701);
        centralWidget = new QWidget(LancerDeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1011, 651));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        AfficheVal = new QPushButton(tab);
        AfficheVal->setObjectName(QString::fromUtf8("AfficheVal"));
        AfficheVal->setGeometry(QRect(90, 80, 231, 51));
        TireDe = new QPushButton(tab);
        TireDe->setObjectName(QString::fromUtf8("TireDe"));
        TireDe->setGeometry(QRect(630, 90, 231, 51));
        Reset = new QPushButton(tab);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setGeometry(QRect(630, 210, 231, 51));
        AfficheValTotal = new QPushButton(tab);
        AfficheValTotal->setObjectName(QString::fromUtf8("AfficheValTotal"));
        AfficheValTotal->setGeometry(QRect(100, 340, 231, 51));
        ScoreTotal = new QLabel(tab);
        ScoreTotal->setObjectName(QString::fromUtf8("ScoreTotal"));
        ScoreTotal->setGeometry(QRect(440, 200, 121, 51));
        QFont font;
        font.setPointSize(22);
        ScoreTotal->setFont(font);
        ChiffreObtenue = new QLabel(tab);
        ChiffreObtenue->setObjectName(QString::fromUtf8("ChiffreObtenue"));
        ChiffreObtenue->setGeometry(QRect(470, 150, 61, 41));
        QFont font1;
        font1.setPointSize(21);
        ChiffreObtenue->setFont(font1);
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, -20, 1011, 651));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        AfficheVal_2 = new QPushButton(tab_3);
        AfficheVal_2->setObjectName(QString::fromUtf8("AfficheVal_2"));
        AfficheVal_2->setGeometry(QRect(100, 80, 231, 51));
        TireDe_2 = new QPushButton(tab_3);
        TireDe_2->setObjectName(QString::fromUtf8("TireDe_2"));
        TireDe_2->setGeometry(QRect(650, 80, 231, 51));
        Reset_2 = new QPushButton(tab_3);
        Reset_2->setObjectName(QString::fromUtf8("Reset_2"));
        Reset_2->setGeometry(QRect(650, 340, 231, 51));
        AfficheValTotal_2 = new QPushButton(tab_3);
        AfficheValTotal_2->setObjectName(QString::fromUtf8("AfficheValTotal_2"));
        AfficheValTotal_2->setGeometry(QRect(100, 340, 231, 51));
        ScoreTotal_2 = new QLabel(tab_3);
        ScoreTotal_2->setObjectName(QString::fromUtf8("ScoreTotal_2"));
        ScoreTotal_2->setGeometry(QRect(430, 400, 121, 51));
        ScoreTotal_2->setFont(font);
        ChiffreObtenue_2 = new QLabel(tab_3);
        ChiffreObtenue_2->setObjectName(QString::fromUtf8("ChiffreObtenue_2"));
        ChiffreObtenue_2->setGeometry(QRect(450, 180, 61, 41));
        ChiffreObtenue_2->setFont(font1);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        nbrDe = new QLineEdit(tab_2);
        nbrDe->setObjectName(QString::fromUtf8("nbrDe"));
        nbrDe->setGeometry(QRect(410, 430, 171, 21));
        ChoixNbrDe = new QPushButton(tab_2);
        ChoixNbrDe->setObjectName(QString::fromUtf8("ChoixNbrDe"));
        ChoixNbrDe->setGeometry(QRect(410, 350, 171, 51));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(410, 470, 171, 41));
        Erreur = new QLabel(tab_2);
        Erreur->setObjectName(QString::fromUtf8("Erreur"));
        Erreur->setGeometry(QRect(410, 530, 171, 21));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(815, 40, 121, 241));
        tabWidget->addTab(tab_2, QString());
        LancerDeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LancerDeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1018, 21));
        LancerDeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LancerDeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        LancerDeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LancerDeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        LancerDeClass->setStatusBar(statusBar);

        retranslateUi(LancerDeClass);
        QObject::connect(AfficheVal, SIGNAL(clicked()), LancerDeClass, SLOT(AfficheValeurDe()));
        QObject::connect(TireDe_2, SIGNAL(clicked()), LancerDeClass, SLOT(TireDe()));
        QObject::connect(AfficheValTotal, SIGNAL(clicked()), LancerDeClass, SLOT(AfficheScoreTotal()));
        QObject::connect(Reset_2, SIGNAL(clicked()), LancerDeClass, SLOT(Remise0Score()));
        QObject::connect(ChoixNbrDe, SIGNAL(clicked(bool)), LancerDeClass, SLOT(TireMultiDe()));

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LancerDeClass);
    } // setupUi

    void retranslateUi(QMainWindow *LancerDeClass)
    {
        LancerDeClass->setWindowTitle(QCoreApplication::translate("LancerDeClass", "LancerDe", nullptr));
        AfficheVal->setText(QCoreApplication::translate("LancerDeClass", "Afficher Valeur D\303\251", nullptr));
        TireDe->setText(QCoreApplication::translate("LancerDeClass", "Tir\303\251 D\303\251", nullptr));
        Reset->setText(QCoreApplication::translate("LancerDeClass", "Remise 0 Score", nullptr));
        AfficheValTotal->setText(QCoreApplication::translate("LancerDeClass", "Afficher Score Total", nullptr));
        ScoreTotal->setText(QString());
        ChiffreObtenue->setText(QString());
        AfficheVal_2->setText(QCoreApplication::translate("LancerDeClass", "Afficher Valeur D\303\251", nullptr));
        TireDe_2->setText(QCoreApplication::translate("LancerDeClass", "Tir\303\251 D\303\251", nullptr));
        Reset_2->setText(QCoreApplication::translate("LancerDeClass", "Remise 0 Score", nullptr));
        AfficheValTotal_2->setText(QCoreApplication::translate("LancerDeClass", "Afficher Score Total", nullptr));
        ScoreTotal_2->setText(QString());
        ChiffreObtenue_2->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("LancerDeClass", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("LancerDeClass", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("LancerDeClass", "D\303\251", nullptr));
        nbrDe->setText(QString());
        ChoixNbrDe->setText(QCoreApplication::translate("LancerDeClass", "Choisir le nombre de d\303\251 a lancer", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("LancerDeClass", "Maximum de lancer simultann\303\251 : 7", nullptr));
        Erreur->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LancerDeClass", "Nombre Tir", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LancerDeClass", "R\303\251sultat", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LancerDeClass", "Historique D\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LancerDeClass: public Ui_LancerDeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANCERDE_H
