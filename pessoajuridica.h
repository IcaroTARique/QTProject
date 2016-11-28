#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include "pessoajur.h"
//#include "mainwindow.h"
#include <QDialog>
#include <QList>
#include <QMessageBox>
#include <QFile>
#include <QDialog>
#include <QFileDialog>
#include <QString>
#include <QTextStream>

using namespace std;

namespace Ui {
class pessoajuridica;
}

class pessoajuridica : public QDialog
{
    Q_OBJECT

public:
    explicit pessoajuridica(QWidget *parent = 0);
    ~pessoajuridica();

    QList <PessoaJur> list_cj;

private slots:
    void on_pushButton_clicked();

private:
    Ui::pessoajuridica *ui;
};

#endif // PESSOAJURIDICA_H
