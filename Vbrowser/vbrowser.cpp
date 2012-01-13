#include "vbrowser.h"
#include "ui_vbrowser.h"

Vbrowser::Vbrowser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Vbrowser)
{
    ui->setupUi(this);
}

Vbrowser::~Vbrowser()
{
    delete ui;
}

void Vbrowser::on_lineEdit_returnPressed()
{
    ui->webView->load(QUrl(ui->lineEdit->text()));
}

void Vbrowser::on_webView_urlChanged(const QUrl &url)
{
    ui->lineEdit->setText(url.toString());
}
