/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *AuthorAction;
    QAction *ClearAction;
    QAction *QuitAction;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *firstParametrLabel;
    QLabel *thirdParametrLabel;
    QLineEdit *secondParametrLineEdit;
    QComboBox *figureComboBox;
    QLabel *squareLabel;
    QLabel *secondParametrLabel;
    QLineEdit *thirdParametrLineEdit;
    QLineEdit *firstParametrLineEdit;
    QPushButton *calculatePushButton;
    QPushButton *changeFigurePushButton;
    QLabel *formulaLabel;
    QMenuBar *menubar;
    QMenu *AuthorMenu;
    QMenu *ClearMenu;
    QMenu *QuitMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(452, 441);
        AuthorAction = new QAction(MainWindow);
        AuthorAction->setObjectName("AuthorAction");
        ClearAction = new QAction(MainWindow);
        ClearAction->setObjectName("ClearAction");
        QuitAction = new QAction(MainWindow);
        QuitAction->setObjectName("QuitAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 10, 371, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        firstParametrLabel = new QLabel(widget);
        firstParametrLabel->setObjectName("firstParametrLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstParametrLabel->sizePolicy().hasHeightForWidth());
        firstParametrLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(firstParametrLabel, 0, 0, 1, 1);

        thirdParametrLabel = new QLabel(widget);
        thirdParametrLabel->setObjectName("thirdParametrLabel");
        sizePolicy.setHeightForWidth(thirdParametrLabel->sizePolicy().hasHeightForWidth());
        thirdParametrLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(thirdParametrLabel, 5, 0, 1, 1);

        secondParametrLineEdit = new QLineEdit(widget);
        secondParametrLineEdit->setObjectName("secondParametrLineEdit");

        gridLayout->addWidget(secondParametrLineEdit, 3, 0, 2, 1);

        figureComboBox = new QComboBox(widget);
        figureComboBox->setObjectName("figureComboBox");

        gridLayout->addWidget(figureComboBox, 1, 1, 1, 1);

        squareLabel = new QLabel(widget);
        squareLabel->setObjectName("squareLabel");

        gridLayout->addWidget(squareLabel, 6, 1, 1, 1);

        secondParametrLabel = new QLabel(widget);
        secondParametrLabel->setObjectName("secondParametrLabel");
        sizePolicy.setHeightForWidth(secondParametrLabel->sizePolicy().hasHeightForWidth());
        secondParametrLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(secondParametrLabel, 2, 0, 1, 1);

        thirdParametrLineEdit = new QLineEdit(widget);
        thirdParametrLineEdit->setObjectName("thirdParametrLineEdit");
        thirdParametrLineEdit->setEnabled(true);

        gridLayout->addWidget(thirdParametrLineEdit, 6, 0, 1, 1);

        firstParametrLineEdit = new QLineEdit(widget);
        firstParametrLineEdit->setObjectName("firstParametrLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(firstParametrLineEdit->sizePolicy().hasHeightForWidth());
        firstParametrLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(firstParametrLineEdit, 1, 0, 1, 1);

        calculatePushButton = new QPushButton(widget);
        calculatePushButton->setObjectName("calculatePushButton");

        gridLayout->addWidget(calculatePushButton, 4, 1, 2, 1);

        changeFigurePushButton = new QPushButton(widget);
        changeFigurePushButton->setObjectName("changeFigurePushButton");

        gridLayout->addWidget(changeFigurePushButton, 2, 1, 2, 1);


        verticalLayout->addLayout(gridLayout);

        formulaLabel = new QLabel(widget);
        formulaLabel->setObjectName("formulaLabel");
        formulaLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(formulaLabel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 452, 24));
        AuthorMenu = new QMenu(menubar);
        AuthorMenu->setObjectName("AuthorMenu");
        ClearMenu = new QMenu(menubar);
        ClearMenu->setObjectName("ClearMenu");
        QuitMenu = new QMenu(menubar);
        QuitMenu->setObjectName("QuitMenu");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(AuthorMenu->menuAction());
        menubar->addAction(ClearMenu->menuAction());
        menubar->addAction(QuitMenu->menuAction());
        AuthorMenu->addAction(AuthorAction);
        ClearMenu->addAction(ClearAction);
        QuitMenu->addAction(QuitAction);

        retranslateUi(MainWindow);
        QObject::connect(QuitAction, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Shapes", nullptr));
        AuthorAction->setText(QCoreApplication::translate("MainWindow", "\320\224\320\274\320\270\321\202\321\200\320\270\320\265\320\262 \320\225\320\263\320\276\321\200 \320\230\320\237-213", nullptr));
        ClearAction->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\320\262\320\276\320\264", nullptr));
        QuitAction->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
        firstParametrLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\320\270\320\263\321\203\321\200\321\203", nullptr));
        thirdParametrLabel->setText(QString());
        squareLabel->setText(QCoreApplication::translate("MainWindow", "S = ", nullptr));
        secondParametrLabel->setText(QString());
        calculatePushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        changeFigurePushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        formulaLabel->setText(QString());
        AuthorMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\321\213", nullptr));
        ClearMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        QuitMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
