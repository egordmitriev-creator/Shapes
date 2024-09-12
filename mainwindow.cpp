#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "square.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->figureComboBox->addItem("Выбор фигуры");
    ui->figureComboBox->addItem("Квадрат");
    ui->figureComboBox->addItem("Прямоугольник");
    ui->figureComboBox->addItem("Параллелограмм");
    ui->figureComboBox->addItem("Ромб");
    ui->figureComboBox->addItem("Треугольник");
    ui->figureComboBox->addItem("Трапеция");
    ui->figureComboBox->addItem("Круг");
    ui->figureComboBox->addItem("Сектор");

    // initialState = this->saveState();
    // connect(ui->ClearAction, &QAction::triggered, this, &MainWindow::on_ClearAction_triggered);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ClearAction_triggered()
{
    // restoreState(initialState);
    // qDebug() << "clear";

    ui->figureComboBox->setCurrentIndex(0);
    ui->firstParametrLabel->setText("Выберите фигуру");
    ui->secondParametrLabel->setText(" ");
    ui->thirdParametrLabel->setText(" ");

    ui->formulaLabel->setText(" ");

    ui->firstParametrLineEdit->clear();
    ui->secondParametrLineEdit->clear();
    ui->thirdParametrLineEdit->clear();

    ui->squareLabel->setText("S = ");
}

void MainWindow::on_changeFigurePushButton_clicked()
{
    int figureIndex = ui->figureComboBox->currentIndex();

    switch (figureIndex) {

    //Пустая строка
    case 0:
    {
        ui->firstParametrLabel->setText("Выберите фигуру");
        ui->secondParametrLabel->setText(" ");
        ui->thirdParametrLabel->setText(" ");

        ui->formulaLabel->setText(" ");

        ui->firstParametrLineEdit->clear();
        ui->secondParametrLineEdit->clear();
        ui->thirdParametrLineEdit->clear();

        ui->squareLabel->setText("S = ");
    }
    break;

    //Квадрат
    case 1:
    {
        ui->firstParametrLabel->setText("Сторона квадрата =");
        ui->secondParametrLabel->setText(" ");
        ui->thirdParametrLabel->setText(" ");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/sqere.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    //Прямоугольник
    case 2:
    {
        ui->firstParametrLabel->setText("Первая сторона =");
        ui->secondParametrLabel->setText("Вторая сторона =");
        ui->thirdParametrLabel->setText(" ");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/rectangle.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    //Параллелограмм
    case 3:
    {
        ui->firstParametrLabel->setText("Первая сторона =");
        ui->secondParametrLabel->setText("Вторая сторона =");
        ui->thirdParametrLabel->setText("Угол между сторонами =");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/parallelogram.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    //Ромб
    case 4:
    {
        ui->firstParametrLabel->setText("Сторона ромба =");
        ui->secondParametrLabel->setText("Угол между сторонами =");
        ui->thirdParametrLabel->setText(" ");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/rhomb.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    //Треугольник
    case 5:
    {
        ui->firstParametrLabel->setText("Первая сторона =");
        ui->secondParametrLabel->setText("Вторая сторона =");
        ui->thirdParametrLabel->setText("Третья сторона =");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/triangle.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    //Трапеция
    case 6:
    {
        ui->firstParametrLabel->setText("Нижняя сторона =");
        ui->secondParametrLabel->setText("Верхняя сторона =");
        ui->thirdParametrLabel->setText("Высота =");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/trapezoid.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    //Круг
    case 7:
    {
        ui->firstParametrLabel->setText("Радиус =");
        ui->secondParametrLabel->setText(" ");
        ui->thirdParametrLabel->setText(" ");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/circle.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    case 8:
    {
        ui->firstParametrLabel->setText("Радиус =");
        ui->secondParametrLabel->setText("Градусная мера дуги =");
        ui->thirdParametrLabel->setText(" ");

        QPixmap pix("/Users/egordmitriev/Desktop/sibsutis/3 course/visual programming/Shapes/assets/circleSector.png");
        int w = ui->formulaLabel->width();
        int h = ui->formulaLabel->height();

        ui->formulaLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

        break;
    }

    default:
        break;
    }
}

void MainWindow::on_calculatePushButton_clicked()
{
    int figureIndex = ui->figureComboBox->currentIndex();

    Square square;

    switch (figureIndex) {

    //Квадрат
    case 1:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        bool ok;
        float number = firstParametr.toFloat(&ok);
        if (ok && (number >= 0)) {
            float result = square.calculationSquere(number);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    //Прямоугольник
    case 2:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        QString secondParametr = ui->secondParametrLineEdit->text();
        bool ok_1, ok_2;
        float number_1 = firstParametr.toFloat(&ok_1);
        float number_2 = secondParametr.toFloat(&ok_2);
        if (ok_1 && ok_2 && (number_1 >= 0) && (number_2 >= 0)){
            float result = square.calculationRectangle(number_1, number_2);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    //Параллелограмм
    case 3:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        QString secondParametr = ui->secondParametrLineEdit->text();
        QString thirdParametr = ui->thirdParametrLineEdit->text();
        bool ok_1, ok_2, ok_3;
        float number_1 = firstParametr.toFloat(&ok_1);
        float number_2 = secondParametr.toFloat(&ok_2);
        float number_3 = thirdParametr.toFloat(&ok_3);
        if (ok_1 && ok_2 && ok_3 && (number_1 >= 0) && (number_2 >= 0) && (number_3 >= 0) && (number_3 < 180)){
            float result = square.calculationParallelogram(number_1, number_2, number_3);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    //Ромб
    case 4:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        QString secondParametr = ui->secondParametrLineEdit->text();
        bool ok_1, ok_2;
        float number_1 = firstParametr.toFloat(&ok_1);
        float number_2 = secondParametr.toFloat(&ok_2);
        if (ok_1 && ok_2 && (number_1 >= 0) && (number_2 >= 0) && (number_2 < 180)){
            float result = square.calculationRhomb(number_1, number_2);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    //Треугольник
    case 5:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        QString secondParametr = ui->secondParametrLineEdit->text();
        QString thirdParametr = ui->thirdParametrLineEdit->text();
        bool ok_1, ok_2, ok_3;
        float number_1 = firstParametr.toFloat(&ok_1);
        float number_2 = secondParametr.toFloat(&ok_2);
        float number_3 = thirdParametr.toFloat(&ok_3);
        if (ok_1 && ok_2 && ok_3 && (number_1 >= 0) && (number_2 >= 0) && (number_3 >= 0)){
            float result = square.calculationTriangle(number_1, number_2, number_3);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    //Трапеция
    case 6:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        QString secondParametr = ui->secondParametrLineEdit->text();
        QString thirdParametr = ui->thirdParametrLineEdit->text();
        bool ok_1, ok_2, ok_3;
        float number_1 = firstParametr.toFloat(&ok_1);
        float number_2 = secondParametr.toFloat(&ok_2);
        float number_3 = thirdParametr.toFloat(&ok_3);
        if (ok_1 && ok_2 && ok_3 && (number_1 >= 0) && (number_2 >= 0) && (number_3 >= 0)){
            float result = square.calculationTrapezoid(number_1, number_2, number_3);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    //Круг
    case 7:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        bool ok;
        float number = firstParametr.toFloat(&ok);
        if (ok && (number >= 0)) {
            float result = square.calculationCircle(number);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    //Сектор
    case 8:
    {
        QString firstParametr = ui->firstParametrLineEdit->text();
        QString secondParametr = ui->secondParametrLineEdit->text();
        bool ok_1, ok_2;
        float number_1 = firstParametr.toFloat(&ok_1);
        float number_2 = secondParametr.toFloat(&ok_2);
        if (ok_1 && ok_2 && (number_1 >= 0) && (number_2 >= 0) && (number_2 <= 360)){
            float result = square.calculationRhomb(number_1, number_2);
            QString resultText = "S = " + QString::number(result);
            ui->squareLabel->setText(resultText);
        } else {
            ui->squareLabel->setText("Ошибка: Неправильный ввод!");
        }

        break;
    }

    default:
        break;
    }
}
