#include "pessoajur.h"

PessoaJur::PessoaJur(QString cn, QString n, QString sn, int tdp, QString em, QString nt, QString ru, QString b, QString c ):Contato( n, sn, tdp, em, nt, ru, b, c)
{
    cnpj = cn;
}

 QString PessoaJur::getCnpj() {return cnpj;}

 void PessoaJur::setCnpj(QString cn) {cnpj = cn;}
