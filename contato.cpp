#include "contato.h"
#include "pessoa.h"
#include "iostream"
#include "contato.h"

Contato::Contato( QString n, QString sn, int tdp, QString em, QString nt, QString ru, QString b, QString c):Pessoa(n, sn, tdp)
{
    email = em;
    numerotelefone = nt;
    rua = ru;
    bairro = b;
    cidade = c;

}
    QString Contato::getEmail          () {return email;}
    QString Contato::getNumeroTelefone () {return numerotelefone;}
    QString Contato::getRua            () {return rua;}
    QString Contato::getBairro         () {return bairro;}
    QString Contato::getCidade         () {return cidade;}

    void Contato::setEmail 			(QString em) {email          = em;}
    void Contato::setNumeroTelefone (QString nt) {numerotelefone = nt;}
    void Contato::setRua 			(QString ru)  {rua            = ru;}
    void Contato::setBairro 		(QString b)  {bairro         = b;}
    void Contato::setCidade 		(QString c)  {cidade         = c;}
