#ifndef PESSOAFIS_H
#define PESSOAFIS_H

#include <QString>
#include "contato.h"
#include "pessoa.h"
using namespace std;

class PessoaFis: public Contato {
    QString cpf;
    QString rg;

public:

    PessoaFis(QString, QString, QString, QString, int, QString, QString, QString, QString, QString);

    QString getCpf ();
    QString getRg  ();

    void setCpf (QString);
    void setRg  (QString);

};
#endif // PESSOAFIS_H
