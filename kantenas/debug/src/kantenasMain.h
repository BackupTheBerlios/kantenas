/****************************************************************************
** Form interface generated from reading ui file '/home/capi_x/kantenas/src/kantenasMain.ui'
**
** Created: sáb may 22 15:35:32 2004
**      by: The User Interface Compiler ($Id: kantenasMain.h,v 1.1 2004/05/22 14:47:28 capi_x Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef KANTENASMAIN_H
#define KANTENASMAIN_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qmainwindow.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class QTabWidget;
class QWidget;
class QGroupBox;
class QLabel;
class QFrame;
class QLineEdit;
class QComboBox;
class QPushButton;
class QToolBox;

class kantenasMain : public QMainWindow
{
    Q_OBJECT

public:
    kantenasMain( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~kantenasMain();

    QTabWidget* tabWidget3;
    QWidget* tab;
    QGroupBox* groupBox3;
    QLabel* textLabel10;
    QLabel* textLabel11;
    QFrame* line9;
    QFrame* line10;
    QLabel* textLabel19;
    QLabel* textLabel18;
    QGroupBox* groupBox4;
    QLabel* textLabel14;
    QLabel* textLabel13;
    QLabel* textLabel12;
    QFrame* line12;
    QFrame* line13;
    QLabel* textLabel20;
    QLabel* textLabel21;
    QLabel* textLabel22;
    QFrame* line11;
    QGroupBox* groupBox2;
    QLabel* textLabel7;
    QLabel* textLabel8;
    QLabel* textLabel9;
    QFrame* line8;
    QFrame* line7;
    QFrame* line6;
    QLabel* textLabel16;
    QLabel* textLabel17;
    QLabel* textLabel15;
    QGroupBox* groupBox1;
    QLabel* textLabel4;
    QLabel* textLabel5;
    QLabel* textLabel6;
    QFrame* line5;
    QFrame* line4;
    QFrame* line3;
    QLabel* textLabel1;
    QLabel* textLabel2;
    QLabel* textLabel3;
    QLabel* textLabel23;
    QLineEdit* lineEditFrec;
    QComboBox* comboBox1;
    QPushButton* BtnCalcFrec;
    QLabel* textLabel24;
    QLineEdit* lineEditLong;
    QComboBox* comboBox2;
    QPushButton* BtnCalcLong;
    QLabel* textLabel1_2;
    QLineEdit* lineEditPeri;
    QComboBox* comboBoxPeri;
    QPushButton* BtnCalPeri;
    QWidget* TabPage;
    QFrame* frame3;
    QLabel* textLabel2_3;
    QLineEdit* linEdLngO2;
    QComboBox* cBoxLngO2;
    QPushButton* btnCalcLngO2;
    QGroupBox* groupBox8;
    QFrame* line12_2;
    QFrame* line13_2;
    QFrame* line16;
    QFrame* line19;
    QFrame* line18;
    QFrame* line17;
    QFrame* line23;
    QFrame* line21;
    QFrame* line20;
    QFrame* line14;
    QFrame* line15;
    QLabel* txtLblongDip1;
    QLabel* txtLblongDip2;
    QLabel* txtLblongDipTO;
    QWidget* tab_2;
    QToolBox* toolBox2;
    QWidget* page1;
    QLabel* textLabel1_3;
    QLineEdit* linEdP1;
    QPushButton* BtnCalcP1;
    QLabel* textLabel2_2;
    QLineEdit* linEdP2;
    QPushButton* BtnCalcP2;
    QLabel* textLabel3_2;
    QLineEdit* linEdGp;
    QPushButton* BtnCalcGp;
    QGroupBox* groupBox5;
    QLabel* textLabel5_2;
    QLabel* textLabel4_2;
    QWidget* page2;
    QLabel* textLabel1_3_2;
    QLineEdit* linEdU1;
    QPushButton* BtnCalcU1;
    QLabel* textLabel2_2_2;
    QLineEdit* linEdU2;
    QPushButton* BtnCalcU2;
    QLabel* textLabel3_2_2;
    QLineEdit* linEdGu;
    QPushButton* BtnCalcGu;
    QGroupBox* groupBox5_2;
    QLabel* textLabel5_2_2;
    QLabel* textLabel4_2_2;
    QWidget* page;
    QLabel* textLabel1_3_3;
    QLineEdit* linEdI1;
    QPushButton* BtnCalcI1;
    QLabel* textLabel2_2_3;
    QLineEdit* linEdI2;
    QPushButton* BtnCalcI2;
    QLabel* textLabel3_2_3;
    QLineEdit* linEdGi;
    QPushButton* BtnCalcGi;
    QGroupBox* groupBox5_3;
    QLabel* textLabel4_2_3;
    QLabel* textLabel5_2_3;
    QWidget* TabPage_2;
    QGroupBox* groupBox9;
    QLabel* textLabel1_4;
    QLineEdit* lEdAt;
    QPushButton* BtnAt;
    QLabel* textLabel2_4;
    QLineEdit* lEdSa;
    QPushButton* BtnSa;
    QLabel* textLabel3_3;
    QLineEdit* lEdGa;
    QPushButton* BtnGa;
    QLabel* textLabel4_3;
    QLineEdit* lEdSt;
    QPushButton* BtnSt;
    QGroupBox* groupBox10;
    QLabel* textLabel1_4_2;
    QLineEdit* lEdAt_2;
    QPushButton* BtnAt_2;
    QLabel* textLabel2_4_2;
    QLineEdit* lEdSa_2;
    QPushButton* BtnSa_2;
    QLabel* textLabel3_3_2;
    QLineEdit* lEdSe_2;
    QPushButton* BtnSe_2;
    QMenuBar *menubar;
    QPopupMenu *fileMenu;
    QPopupMenu *editMenu;
    QPopupMenu *helpMenu;
    QAction* fileNewAction;
    QAction* fileOpenAction;
    QAction* fileSaveAction;
    QAction* fileSaveAsAction;
    QAction* filePrintAction;
    QAction* fileExitAction;
    QAction* editUndoAction;
    QAction* editRedoAction;
    QAction* editCutAction;
    QAction* editCopyAction;
    QAction* editPasteAction;
    QAction* editFindAction;
    QAction* helpContentsAction;
    QAction* helpIndexAction;
    QAction* helpAboutAction;

public slots:
    virtual void fileNew();
    virtual void fileOpen();
    virtual void fileSave();
    virtual void fileSaveAs();
    virtual void filePrint();
    virtual void fileExit();
    virtual void editUndo();
    virtual void editRedo();
    virtual void editCut();
    virtual void editCopy();
    virtual void editPaste();
    virtual void editFind();
    virtual void helpIndex();
    virtual void helpContents();
    virtual void helpAbout();
    virtual void SlotCalcFrec();
    virtual void SlotCalcLong();
    virtual void SlotCalcPeri();
    virtual void SlotCalcP1();
    virtual void SlotCalcP2();
    virtual void SlotCalcGp();
    virtual void SlotCalcU1();
    virtual void SlotCalcU2();
    virtual void SlotCalcGu();
    virtual void SlotCalcI1();
    virtual void SlotCalcI2();
    virtual void SlotCalcGi();
    virtual void SlotCalcLongDip();
    virtual void SlotCalcAt();
    virtual void SlotCalcSa();
    virtual void SlotCalcGa();
    virtual void SlotCalcSt();
    virtual void SlotCalcAt_2();
    virtual void SlotCalcSa_2();
    virtual void SlotCalcSe_2();

protected:
    QVBoxLayout* layout58;
    QVBoxLayout* layout30;
    QHBoxLayout* layout7;
    QVBoxLayout* layout31;
    QHBoxLayout* layout8;
    QVBoxLayout* layout32;
    QHBoxLayout* layout9;
    QVBoxLayout* layout50;
    QHBoxLayout* layout49;
    QHBoxLayout* layout49_2;
    QVBoxLayout* layout48;
    QVBoxLayout* layout19;
    QHBoxLayout* layout10;
    QVBoxLayout* layout20;
    QHBoxLayout* layout11;
    QVBoxLayout* layout21;
    QHBoxLayout* layout12;
    QHBoxLayout* layout51;
    QVBoxLayout* layout50_2;
    QVBoxLayout* layout22;
    QHBoxLayout* layout13;
    QVBoxLayout* layout24;
    QHBoxLayout* layout14;
    QVBoxLayout* layout25;
    QHBoxLayout* layout15;
    QHBoxLayout* layout53;
    QVBoxLayout* layout52;
    QVBoxLayout* layout26;
    QHBoxLayout* layout16;
    QVBoxLayout* layout27;
    QHBoxLayout* layout17;
    QVBoxLayout* layout28;
    QHBoxLayout* layout18;
    QVBoxLayout* layout54;
    QVBoxLayout* layout34;
    QHBoxLayout* layout2;
    QVBoxLayout* layout35;
    QHBoxLayout* layout3;
    QVBoxLayout* layout36;
    QHBoxLayout* layout4;
    QVBoxLayout* layout37;
    QHBoxLayout* layout5;
    QVBoxLayout* layout50_3;
    QVBoxLayout* layout34_2;
    QHBoxLayout* layout2_2;
    QVBoxLayout* layout35_2;
    QHBoxLayout* layout3_2;
    QVBoxLayout* layout36_2;
    QHBoxLayout* layout4_2;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;
    QPixmap image4;
    QPixmap image5;
    QPixmap image6;
    QPixmap image7;
    QPixmap image8;
    QPixmap image9;

};

#endif // KANTENASMAIN_H
