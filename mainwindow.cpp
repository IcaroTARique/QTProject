#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QWidget>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Lista Telefônica"));



    ui->treeWidget->setColumnCount(9);
    ui->treeWidget->setHeaderLabels(QStringList () << "Nome" << "Sobrenome" << "Numero" <<
                                    "Email" << "Rua" << "Bairro" << "Cidade" << "CPF" << "RG");

//       pessoaFisica = new pessoafisica ;
//       for(int i = 0; i < pessoafisica::list_cf.size(); i++){


//           AddRoot(pessoafisica::list_cf.at(i).getNome(), pessoafisica::list_cf.at(i).getSobrenome(),
//                   pessoafisica::list_cf.at(i).getNumeroTelefone(), pessoafisica::list_cf.at(i).getEmail(),
//                   pessoafisica::list_cf.at(i).getRua(),pessoafisica::list_cf.at(i).getBairro(),
//                   pessoafisica::list_cf.at(i).getCidade(), pessoafisica::list_cf.at(i).getCpf(),
//                   pessoafisica::list_cf.at(i).getRg());


    AddRoot("Thiago", "Galindo", "988354262", "thiago@bol.com", "Rua tal", "Cabo Branco", "João Pessoa", "rg", "cpf");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddRoot(QString nome, QString sobrenome, QString numero, QString email, QString rua,
                         QString bairro, QString cidade, QString rg, QString cpf)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,nome);
    itm->setText(1,sobrenome);
    itm->setText(2,numero);
    itm->setText(3,email);
    itm->setText(4,rua);
    itm->setText(5,bairro);
    itm->setText(6,cidade);
    itm->setText(7,cpf);
    itm->setText(8,rg);

    ui->treeWidget->addTopLevelItem(itm);
}
void MainWindow::on_pushButton_clicked()
{

    pessoaFisica = new pessoafisica ;
    pessoaFisica->show();
    pessoaFisica->setWindowTitle("Pessoa Fisica");


    // pessoaFisica pf(this);
    // pd.exec();
   //  pd.setWindowTitle("Pessoa Fisica");
    // res = pd.exec();

}

void MainWindow::on_pushButton_2_clicked()
{

    pessoaJuridica = new pessoajuridica ;
    pessoaJuridica->show();
    pessoaJuridica->setWindowTitle("Pessoa Juridica");


}

void MainWindow::on_pushButton_3_clicked()
{
    Editar = new editar ;
    Editar->show();
    Editar->setWindowTitle("Editar");
}
    QString name;
void MainWindow::on_pushButton_4_clicked()
{
    //QString name;
    try{
            name = ui->lineEdit->text();
            if(name.isEmpty() == 1){
                throw 10;
            }
            QFile file("C:/Users/Benilde Alexandria/Desktop/ProjetoBidu/AgoraVAAAAI/arquivos/"+ name +".txt");
            if(!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0, "info", file.errorString());

            QTextStream in(&file);

            ui->textBrowser->setText(in.readAll());
        }
    catch (int x){
        if(x == 10) {
           QMessageBox::warning(this,"ERRO", "Argumento Faltante \n - ! INSIRA NOME ! -");
        }
    }
}

void MainWindow::on_pushButton_5_clicked()
{
   QFile::remove("C:/Users/Benilde Alexandria/Desktop/ProjetoBidu/AgoraVAAAAI/arquivos/"+ name +".txt");
}
