/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_appearance2;
    QPlainTextEdit *plainTextEdit_preview;
    QLabel *label_appearance3;
    QPlainTextEdit *plainTextEdit_main;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_reload;
    QPushButton *pushButton_copy;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_appearance;
    QTreeWidget *treeWidget_contact;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_del;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_add;
    QRadioButton *radioButton_edit;
    QRadioButton *radioButton_last;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_text;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_text;
    QPushButton *pushButton_text;
    QLabel *label_selector;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_selector;
    QPushButton *pushButton_selector;
    QLabel *label_score;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_score_name;
    QLineEdit *lineEdit_score_sc;
    QLineEdit *lineEdit_score_vaule;
    QPushButton *pushButton_score;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_tr;
    QLabel *label_tr_2;
    QLineEdit *lineEdit_tr;
    QLabel *label_tr_3;
    QLineEdit *lineEdit_tr_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_tr_3;
    QLabel *label_tr_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_quick;
    QPushButton *pushButton_n;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1201, 774);
        MainWindow->setStyleSheet(QString::fromUtf8("* {\n"
"    background-color: #FFFEF9;\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background-color: #FFFCF3;\n"
"}\n"
"\n"
"QMenu {\n"
"    background-color: #FFFCF3;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 5px 20px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #f8b156;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 1px;\n"
"    background-color: #f7931e;\n"
"    margin: 5px 0px 5px 0px;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 5px 20px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #f8b156;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background-color: #DAA520;\n"
"}\n"
"\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid #f7931e;\n"
"    border-radius: 3px;\n"
"    background-color: #FFFCF3;\n"
"    padding: 2px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"\n"
"QTextEdit {\n"
"    border: 2px solid #f7931e;\n"
"    border-radius: 3px;;\n"
"    padding: 5px;\n"
"    font-size: 16px;\n"
"   "
                        " background-color: #FFFCF3;\n"
"}\n"
"\n"
"QTableView {\n"
"    background-color: #FFFCF3;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #FFBC33;\n"
"    color: #ffffff;\n"
"    border: none;\n"
"    border-radius: 2px;\n"
"    padding: 2px 2px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f8b156;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: 	#DAA520;\n"
"}\n"
"\n"
"\n"
"QComboBox {\n"
"    border: none;\n"
"    background-color: #FFBC33;\n"
"    color: #ffffff;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #f8b156; /* \351\200\211\344\270\255\351\241\271\350\203\214\346\231\257\350\211\262 */\n"
"    selection-color: #ffffff; /* \351\200\211\344\270\255\351\241\271\345\211\215\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: #f8b156;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 0; /* \345\216\273\346\216\211\344\270\213\346\213\211"
                        "\347\256\255\345\244\264 */\n"
"}\n"
"\n"
"QCheckBox {\n"
"    color: #FFBC33;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding-left: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked {\n"
"    border: 2px solid #FFBC33;\n"
"    background-color: #FFFEF9;\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked:hover {\n"
"    border: 2px solid #f8b156;\n"
"}\n"
"\n"
"QCheckBox::indicator::checked {\n"
"    border: 2px solid #FFBC33;\n"
"    background-color: #FFBC33;\n"
"}\n"
"\n"
"QCheckBox::indicator::checked:hover {\n"
"    background-color: #f8b156;\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(930, 740, 251, 16));
        QFont font;
        font.setPointSize(7);
        label->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 1171, 421));
        horizontalLayoutWidget_3 = new QWidget(groupBox);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 20, 1134, 391));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_appearance2 = new QLabel(horizontalLayoutWidget_3);
        label_appearance2->setObjectName(QString::fromUtf8("label_appearance2"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_appearance2->setFont(font1);

        verticalLayout->addWidget(label_appearance2);

        plainTextEdit_preview = new QPlainTextEdit(horizontalLayoutWidget_3);
        plainTextEdit_preview->setObjectName(QString::fromUtf8("plainTextEdit_preview"));
        plainTextEdit_preview->setMinimumSize(QSize(545, 0));

        verticalLayout->addWidget(plainTextEdit_preview);

        label_appearance3 = new QLabel(horizontalLayoutWidget_3);
        label_appearance3->setObjectName(QString::fromUtf8("label_appearance3"));
        label_appearance3->setFont(font1);

        verticalLayout->addWidget(label_appearance3);

        plainTextEdit_main = new QPlainTextEdit(horizontalLayoutWidget_3);
        plainTextEdit_main->setObjectName(QString::fromUtf8("plainTextEdit_main"));

        verticalLayout->addWidget(plainTextEdit_main);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_clear = new QPushButton(horizontalLayoutWidget_3);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_clear);

        pushButton_reload = new QPushButton(horizontalLayoutWidget_3);
        pushButton_reload->setObjectName(QString::fromUtf8("pushButton_reload"));
        pushButton_reload->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_reload);

        pushButton_copy = new QPushButton(horizontalLayoutWidget_3);
        pushButton_copy->setObjectName(QString::fromUtf8("pushButton_copy"));
        pushButton_copy->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_copy);

        pushButton_back = new QPushButton(horizontalLayoutWidget_3);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButton_back);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_appearance = new QLabel(horizontalLayoutWidget_3);
        label_appearance->setObjectName(QString::fromUtf8("label_appearance"));
        label_appearance->setFont(font1);

        verticalLayout_2->addWidget(label_appearance);

        treeWidget_contact = new QTreeWidget(horizontalLayoutWidget_3);
        treeWidget_contact->setObjectName(QString::fromUtf8("treeWidget_contact"));
        treeWidget_contact->setMinimumSize(QSize(545, 200));

        verticalLayout_2->addWidget(treeWidget_contact);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_del = new QPushButton(horizontalLayoutWidget_3);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setEnabled(false);
        pushButton_del->setMinimumSize(QSize(20, 40));
        pushButton_del->setMaximumSize(QSize(90, 40));

        horizontalLayout_2->addWidget(pushButton_del);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        radioButton_add = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_add->setObjectName(QString::fromUtf8("radioButton_add"));
        radioButton_add->setEnabled(false);
        radioButton_add->setMaximumSize(QSize(16777215, 40));
        radioButton_add->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(10);
        radioButton_add->setFont(font2);

        horizontalLayout_9->addWidget(radioButton_add);

        radioButton_edit = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_edit->setObjectName(QString::fromUtf8("radioButton_edit"));
        radioButton_edit->setEnabled(false);
        radioButton_edit->setMaximumSize(QSize(16777215, 40));
        radioButton_edit->setBaseSize(QSize(0, 0));
        radioButton_edit->setFont(font2);

        horizontalLayout_9->addWidget(radioButton_edit);

        radioButton_last = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_last->setObjectName(QString::fromUtf8("radioButton_last"));
        radioButton_last->setEnabled(true);
        radioButton_last->setMaximumSize(QSize(16777215, 40));
        radioButton_last->setBaseSize(QSize(0, 0));
        radioButton_last->setFont(font2);
        radioButton_last->setTabletTracking(false);
        radioButton_last->setChecked(true);

        horizontalLayout_9->addWidget(radioButton_last);


        horizontalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 420, 1171, 321));
        horizontalLayoutWidget_8 = new QWidget(groupBox_2);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(20, 20, 1131, 288));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_text = new QLabel(horizontalLayoutWidget_8);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_text->setFont(font3);

        verticalLayout_4->addWidget(label_text);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_text = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_text->setObjectName(QString::fromUtf8("lineEdit_text"));
        lineEdit_text->setMinimumSize(QSize(0, 80));

        horizontalLayout_4->addWidget(lineEdit_text);

        pushButton_text = new QPushButton(horizontalLayoutWidget_8);
        pushButton_text->setObjectName(QString::fromUtf8("pushButton_text"));
        pushButton_text->setMinimumSize(QSize(80, 80));

        horizontalLayout_4->addWidget(pushButton_text);


        verticalLayout_4->addLayout(horizontalLayout_4);

        label_selector = new QLabel(horizontalLayoutWidget_8);
        label_selector->setObjectName(QString::fromUtf8("label_selector"));
        label_selector->setFont(font3);

        verticalLayout_4->addWidget(label_selector);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit_selector = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_selector->setObjectName(QString::fromUtf8("lineEdit_selector"));
        lineEdit_selector->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(lineEdit_selector);

        pushButton_selector = new QPushButton(horizontalLayoutWidget_8);
        pushButton_selector->setObjectName(QString::fromUtf8("pushButton_selector"));
        pushButton_selector->setMinimumSize(QSize(80, 40));

        horizontalLayout_5->addWidget(pushButton_selector);


        verticalLayout_4->addLayout(horizontalLayout_5);

        label_score = new QLabel(horizontalLayoutWidget_8);
        label_score->setObjectName(QString::fromUtf8("label_score"));
        label_score->setFont(font3);

        verticalLayout_4->addWidget(label_score);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lineEdit_score_name = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_score_name->setObjectName(QString::fromUtf8("lineEdit_score_name"));
        lineEdit_score_name->setMinimumSize(QSize(0, 40));
        lineEdit_score_name->setMaxLength(32765);

        horizontalLayout_6->addWidget(lineEdit_score_name);

        lineEdit_score_sc = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_score_sc->setObjectName(QString::fromUtf8("lineEdit_score_sc"));
        lineEdit_score_sc->setMinimumSize(QSize(0, 40));
        lineEdit_score_sc->setMaxLength(32765);

        horizontalLayout_6->addWidget(lineEdit_score_sc);

        lineEdit_score_vaule = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_score_vaule->setObjectName(QString::fromUtf8("lineEdit_score_vaule"));
        lineEdit_score_vaule->setEnabled(false);
        lineEdit_score_vaule->setMinimumSize(QSize(0, 40));
        QFont font4;
        font4.setStrikeOut(false);
        lineEdit_score_vaule->setFont(font4);
        lineEdit_score_vaule->setMaxLength(32765);

        horizontalLayout_6->addWidget(lineEdit_score_vaule);

        pushButton_score = new QPushButton(horizontalLayoutWidget_8);
        pushButton_score->setObjectName(QString::fromUtf8("pushButton_score"));
        pushButton_score->setMinimumSize(QSize(80, 40));

        horizontalLayout_6->addWidget(pushButton_score);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_tr = new QLabel(horizontalLayoutWidget_8);
        label_tr->setObjectName(QString::fromUtf8("label_tr"));
        label_tr->setFont(font3);

        verticalLayout_5->addWidget(label_tr);

        label_tr_2 = new QLabel(horizontalLayoutWidget_8);
        label_tr_2->setObjectName(QString::fromUtf8("label_tr_2"));
        QFont font5;
        font5.setPointSize(8);
        label_tr_2->setFont(font5);

        verticalLayout_5->addWidget(label_tr_2);

        lineEdit_tr = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_tr->setObjectName(QString::fromUtf8("lineEdit_tr"));
        lineEdit_tr->setMinimumSize(QSize(0, 40));

        verticalLayout_5->addWidget(lineEdit_tr);

        label_tr_3 = new QLabel(horizontalLayoutWidget_8);
        label_tr_3->setObjectName(QString::fromUtf8("label_tr_3"));
        label_tr_3->setFont(font5);

        verticalLayout_5->addWidget(label_tr_3);

        lineEdit_tr_2 = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_tr_2->setObjectName(QString::fromUtf8("lineEdit_tr_2"));
        lineEdit_tr_2->setMinimumSize(QSize(456, 40));

        verticalLayout_5->addWidget(lineEdit_tr_2);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButton_tr_3 = new QPushButton(horizontalLayoutWidget_8);
        pushButton_tr_3->setObjectName(QString::fromUtf8("pushButton_tr_3"));
        pushButton_tr_3->setMinimumSize(QSize(80, 105));

        verticalLayout_3->addWidget(pushButton_tr_3);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_7);

        label_tr_4 = new QLabel(horizontalLayoutWidget_8);
        label_tr_4->setObjectName(QString::fromUtf8("label_tr_4"));
        label_tr_4->setMinimumSize(QSize(0, 0));
        label_tr_4->setFont(font);

        verticalLayout_6->addWidget(label_tr_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        label_quick = new QLabel(horizontalLayoutWidget_8);
        label_quick->setObjectName(QString::fromUtf8("label_quick"));
        label_quick->setFont(font3);

        verticalLayout_6->addWidget(label_quick);

        pushButton_n = new QPushButton(horizontalLayoutWidget_8);
        pushButton_n->setObjectName(QString::fromUtf8("pushButton_n"));
        pushButton_n->setMinimumSize(QSize(0, 40));
        pushButton_n->setMaximumSize(QSize(120, 16777215));

        verticalLayout_6->addWidget(pushButton_n);


        horizontalLayout_8->addLayout(verticalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
#if QT_CONFIG(shortcut)
        label_appearance2->setBuddy(plainTextEdit_preview);
        label_appearance3->setBuddy(plainTextEdit_main);
        label_appearance->setBuddy(treeWidget_contact);
        label_text->setBuddy(lineEdit_text);
        label_selector->setBuddy(lineEdit_selector);
        label_score->setBuddy(lineEdit_score_name);
        label_tr->setBuddy(lineEdit_tr);
        label_quick->setBuddy(pushButton_n);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(plainTextEdit_preview, plainTextEdit_main);
        QWidget::setTabOrder(plainTextEdit_main, pushButton_clear);
        QWidget::setTabOrder(pushButton_clear, pushButton_reload);
        QWidget::setTabOrder(pushButton_reload, pushButton_copy);
        QWidget::setTabOrder(pushButton_copy, pushButton_back);
        QWidget::setTabOrder(pushButton_back, treeWidget_contact);
        QWidget::setTabOrder(treeWidget_contact, pushButton_del);
        QWidget::setTabOrder(pushButton_del, radioButton_add);
        QWidget::setTabOrder(radioButton_add, radioButton_edit);
        QWidget::setTabOrder(radioButton_edit, radioButton_last);
        QWidget::setTabOrder(radioButton_last, lineEdit_text);
        QWidget::setTabOrder(lineEdit_text, pushButton_text);
        QWidget::setTabOrder(pushButton_text, lineEdit_selector);
        QWidget::setTabOrder(lineEdit_selector, pushButton_selector);
        QWidget::setTabOrder(pushButton_selector, lineEdit_score_name);
        QWidget::setTabOrder(lineEdit_score_name, lineEdit_score_sc);
        QWidget::setTabOrder(lineEdit_score_sc, lineEdit_score_vaule);
        QWidget::setTabOrder(lineEdit_score_vaule, pushButton_score);
        QWidget::setTabOrder(pushButton_score, lineEdit_tr);
        QWidget::setTabOrder(lineEdit_tr, lineEdit_tr_2);
        QWidget::setTabOrder(lineEdit_tr_2, pushButton_tr_3);
        QWidget::setTabOrder(pushButton_tr_3, pushButton_n);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0.1.1(beta-20231221)         Made by \346\227\251\346\231\250 with <3 and bug", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\200\273\350\247\210\347\274\226\350\276\221", nullptr));
        label_appearance2->setText(QCoreApplication::translate("MainWindow", "\351\242\204\350\247\210(&Y)", nullptr));
        label_appearance3->setText(QCoreApplication::translate("MainWindow", "\345\256\214\346\225\264\345\206\205\345\256\271(W)", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        pushButton_reload->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        pushButton_copy->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\345\244\215\345\210\266", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\234\200\345\220\216\344\270\200\344\270\252\357\274\210\351\200\200\346\240\274\357\274\211", nullptr));
        label_appearance->setText(QCoreApplication::translate("MainWindow", "\345\205\203\347\264\240(E)", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_contact->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "\350\257\246\346\203\205", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\347\261\273\345\236\213", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\351\242\204\350\247\210", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255", nullptr));
        radioButton_add->setText(QCoreApplication::translate("MainWindow", "\345\234\250 \351\200\211\344\270\255\345\205\203\347\264\240 \345\211\215\346\217\222\345\205\245 \345\205\203\347\264\240", nullptr));
        radioButton_edit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271 \351\200\211\344\270\255\345\205\203\347\264\240", nullptr));
        radioButton_last->setText(QCoreApplication::translate("MainWindow", "\350\277\275\345\212\240\345\205\203\347\264\240\357\274\210\351\273\230\350\256\244\357\274\211", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\205\203\347\264\240\346\267\273\345\212\240", nullptr));
        label_text->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254(&W)", nullptr));
        pushButton_text->setText(QCoreApplication::translate("MainWindow", "\350\277\275\345\212\240", nullptr));
        label_selector->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\231\250(&X)", nullptr));
        pushButton_selector->setText(QCoreApplication::translate("MainWindow", "\350\277\275\345\212\240", nullptr));
        label_score->setText(QCoreApplication::translate("MainWindow", "\345\210\206\346\225\260(&S)", nullptr));
        lineEdit_score_name->setText(QString());
        lineEdit_score_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\210\206\346\225\260\342\200\246\342\200\246", nullptr));
        lineEdit_score_sc->setText(QString());
        lineEdit_score_sc->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\233\256\346\240\207\342\200\246\342\200\246", nullptr));
        lineEdit_score_vaule->setText(QString());
        lineEdit_score_vaule->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245vaule\342\200\246\357\274\210\345\217\257\351\200\211\357\274\211", nullptr));
        pushButton_score->setText(QCoreApplication::translate("MainWindow", "\350\277\275\345\212\240", nullptr));
        label_tr->setText(QCoreApplication::translate("MainWindow", "\347\277\273\350\257\221\345\255\227\347\254\246(&F)", nullptr));
        label_tr_2->setText(QCoreApplication::translate("MainWindow", "\344\270\273\346\226\207\346\234\254(%%1\343\200\201%%2\342\200\246\342\200\246\344\270\272\346\233\277\346\215\242\346\226\207\346\234\254\347\232\204\347\254\254\345\207\240\344\270\252\345\200\274\357\274\214%%s\346\230\257\345\205\250\351\203\250\345\200\274\357\274\211\357\274\210\345\217\257\344\273\245\344\275\277\347\224\250\350\275\254\344\271\211\357\274\211", nullptr));
        label_tr_3->setText(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242\346\226\207\346\234\254\357\274\210\346\240\274\345\274\217\357\274\232\"\345\200\274a\",\"\345\200\274b\"\357\274\214\351\234\200\350\246\201\345\217\214\345\274\225\345\217\267\357\274\211", nullptr));
        lineEdit_tr_2->setText(QString());
        pushButton_tr_3->setText(QCoreApplication::translate("MainWindow", "\350\277\275\345\212\240", nullptr));
        label_tr_4->setText(QCoreApplication::translate("MainWindow", "tips:\346\233\277\346\215\242\344\274\232\346\233\277\346\215\242\346\216\211\344\270\273\346\226\207\346\234\254\347\232\204%%1\343\200\201%%2\n"
"\344\276\213\345\246\202\346\210\221\346\233\277\346\215\242\346\226\207\346\234\254\345\241\253\344\272\206\"a\",\"b\"\n"
"\351\202\243\344\271\210\345\234\250\346\214\207\344\273\244\346\211\247\350\241\214\347\232\204\346\227\266\345\200\231\344\270\273\346\226\207\346\234\254\347\232\204 %%1 %%2\n"
"\345\260\261\344\274\232\345\210\206\345\210\253\346\233\277\346\215\242\344\270\272a\344\270\216b", nullptr));
        label_quick->setText(QCoreApplication::translate("MainWindow", "\345\270\270\347\224\250\350\275\254\344\271\211(C)", nullptr));
        pushButton_n->setText(QCoreApplication::translate("MainWindow", "\346\215\242\350\241\214\357\274\210\350\277\275\345\212\240\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
