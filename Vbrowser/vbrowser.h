#ifndef VBROWSER_H
#define VBROWSER_H

#include <QMainWindow>

class QUrl;

namespace Ui {
    class Vbrowser;
}

class Vbrowser : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vbrowser(QWidget *parent = 0);
    ~Vbrowser();

private slots:
    void on_lineEdit_returnPressed();

    void on_webView_urlChanged(const QUrl &url);

private:
    Ui::Vbrowser *ui;
};

#endif // VBROWSER_H
