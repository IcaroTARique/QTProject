#ifndef CONTATO_H
#define CONTATO_H

#include <QString>
#include "pessoa.h"

class Contato: public Pessoa
{
    //Pessoa pessoa;
    QString email;
    QString numerotelefone;
    QString rua;
    QString bairro;
    QString cidade;

public:
    Contato() { }
    Contato(QString, QString, int, QString ,QString ,QString, QString, QString);

    QString getEmail          ();
    QString getNumeroTelefone ();
    QString getRua            ();
    QString getBairro         ();
    QString getCidade         ();


    void setEmail 			(QString);
    void setNumeroTelefone  (QString);
    void setRua 			(QString);
    void setBairro 			(QString);
    void setCidade 			(QString);
};
#endif // CLASSE_H

