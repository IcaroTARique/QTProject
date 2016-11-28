#include "editar.h"
#include "ui_editar.h"

editar::editar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editar)
{
    ui->setupUi(this);
}

editar::~editar()
{
    delete ui;
}
    QString nomecomp;

void editar::on_pushButton_clicked()
{
    try{
        QString nomecomp = ui->lineEdit_20->text();
            if(nomecomp.isEmpty() == 1){
                throw 100;
            }
        QString nome = ui->lineEdit_10->text();
            if(nome.isEmpty() == 1){
                throw 10;
            }
        QString sobrenome = ui->lineEdit_11->text();
            if(sobrenome.isEmpty() == 1){
                throw 11;
            }
        QString numero = ui->lineEdit_12->text();
            if(numero.isEmpty() == 1){
                throw 12;
            }
            if(numero.size() < 9) {
                throw 13;
            }
        QString email = ui->lineEdit_13->text();
            if(email.isEmpty() == 1){
                throw 14;
            }
        QString rua = ui->lineEdit_14->text();
            if(rua.isEmpty() == 1){
                throw 15;
            }
        QString bairro = ui->lineEdit_15->text();
            if(bairro.isEmpty() == 1){
                throw 16;
            }
        QString cidade = ui->lineEdit_16->text();
            if(cidade.isEmpty() == 1){
                throw 17;
            }
        QString cpf = ui->lineEdit_17->text();
            if(cpf.isEmpty() == 1){
                throw 18;
            }
            if(cpf.size() < 10) {
                throw 19;
            }
        QString rg = ui->lineEdit_18->text();
            if(rg.isEmpty() == 1){
                throw 20;
            }
            if(rg.size() < 6) {
                throw 21;
            }
    int tipo = 0;

    QString fileName = "C:/Users/Benilde Alexandria/Desktop/ProjetoBidu/AgoraVAAAAI/arquivos/"+ nomecomp +".txt";
    QFile file(fileName);

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    out << "NOME:        " << nome << endl;
    out << "SOBRENOME:   " << sobrenome << endl;
    out << "TELEFONE:    " << numero << endl;
    out << "E-MAIL:      " << email << endl;
    out << "RUA:         " << rua << endl;
    out << "BAIRRO:      " << bairro << endl;
    out << "CIDADE:      " << cidade << endl;
    out << "CPF:         " << cpf << endl;
    out << "RG:          " << rg << endl;
    out << tipo <<endl;

    file.close();


    QMessageBox::about(this,"Sucesso","Cadastro de Pessoa Fisica \n Concluído com sucesso!");



    }


    catch (int x){
        if(x == 100) {
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA NOME ! -");
        }
        if(x == 10) {
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA NOME ! -");
        }
        if(x ==11){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA SOBRENOME ! -");
        }
        if(x==12){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA NUMERO ! -");
        }
        if(x == 13){
           QMessageBox::warning(this,"ERRO", "Argumento Inválido \n - ! INSIRA NUMERO CORRETAMENTE! -");
        }
        if(x==14){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA E-MAIL ! -");
        }
        if(x == 15){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA RUA ! -");
        }
        if( x == 16){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA BAIRRO ! -");
        }
        if(x == 17){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA CIDADE ! -");
        }
        if(x==18){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA CPF ! -");
        }
        if(x==19){
           QMessageBox::warning(this,"ERRO", "Argumento Inválido \n - ! INSIRA CPF CORRETAMENTE! -");
        }
        if(x==20){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA RG ! -");
        }
        if(x==21){
           QMessageBox::warning(this,"ERRO", "Argumento Inválido \n - ! INSIRA RG CORRETAMENTE! -");
        }
    } // FIM DO CATCH
}

void editar::on_pushButton_2_clicked()
{
    try{
        QString nomecomp = ui->lineEdit_20->text();
            if(nomecomp.isEmpty() == 1){
                throw 100;
            }
        QString nome = ui->lineEdit_10->text();
            if(nome.isEmpty() == 1){
                throw 10;
            }
        QString sobrenome = ui->lineEdit_11->text();
            if(sobrenome.isEmpty() == 1){
                throw 11;
            }
        QString numero = ui->lineEdit_12->text();
            if(numero.isEmpty() == 1){
                throw 12;
            }
            if(numero.size() < 9) {
                throw 13;
            }
        QString email = ui->lineEdit_13->text();
            if(email.isEmpty() == 1){
                throw 14;
            }
        QString rua = ui->lineEdit_14->text();
            if(rua.isEmpty() == 1){
                throw 15;
            }
        QString bairro = ui->lineEdit_15->text();
            if(bairro.isEmpty() == 1){
                throw 16;
            }
        QString cidade = ui->lineEdit_16->text();
            if(cidade.isEmpty() == 1){
                throw 17;
            }
        QString cnpj = ui->lineEdit_19->text();
            if(cnpj.isEmpty() == 1){
                throw 18;
            }
            if(cnpj.size() < 10) {
                throw 19;
            }
    int tipo = 1;



    QString fileName = "C:/Users/Benilde Alexandria/Desktop/ProjetoBidu/AgoraVAAAAI/arquivos/"+ nomecomp +".txt";
    QFile file(fileName);

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    out << "NOME:        " << nome << endl;
    out << "SOBRENOME:   " << sobrenome << endl;
    out << "NUMERO:      " << numero << endl;
    out << "TELEFONE:    " << email   << endl;
    out << "RUA:         " << rua << endl;
    out << "BAIRRO:      " << bairro << endl;
    out << "CIDADE:      " << cidade << endl;
    out << "CNPJ:        " << cnpj << endl;
    out << tipo <<endl;

    file.close();



    QMessageBox::about(this,"Sucesso","Cadastro de Pessoa Juridica \n Concluído com sucesso!");
    }


    catch (int x){
        if(x == 100) {
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA NOME ! -");
        }
        if(x == 10) {
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA NOME ! -");
        }
        if(x ==11){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA SOBRENOME ! -");
        }
        if(x==12){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA NUMERO ! -");
        }
        if(x == 13){
           QMessageBox::warning(this,"ERRO", "Argumento Inválido \n - ! INSIRA NUMERO CORRETAMENTE! -");
        }
        if(x==14){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA E-MAIL ! -");
        }
        if(x == 15){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA RUA ! -");
        }
        if( x == 16){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA BAIRRO ! -");
        }
        if(x == 17){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA CIDADE ! -");
        }
        if(x==18){
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA CNPJ ! -");
        }
        if(x==19){
           QMessageBox::warning(this,"ERRO", "Argumento Inválido \n - ! INSIRA CNPJ CORRETAMENTE! -");
        }
    } // FIM DO CATCH
}
