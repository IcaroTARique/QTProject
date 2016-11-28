#include "pessoa.h"

Pessoa::Pessoa(QString n, QString sn, int tdp) //Construtor
{
    nome = n;
    sobrenome = sn;
    tipodepessoa = tdp;
}

 QString Pessoa::getNome      () {return nome;}
 QString Pessoa::getSobrenome () {return sobrenome;}
 int Pessoa::getTipoDePessoa () {return tipodepessoa;}

 void Pessoa::setNome         (QString n)  {nome      = n;}
 void Pessoa::setSobrenome    (QString sn) {sobrenome = sn;}
 void Pessoa::setTipoDePessoa (int tdp)   {tipodepessoa = tdp;}
