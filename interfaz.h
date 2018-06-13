#ifndef INTERFAZ_H
#define INTERFAZ_H
#include<QFileDialog>
#include<QLabel>
#include <QMainWindow>
#define PGMHANDLE_H
namespace Ui {
class interfaz;
}

class interfaz : public QMainWindow
{
    Q_OBJECT

public:
    FILE *fichero;
    FILE *fichero2;
    FILE *fichero3;
    char nombre[20];
    char nombre2[20];
    char nombre3[20];
    QPixmap pix();
    void inversa();
    void mediana();
    interfaz(QWidget *parent = 0);
    ~interfaz();
/*protected:
    void changeEvent(QEvent *e);*/
private:
    Ui::interfaz *ui;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
};

#endif // INTERFAZ_H
