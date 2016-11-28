#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include "pessoafis.h"
//#include "mainwindow.h"

#include <QList>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QString>
#include <QTextStream>
#include <QDialog>


namespace Ui {
class pessoafisica;
}

class pessoafisica : public QDialog
{
    Q_OBJECT

public:
    explicit pessoafisica(QWidget *parent = 0);
    ~pessoafisica();
    QList <PessoaFis> list_cf;

private slots:
    void on_pushButton_clicked();

private:
    Ui::pessoafisica *ui;

};

#endif // PESSOAFISICA_H
