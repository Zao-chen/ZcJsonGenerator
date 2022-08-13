#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_copy_clicked();

    void on_pushButton_text_clicked();

    void on_radioButton_last_clicked(bool checked);

    void on_radioButton_add_clicked(bool checked);

    void on_radioButton_edit_clicked(bool checked);

    void on_pushButton_clear_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_reload_clicked();

    void on_pushButton_selector_clicked();

    void on_pushButton_score_clicked();

    void on_pushButton_tr_3_clicked();

    void on_pushButton_n_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
