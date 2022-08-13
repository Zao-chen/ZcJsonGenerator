#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <QClipboard>
QStringList text_all; //内容总记录
QStringList text_all_review; //记录预览
QStringList text_all_type; //类型预览
QString joint; //用于拼接
int now_choose; //当前选中行
int edit_type=false;//编辑模式 0追加 1插入 2修改

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    /*初始化*/
    ui->setupUi(this);
    this->setWindowTitle("基岩版文本原始json生成器");
    this->setWindowIcon(QIcon(":/ico/img/icon.ico"));

    /*获取行被选中*/
    connect(ui->treeWidget_contact,&QTreeWidget::itemClicked,[&,now_choose](QTreeWidgetItem *item, int column)mutable
    {
        now_choose=ui->treeWidget_contact->currentIndex().row(); //设定选中行
        ui->pushButton_del->setDisabled(false); //启用按钮
        ui->radioButton_add->setDisabled(false); //启用按钮
        ui->radioButton_edit->setDisabled(false); //启用按钮
    });
    /*行取消选中*/
    connect(ui->treeWidget_contact,&QTreeWidget::itemSelectionChanged,[&]()
    {
        ui->pushButton_del->setDisabled(true); //关闭按钮
        ui->radioButton_add->setDisabled(true); //关闭按钮
        ui->radioButton_edit->setDisabled(true); //启用按钮
        ui->radioButton_last->click();
        ui->pushButton_text->setText("追加");
        ui->pushButton_score->setText("追加");
        ui->pushButton_selector->setText("追加");
        ui->pushButton_tr_3->setText("追加");
        ui->pushButton_n->setText("回车(追加)");
        ui->radioButton_add->setChecked(false);
    });
}

MainWindow::~MainWindow() //关闭窗口
{
    delete ui;
}


//下面是一些槽
/*
 * 快捷函数的调用
*/
/*重置显示*/
void show_reload(Ui::MainWindow *dis)
{
    /*定义变量*/
    joint.clear(); //进行拼接并显示
    QTreeWidgetItem* tree_contact;
    /*遍历*/
    dis->treeWidget_contact->clear();
    for(int i=0;i!=text_all.length();i++)
    {
        tree_contact = new QTreeWidgetItem(QStringList()<<text_all_review[i]<<text_all_type[i]<<text_all[i]);
        dis->treeWidget_contact->addTopLevelItem(tree_contact);
        joint+=text_all[i];
        if(i!=text_all.length()-1)joint+=",";//拼接
    }
    /*显示*/
    dis->plainTextEdit_main->setPlainText("{\"rawtext\":["+joint+"]}");//总览
    joint.clear(); //清空
    for(int i=0;i!=text_all.length();i++) joint+=(text_all_review[i]);//拼接预览
    dis->plainTextEdit_preview->setPlainText(joint);//预览
}

/*
 * 对元素的删删减减
*/
void MainWindow::on_pushButton_del_clicked()
{
    text_all.removeAt(now_choose);
    text_all_type.removeAt(now_choose);
    text_all_review.removeAt(now_choose);
    show_reload(ui); //重载显示
}

/*
 * 按钮：快捷操作
*/
/*一键复制*/
void MainWindow::on_pushButton_copy_clicked()
{
    QClipboard* clip = QApplication::clipboard();
    /*遍历*/
    joint.clear();
    for(int i=0;i!=text_all.length();i++)
    {
        joint+=text_all[i];
        if(i!=text_all.length()-1)joint+=",";//拼接
    }
    /*设置剪贴板*/
    clip->setText("{\"rawtext\":["+joint+"]}");
    joint.clear(); //清空
}
/*一键删除*/
void MainWindow::on_pushButton_clear_clicked()
{
    /*清空数据*/
    text_all.clear();
    text_all_type.clear();
    text_all_review.clear();
    show_reload(ui);
}
/*退格*/
void MainWindow::on_pushButton_back_clicked()
{
    if(!text_all.isEmpty()) //不是空的才能删除!
    {
        text_all.removeLast();
        text_all_type.removeLast();
        text_all_review.removeLast();
        show_reload(ui); //刷新显示
    }
}
/*刷新*/
void MainWindow::on_pushButton_reload_clicked()
{
    show_reload(ui);
}
/*
 * 按钮：主功能
*/
/*如果text被插入*/
void MainWindow::on_pushButton_text_clicked()
{
    /*对完整列表进行追加*/
    if(edit_type==1) //是否为插入模式
    {
        text_all.insert(now_choose,"{\"text\":\""+ui->lineEdit_text->text()+"\"}"); //格式化内容，增加完整
        text_all_review.insert(now_choose,ui->lineEdit_text->text()); //增加预览
        text_all_type.insert(now_choose,"文本"); //增加类型
    }
    else if(edit_type==2) //是否为修改模式
    {
        text_all.replace(now_choose,"{\"text\":\""+ui->lineEdit_text->text()+"\"}"); //格式化内容，增加完整
        text_all_review.replace(now_choose,ui->lineEdit_text->text()); //增加预览
        text_all_type.replace(now_choose,"文本"); //增加类型
    }
    else
    {
        text_all.append("{\"text\":\""+ui->lineEdit_text->text()+"\"}"); //格式化内容，增加完整
        text_all_review.append(ui->lineEdit_text->text()); //增加预览
        text_all_type.append("文本"); //增加类型
    }
    show_reload(ui); //刷新显示
}
/*选择器被插入*/
void MainWindow::on_pushButton_selector_clicked()
{
    /*对完整列表进行追加*/
    if(edit_type==1) //是否为插入模式
    {
        text_all.insert(now_choose,"{\"selector\":\""+ui->lineEdit_selector->text()+"\"}"); //格式化内容，增加完整
        text_all_review.insert(now_choose,"["+ui->lineEdit_selector->text()+"]"); //增加预览
        text_all_type.insert(now_choose,"选择器"); //增加类型
    }
    else if(edit_type==2) //是否为修改模式
    {
        text_all.replace(now_choose,"{\"selector\":\""+ui->lineEdit_selector->text()+"\"}"); //格式化内容，增加完整
        text_all_review.replace(now_choose,"["+ui->lineEdit_selector->text()+"]"); //增加预览
        text_all_type.replace(now_choose,"选择器"); //增加类型
    }
    else
    {
        text_all.append("{\"selector\":\""+ui->lineEdit_selector->text()+"\"}"); //格式化内容，增加完整
        text_all_review.append("["+ui->lineEdit_selector->text()+"]"); //增加预览
        text_all_type.append("选择器"); //增加类型
    }
    show_reload(ui);
}
/*计分板被插入*/
void MainWindow::on_pushButton_score_clicked()
{
    /*对完整列表进行追加*/
    if(edit_type==1) //是否为插入模式
    {
        text_all.insert(now_choose,"{\"score\":{\"name\":\""+ui->lineEdit_score_sc->text()+"\",\"objective\":\""+ui->lineEdit_score_name->text()+"\"}}"); //格式化内容，增加完整
        text_all_review.insert(now_choose,"["+ui->lineEdit_score_name->text()+"中的"+ui->lineEdit_score_sc->text()+"]"); //增加预览
        text_all_type.insert(now_choose,"计分板"); //增加类型
    }
    else if(edit_type==2) //是否为修改模式
    {
        text_all.replace(now_choose,"{\"score\":{\"name\":\""+ui->lineEdit_score_sc->text()+"\",\"objective\":\""+ui->lineEdit_score_name->text()+"\"}}"); //格式化内容，增加完整
        text_all_review.replace(now_choose,"["+ui->lineEdit_score_name->text()+"中的"+ui->lineEdit_score_sc->text()+"]"); //增加预览
        text_all_type.replace(now_choose,"计分板"); //增加类型
    }
    else
    {
        text_all.append("{\"score\":{\"name\":\""+ui->lineEdit_score_sc->text()+"\",\"objective\":\""+ui->lineEdit_score_name->text()+"\"}}"); //格式化内容，增加完整
        text_all_review.append("["+ui->lineEdit_score_name->text()+"中的"+ui->lineEdit_score_sc->text()+"]"); //增加预览
        text_all_type.append("计分板"); //增加类型
    }
    show_reload(ui);
}
/*翻译字符被插入*/
void MainWindow::on_pushButton_tr_3_clicked()
{
    /*定义变量*/
    joint.clear(); //进行拼接并显示
    QTreeWidgetItem* tree_contact;
    /*对完整列表进行追加*/
    if(edit_type==1) //是否为插入模式
    {
        text_all.insert(now_choose,"{\"translate\":\""+ui->lineEdit_tr->text()+"\",\"with\":["+ui->lineEdit_tr_2->text()+"]}"); //格式化内容，增加完整
        text_all_review.insert(now_choose,"["+ui->lineEdit_tr->text()+" <= "+ui->lineEdit_tr_2->text()+"]"); //增加预览
        text_all_type.insert(now_choose,"翻译识别符"); //增加类型
    }
    else if(edit_type==2) //是否为修改模式
    {
        text_all.replace(now_choose,"{\"translate\":\""+ui->lineEdit_tr->text()+"\",\"with\":[\""+ui->lineEdit_tr_2->text()+"\"]}"); //格式化内容，增加完整
        text_all_review.replace(now_choose,"["+ui->lineEdit_tr->text()+" <= "+ui->lineEdit_tr_2->text()+"]"); //增加预览
        text_all_type.replace(now_choose,"翻译识别符"); //增加类型
    }
    else
    {
        text_all.append("{\"translate\":\""+ui->lineEdit_tr->text()+"\",\"with\":[\""+ui->lineEdit_tr_2->text()+"\"]}"); //格式化内容，增加完整
        text_all_review.append("["+ui->lineEdit_tr->text()+" <= "+ui->lineEdit_tr_2->text()+"]"); //增加预览
        text_all_type.append("翻译识别符"); //增加类型
    }
    show_reload(ui);
}
/*转义被插入*/
void MainWindow::on_pushButton_n_clicked()
{
    if(edit_type==1) //是否为插入模式
    {
        text_all.insert(now_choose,"{\"translate\":\"\\n\"}");
        text_all_review.insert(now_choose,"\n");
        text_all_type.insert(now_choose,"回车");
    }
    else if(edit_type==2) //是否为修改模式
    {
        text_all.replace(now_choose,"{\"translate\":\"\\n\"}");
        text_all_review.replace(now_choose,"\n");
        text_all_type.replace(now_choose,"回车");
    }
    else
    {
        text_all.append("{\"translate\":\"\\n\"}");
        text_all_review.append("\n");
        text_all_type.append("回车");
    }
    QTreeWidgetItem* tree_contact;
    /*遍历*/
    ui->treeWidget_contact->clear();
    for(int i=0;i!=text_all.length();i++)
    {
        tree_contact = new QTreeWidgetItem(QStringList()<<text_all_review[i]<<text_all_type[i]<<text_all[i]);
        ui->treeWidget_contact->addTopLevelItem(tree_contact);
        joint+=text_all[i];
        if(i!=text_all.length()-1)joint+=",";//拼接
    }
    /*显示*/
    ui->plainTextEdit_main->setPlainText("{\"rawtext\":["+joint+"]}");//总览
    joint.clear(); //清空
    for(int i=0;i!=text_all.length();i++) joint+=(text_all_review[i]);//拼接预览
    ui->plainTextEdit_preview->setPlainText(joint);//预览
}

/*
 * 单选：模式切换
 * 0追加 1插入 2修改
*/
/*追加模式*/
void MainWindow::on_radioButton_last_clicked(bool checked)
{
    if(checked)
    {
        /*把按钮改为追加*/
        ui->pushButton_text->setText("追加");
        ui->pushButton_score->setText("追加");
        ui->pushButton_selector->setText("追加");
        ui->pushButton_tr_3->setText("追加");
        ui->pushButton_n->setText("回车(追加)");
        edit_type=0;
    }
}
/*插入模式*/
void MainWindow::on_radioButton_add_clicked(bool checked)
{
    if(checked)
    {
        /*把按钮改为插入*/
        ui->pushButton_text->setText("插入");
        ui->pushButton_score->setText("插入");
        ui->pushButton_selector->setText("插入");
        ui->pushButton_tr_3->setText("插入");
        ui->pushButton_n->setText("回车(插入)");
        edit_type=1;
    }
}
/*修改模式*/
void MainWindow::on_radioButton_edit_clicked(bool checked)
{
    if(checked)
    {
        /*把按钮改为修改*/
        ui->pushButton_text->setText("修改");
        ui->pushButton_score->setText("修改");
        ui->pushButton_selector->setText("修改");
        ui->pushButton_tr_3->setText("修改");
        ui->pushButton_n->setText("回车(修改)");
        edit_type=2;
    }
}
