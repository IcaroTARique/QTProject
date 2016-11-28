#include "pessoafisica.h"
#include "ui_pessoafisica.h"
#include <QMessageBox>

pessoafisica::pessoafisica(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pessoafisica)
{
    ui->setupUi(this);
}

pessoafisica::~pessoafisica()
{
    delete ui;
}

void pessoafisica::on_pushButton_clicked()
{
    try{
        QString nome = ui->lineEdit->text();
            if(nome.isEmpty() == 1){
                throw 10;
            }
        QString sobrenome = ui->lineEdit_2->text();
            if(sobrenome.isEmpty() == 1){
                throw 11;
            }
        QString numero = ui->lineEdit_3->text();
            if(numero.isEmpty() == 1){
                throw 12;
            }
            if(numero.size() < 9) {
                throw 13;
            }
        QString email = ui->lineEdit_4->text();
            if(email.isEmpty() == 1){
                throw 14;
            }
        QString rua = ui->lineEdit_5->text();
            if(rua.isEmpty() == 1){
                throw 15;
            }
        QString bairro = ui->lineEdit_6->text();
            if(bairro.isEmpty() == 1){
                throw 16;
            }
        QString cidade = ui->lineEdit_7->text();
            if(cidade.isEmpty() == 1){
                throw 17;
            }
        QString cpf = ui->lineEdit_8->text();
            if(cpf.isEmpty() == 1){
                throw 18;
            }
            if(cpf.size() < 10) {
                throw 19;
            }
        QString rg = ui->lineEdit_9->text();
            if(rg.isEmpty() == 1){
                throw 20;
            }
            if(rg.size() < 6) {
                throw 21;
            }
    int tipo = 0;
    PessoaFis pf(cpf, rg, nome, sobrenome, tipo, email,numero, rua, bairro, cidade);

    list_cf.push_back(pf);

    QString fileName = "C:/Users/Benilde Alexandria/Desktop/ProjetoBidu/AgoraVAAAAI/arquivos/"+ pf.getNome() +".txt";
    QFile file(fileName);

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    int i = 0;

    out << "NOME:        " << list_cf[i].getNome() << endl;
    out << "SOBRENOME:   " << list_cf[i].getSobrenome() << endl;
    out << "TELEFONE:    " << list_cf[i].getNumeroTelefone() << endl;
    out << "E-MAIL:      " << list_cf[i].getEmail() << endl;
    out << "RUA:         " << list_cf[i].getRua() << endl;
    out << "BAIRRO:      " << list_cf[i].getBairro() << endl;
    out << "CIDADE:      " << list_cf[i].getCidade() << endl;
    out << "CPF:         " << list_cf[i].getCpf() << endl;
    out << "RG:          " << list_cf[i].getRg() << endl;
    out << list_cf[i].getTipoDePessoa() <<endl;

    file.close();


    QMessageBox::about(this,"Sucesso","Cadastro concluído com sucesso!");



    }


    catch (int x){
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
