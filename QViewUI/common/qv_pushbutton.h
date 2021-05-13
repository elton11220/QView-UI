#ifndef QV_PUSHBUTTON_H
#define QV_PUSHBUTTON_H

#include <QPushButton>
#include "./../style/QView-UI.h"

class QV_PushButton : public QPushButton
{
    Q_OBJECT
public:
    QV_PushButton(QWidget *parent = nullptr,QString content = "",QPoint initialLocation = QPoint(0,0));
    QV_PushButton(QWidget *parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QString initialSize="default", QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false);
    QV_PushButton(QWidget *parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QSize initialSize=QSize(100,40), QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false);
    void applyProperty();
    void setSize(const QString& value); //property 0
    void setSize(const QSize& value); //overloaded method
    void setThemeType(const QString& value); //property 1
    void setShape(const QString& value); //property 2
    void setLoading(bool value); //property 3
    void setDisabled(bool value); //property 4
    int getSize() const{return this->size;}
    int getThemeType() const{return this->themeType;}
    int getShapeType() const{return this->shape;}
    bool getLoading() const{return this->isLoading;}
    bool getIsDisabled() const{return this->isDisabled;}
private:
    //
    int size = 0; //default 0 mini 1 small 2 medium 3 (custom 4 - setSize overloaded method)
    int themeType = 0; //default 0 primary 1 success 2 warning 3 danger 4 info 5 dark 6
    int shape = 0; //default 0 plain 1 round 2 circle 3 round plain/plain round 4 circle plain/plain circle 5
    bool isLoading = false;
    bool isDisabled = false;
    //
    QString strTheme;
    QString strShape;
    QString strDisableStyle;
};

#endif // QV_PUSHBUTTON_H
