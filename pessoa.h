#ifndef PESSOA_H
#define PESSOA_H

#include <QString>

class Pessoa
{
    QString nome;
    QString sobrenome;
    int tipodepessoa;

public:
    Pessoa() { }
    Pessoa(QString, QString, int);
    ~Pessoa(){}

    QString getNome      ();
    QString getSobrenome ();
    int getTipoDePessoa ();

    void setNome      (QString);
    void setSobrenome (QString);
    void setTipoDePessoa (int);
};

#endif // PESSOA_H
