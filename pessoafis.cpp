#include "pessoafis.h"

#include "contato.h"
#include "pessoa.h"
#include "iostream"

PessoaFis::PessoaFis(QString cp,QString r, QString n, QString sn, int tdp, QString em, QString nt, QString ru, QString b, QString c ):Contato( n, sn, tdp, em, nt, ru, b, c)
{
    cpf = cp;
    rg = r;
}

    QString PessoaFis::getCpf (){return cpf;}
    QString PessoaFis::getRg  (){return rg;}

    void PessoaFis::setCpf (QString cp) {cpf = cp;}
    void PessoaFis::setRg  (QString r)	{rg = r;}
