#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "editar.h"
#include "pessoafisica.h"
#include "pessoajuridica.h"
#include "contato.h"
#include "pessoa.h"
#include "pessoafis.h"
#include "pessoafisica.h"
#include "pessoajur.h"
#include "pessoajuridica.h"
#include <QMainWindow>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QTreeWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    void AddRoot(QString nome, QString sobrenome, QString numero, QString email, QString rua,
                 QString bairro, QString cidade, QString rg, QString cpf);
    void AddChild(QTreeWidgetItem *parent ,QString nome, QString sobrenome, QString numero, QString email, QString rua,
                  QString bairro, QString cidade, QString rg, QString cpf);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//to be continued...
    pessoafisica* pessoaFisica;
    pessoajuridica* pessoaJuridica;
    editar* Editar;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
