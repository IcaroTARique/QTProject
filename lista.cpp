#include "lista.h"
#include "ui_lista.h"

lista::lista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lista)
{
    ui->setupUi(this);

}

lista::~lista()
{
    delete ui;
}

