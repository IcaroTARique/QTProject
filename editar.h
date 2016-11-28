#ifndef EDITAR_H
#define EDITAR_H

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
#include <QDialog>

namespace Ui {
class editar;
}

class editar : public QDialog
{
    Q_OBJECT

public:
    explicit editar(QWidget *parent = 0);
    ~editar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::editar *ui;
};

#endif // EDITAR_H
