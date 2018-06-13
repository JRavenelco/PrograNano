#include "interfaz.h"
#include "ui_interfaz.h"
#include <QtCore/QBuffer>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<string.h>
using namespace std;


interfaz::interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interfaz)
{

    ui->setupUi(this);
    QPixmap pix(":/Universo.pgm");
    ui->label->setPixmap(pix);

}

interfaz::~interfaz()
{
    ///cerrar el archivo!!!*****************************
    if(!fclose(fichero)){
        printf("\narchivo cerrado\n");
    }else{
        printf("error: no se pudo cerrar el archivo");
    }
       if(!fclose(fichero2)){
        printf("\narchivo cerrado\n");
    }else{
        printf("error: no se pudo cerrar el archivo");
    }
    delete ui;
}


void interfaz::on_pushButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Imagenes (*.png *jpeg *.xpm *.pgm"));
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Images"),"/home/ravenelco/Escritorio/", tr("Image Files (*.png *.jpeg *.bmp *.pgm)"));
if(!fileName.isEmpty())
{
    QImage image(fileName);
    ui->label->setPixmap(QPixmap::fromImage(image));
}

}

void interfaz::on_pushButton_2_clicked()
{
mediana();
}

void interfaz::on_pushButton_4_clicked()
{
connect(ui->pushButton_4,SIGNAL(clicked()),qApp,SLOT(quit()));
}

void interfaz::on_pushButton_3_clicked()
{
inversa();
}
void interfaz::inversa(){
    int alto=0;
    int ancho=0;
    QPixmap pix(":/Universo.pgm");
    alto=pix.height();
    ancho=pix.width();
    char nombre[20]="Universo.pgm";
    char nombre2[20]="digital2.pgm";
    char dato[500];
    char datoP[500];
    unsigned int t_po;
    int c,i;
    fichero = fopen(nombre, "r" );
    fichero2 = fopen(nombre2, "w" );
    printf("fichero: %s\n",nombre);

    if(!fichero) {
        perror("fallo al abrir");
        printf("error, no se pudo leer el archivo!\n");
    }

    i=0;
    fprintf(fichero2, "%s","P");
    fprintf(fichero2, "%s","2");
    fprintf(fichero2, "%s","\n");
    sprintf(datoP,"%d",ancho);
    fprintf(fichero2, "%s",datoP);
    fprintf(fichero2, "%s"," ");
    sprintf(datoP,"%d",alto);
    fprintf(fichero2, "%s",datoP);
    fprintf(fichero2, "%s","\n");
    fprintf(fichero2, "%s","255");
    fprintf(fichero2, "%s","\n");
    while ((c = fgetc(fichero)) != EOF) {

       i++;
       fscanf(fichero, "%s", &dato);

       if(i>6){
       t_po=atoi(dato);
       t_po=255 - t_po;
       sprintf(datoP,"%d",t_po);
       fprintf(fichero2, "%s",datoP);
       fprintf(fichero2, "%s","\n");
       }
       else
       {

       }



    }

    if (ferror(fichero))
        puts("I/O error al leer");
    else if (feof(fichero))
        puts("fin satisfactorio");

        fclose (fichero2);
        fclose(fichero);
        QPixmap pix2(nombre2);
        ui->label_2->setPixmap(pix2);

}
void interfaz::mediana(){
    int alto=0;
    int ancho=0;
    QPixmap pix(":/Universo.pgm");
    alto=pix.height();
    ancho=pix.width();
    char nombre[20]="Universo.pgm";
    char nombre2[20]="digital3.pgm";
    char nombre3[20]="rotada.pgm";
    char dato[500];
    char datoP[500];
    unsigned int t_po;
    int c,i,j,k;
    fichero = fopen(nombre, "r" );
    fichero2 = fopen(nombre2, "w" );
    fichero3 = fopen(nombre3, "w" );
    printf("fichero: %s\n",nombre);

    if(!fichero) {
        perror("fallo al abrir");
        printf("error, no se pudo leer el archivo!\n");
    }

    i=0;
    j=0;
    k=0;
    fprintf(fichero2, "%s","P");
    fprintf(fichero2, "%s","2");
    fprintf(fichero2, "%s","\n");
    sprintf(datoP,"%d",ancho);
    fprintf(fichero2, "%s",datoP);
    fprintf(fichero2, "%s"," ");
    sprintf(datoP,"%d",alto);
    fprintf(fichero2, "%s",datoP);
    fprintf(fichero2, "%s","\n");
    fprintf(fichero2, "%s","255");
    fprintf(fichero2, "%s","\n");
    int matriz[ancho][alto];
    while ((c = fgetc(fichero)) != EOF)
    {

       i++;
       fscanf(fichero, "%s", &dato);

       if(i>6){
        if(j<ancho){
           t_po=atoi(dato);
           sprintf(datoP,"%d",t_po);
           fprintf(fichero2, "%s",datoP);
           fprintf(fichero2, "%s","\n");
           matriz[j][k]=t_po;
           j++;
           if(j>=ancho){k=k+1;}
        }
        else{j=0;}

       }
       else
       {

       }



    }
    fprintf(fichero3, "%s","P");
    fprintf(fichero3, "%s","2");
    fprintf(fichero3, "%s","\n");
    sprintf(datoP,"%d",alto);
    fprintf(fichero3, "%s",datoP);
    fprintf(fichero3, "%s"," ");
    sprintf(datoP,"%d",ancho);
    fprintf(fichero3, "%s",datoP);
    fprintf(fichero3, "%s","\n");
    fprintf(fichero3, "%s","255");
    fprintf(fichero3, "%s","\n");
    for(i=0;i<alto;i++)
    {
        for(j=0;j<ancho;j++)
        {

            sprintf(datoP,"%d",matriz[i][j]);
            fprintf(fichero3, "%s",datoP);
            fprintf(fichero3, "%s","\n");

        }
    }

    if (ferror(fichero))
        puts("I/O error al leer");
    else if (feof(fichero))
        puts("fin satisfactorio");

        fclose (fichero2);
        fclose(fichero);
        QPixmap pix3(nombre3);
        ui->label_2->setPixmap(pix3);

}
