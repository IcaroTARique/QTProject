#ifndef PESSOAJUR_H
#define PESSOAJUR_H

#include "contato.h"
#include "pessoa.h"
#include <QString>


class PessoaJur: public Contato {

    QString cnpj;

public:
    PessoaJur( QString, QString, QString, int, QString, QString, QString, QString, QString);

    QString getCnpj ();

    void setCnpj (QString);

};

#endif // PESSOAJUR_H
