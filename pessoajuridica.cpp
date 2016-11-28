#include "pessoajuridica.h"
#include "ui_pessoajuridica.h"


pessoajuridica::pessoajuridica(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pessoajuridica)
{
    ui->setupUi(this);
}

pessoajuridica::~pessoajuridica()
{
    delete ui;
}

void pessoajuridica::on_pushButton_clicked()
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
        QString cnpj = ui->lineEdit_8->text();
            if(cnpj.isEmpty() == 1){
                throw 18;
            }
            if(cnpj.size() < 10) {
                throw 19;
            }
    int tipo = 1;
    PessoaJur pj (cnpj, nome, sobrenome, tipo, email, numero, rua, bairro, cidade);

    list_cj.push_back(pj);

    QString fileName = "C:/Users/Benilde Alexandria/Desktop/ProjetoBidu/AgoraVAAAAI/arquivos/"+ pj.getNome() +".txt";
    QFile file(fileName);

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    int i = 0;

    out << "NOME:        " << list_cj[i].getNome() << endl;
    out << "SOBRENOME:   " << list_cj[i].getSobrenome() << endl;
    out << "NUMERO:      " << list_cj[i].getNumeroTelefone() << endl;
    out << "TELEFONE:    " << list_cj[i].getEmail()   << endl;
    out << "RUA:         " << list_cj[i].getRua() << endl;
    out << "BAIRRO:      " << list_cj[i].getBairro() << endl;
    out << "CIDADE:      " << list_cj[i].getCidade() << endl;
    out << "CNPJ:        " << list_cj[i].getCnpj() << endl;
    out << list_cj[i].getTipoDePessoa() <<endl;

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
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA CNPJ ! -");
        }
        if(x==19){
           QMessageBox::warning(this,"ERRO", "Argumento Inválido \n - ! INSIRA CNPJ CORRETAMENTE! -");
        }
    } // FIM DO CATCH
}
