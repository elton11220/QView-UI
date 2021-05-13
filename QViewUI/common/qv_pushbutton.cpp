#include "qv_pushbutton.h"

QV_PushButton::QV_PushButton(QWidget *parent,QString content,QPoint initialLocation)
    :QPushButton(parent)
{
    QFont font;
#if defined(Q_OS_WIN32)
    font.setFamily(q_font_windows);
    font.setBold(true);
    this->setFont(font);
#elif defined(Q_OS_MACOS)
    font.setFamily(q_font_macos);
    font.setBold(true);
    this->setFont(font);
#endif
    this->move(initialLocation);
    this->setSize("default");
    this->setShape("default");
    this->setThemeType("default");
    this->setLoading(false);
    this->setDisabled(false);
    this->setText(content);
    applyProperty();
}

QV_PushButton::QV_PushButton(QWidget *parent,QPoint initialLocation,QString content,QString initialSize, QString initialTheme, QString initialShape, bool initialLoading, bool initialDisabled)
    :QPushButton(parent)
{
    QFont font;
#if defined(Q_OS_WIN32)
    font.setFamily(q_font_windows);
    font.setBold(true);
    this->setFont(font);
#elif defined(Q_OS_MACOS)
    font.setFamily(q_font_macos);
    font.setBold(true);
    this->setFont(font);
#endif
    this->move(initialLocation);
    this->setSize(initialSize);
    this->setShape(initialShape);
    this->setThemeType(initialTheme);
    this->setLoading(initialLoading);
    this->setDisabled(initialDisabled);
    this->setText(content);
    applyProperty();
}

QV_PushButton::QV_PushButton(QWidget *parent,QPoint initialLocation,QString content,QSize initialSize, QString initialTheme, QString initialShape, bool initialLoading, bool initialDisabled)
    :QPushButton(parent)
{
    QFont font;
#if defined(Q_OS_WIN32)
    font.setFamily(q_font_windows);
    font.setBold(true);
    this->setFont(font);
#elif defined(Q_OS_MACOS)
    font.setFamily(q_font_macos);
    font.setBold(true);
    this->setFont(font);
#endif
    this->move(initialLocation);
    this->setSize(initialSize);
    this->setShape(initialShape);
    this->setThemeType(initialTheme);
    this->setLoading(initialLoading);
    this->setDisabled(initialDisabled);
    this->setText(content);
    applyProperty();
}

void QV_PushButton::applyProperty()
{
    this->setStyleSheet(strShape + strTheme + strDisableStyle);
}

void QV_PushButton::setSize(const QString& value)
{
    if(value == "default"){
        this->resize(100,40);
        this->size = 0;
    }else if(value == "mini"){
        this->resize(80,28);
        this->size = 1;
    }else if(value =="small"){
        this->resize(80,32);
        this->size = 2;
    }else if(value == "medium"){
        this->resize(98,36);
        this->size = 3;
    }else{
        this->resize(100,40);
        this->size = 0;
    }
}
void QV_PushButton::setSize(const QSize& value)
{
    this->resize(value);
    this->size = 4;
}

void QV_PushButton::setThemeType(const QString& value)
{
    if(value == "default"){
        if(this->shape == 1 || this->shape == 4 || this->shape == 5){
            strTheme = "QPushButton{background-color:#FFF;border:1px solid "+q_bcolor_border1+";color:"+q_fcolor_text2+";} "
                       "QPushButton:hover{background-color:#FFF;border:1px solid "+q_type_primary+";color:"+q_type_primary+";} "
                       "QPushButton:pressed{background-color:#FFF;border:1px solid "+q_type_primary_active+";color:"+q_type_primary_active+";} ";
        }else{
            strTheme = "QPushButton{background-color:#FFF;border:1px solid "+q_bcolor_border1+";color:"+q_fcolor_text2+";} "
                       "QPushButton:hover{background-color:"+q_type_primary_plain_bg+";border:1px solid #c6e2ff;color:"+q_type_primary+";} "
                       "QPushButton:pressed{border:1px solid "+q_type_primary_active+";color:"+q_type_primary_active+";} ";
        }
        this->themeType = 0;
    }else if(value == "primary"){
        if(this->shape == 1 || this->shape == 4 || this->shape == 5){
            strTheme = "QPushButton{background-color:"+q_type_primary_plain_bg+";border:1px solid "+q_type_primary_plain_border+";color:"+q_type_primary+";} "
                       "QPushButton:hover{background-color:"+q_type_primary+";border:1px solid "+q_type_primary+";color:#FFF;} "
                       "QPushButton:pressed{background-color:"+q_type_primary_active+";border:1px solid "+q_type_primary_active+";color:#FFF;} ";
        }else{
            strTheme = "QPushButton{background-color:"+q_type_primary+";border:1px solid "+q_type_primary+";color:#FFF;} "
                       "QPushButton:hover{background-color:"+q_type_primary_hover+";border:1px solid "+q_type_primary_hover+";} "
                       "QPushButton:pressed{background-color:"+q_type_primary_active+";border:1px solid "+q_type_primary_active+";color:#FFF;} ";
        }
        this->themeType = 1;
    }else if(value == "success"){
        if(this->shape == 1 || this->shape == 4 || this->shape == 5){
            strTheme = "QPushButton{background-color:"+q_type_success_plain_bg+";border:1px solid "+q_type_success_plain_border+";color:"+q_type_success+";} "
                       "QPushButton:hover{background-color:"+q_type_success+";border:1px solid "+q_type_success+";color:#FFF;} "
                       "QPushButton:pressed{background-color:"+q_type_success_active+";border:1px solid "+q_type_success_active+";color:#FFF;} ";
        }else{
            strTheme = "QPushButton{background-color:"+q_type_success+";border:1px solid "+q_type_success+";color:#FFF;} "
                       "QPushButton:hover{background-color:"+q_type_success_hover+";border:1px solid "+q_type_success_hover+";} "
                       "QPushButton:pressed{background-color:"+q_type_success_active+";border:1px solid "+q_type_success_active+";color:#FFF;} ";
        }
        this->themeType = 2;
    }else if(value == "warning"){
        if(this->shape == 1 || this->shape == 4 || this->shape == 5){
            strTheme = "QPushButton{background-color:"+q_type_warning_plain_bg+";border:1px solid "+q_type_warning_plain_border+";color:"+q_type_warning+";} "
                       "QPushButton:hover{background-color:"+q_type_warning+";border:1px solid "+q_type_warning+";color:#FFF;} "
                       "QPushButton:pressed{background-color:"+q_type_warning_active+";border:1px solid "+q_type_warning_active+";color:#FFF;} ";
        }else{
            strTheme = "QPushButton{background-color:"+q_type_warning+";border:1px solid "+q_type_warning+";color:#FFF;} "
                       "QPushButton:hover{background-color:"+q_type_warning_hover+";border:1px solid "+q_type_warning_hover+";} "
                       "QPushButton:pressed{background-color:"+q_type_warning_active+";border:1px solid "+q_type_warning_active+";color:#FFF;} ";
        }
        this->themeType = 3;
    }else if(value == "danger"){
        if(this->shape == 1 || this->shape == 4 || this->shape == 5){
            strTheme = "QPushButton{background-color:"+q_type_danger_plain_bg+";border:1px solid "+q_type_danger_plain_border+";color:"+q_type_danger+";} "
                       "QPushButton:hover{background-color:"+q_type_danger+";border:1px solid "+q_type_danger+";color:#FFF;} "
                       "QPushButton:pressed{background-color:"+q_type_danger_active+";border:1px solid "+q_type_danger_active+";color:#FFF;} ";
        }else{
            strTheme = "QPushButton{background-color:"+q_type_danger+";border:1px solid "+q_type_danger+";color:#FFF;} "
                       "QPushButton:hover{background-color:"+q_type_danger_hover+";border:1px solid "+q_type_danger_hover+";} "
                       "QPushButton:pressed{background-color:"+q_type_danger_active+";border:1px solid "+q_type_danger_active+";color:#FFF;} ";
        }
        this->themeType = 4;
    }else if(value == "info"){
        if(this->shape == 1 || this->shape == 4 || this->shape == 5){
            strTheme = "QPushButton{background-color:"+q_type_info_plain_bg+";border:1px solid "+q_type_info_plain_border+";color:"+q_type_info+";} "
                       "QPushButton:hover{background-color:"+q_type_info+";border:1px solid "+q_type_info+";color:#FFF;} "
                       "QPushButton:pressed{background-color:"+q_type_info_active+";border:1px solid "+q_type_info_active+";color:#FFF;} ";
        }else{
            strTheme = "QPushButton{background-color:"+q_type_info+";border:1px solid "+q_type_info+";color:#FFF;} "
                       "QPushButton:hover{background-color:"+q_type_info_hover+";border:1px solid "+q_type_info_hover+";} "
                       "QPushButton:pressed{background-color:"+q_type_info_active+";border:1px solid "+q_type_info_active+";color:#FFF;} ";
        }
        this->themeType = 5;
    }else if(value == "dark"){
        if(this->shape == 1 || this->shape == 4 || this->shape == 5){
            strTheme = "QPushButton{background-color:"+q_type_dark_plain_bg+";border:1px solid "+q_type_dark_plain_border+";color:"+q_type_dark+";} "
                       "QPushButton:hover{background-color:"+q_type_dark+";border:1px solid "+q_type_dark+";color:#FFF;} "
                       "QPushButton:pressed{background-color:"+q_type_dark_active+";border:1px solid "+q_type_dark_active+";color:#FFF;} ";
        }else{
            strTheme = "QPushButton{background-color:"+q_type_dark+";border:1px solid "+q_type_dark+";color:#FFF;} "
                       "QPushButton:hover{background-color:"+q_type_dark_hover+";border:1px solid "+q_type_dark_hover+";} "
                       "QPushButton:pressed{background-color:"+q_type_dark_active+";border:1px solid "+q_type_dark_active+";color:#FFF;} ";
        }
        this->themeType = 5;
    }
    applyProperty();
}

void QV_PushButton::setShape(const QString& value)
{
    if(value == "default"){
        strShape = "QPushButton{border-radius:4px;} ";
        this->shape = 0;
    }else if(value == "plain"){
        strShape = "QPushButton{border-radius:4px;} ";
        this->shape = 1;
    }else if(value == "round" || value == "round plain" || value == "plain round"){
        int tempRadius = this->height()/2;
        strShape = "QPushButton{border-radius:"+QString::number(tempRadius)+"px;} ";
        if(value == "round")
            this->shape = 2;
        else if(value == "round plain" || value == "plain round")
            this->shape = 4;
    }else if(value == "circle" || value == "circle plain" || value == "plain circle"){
        int tempRadius = this->height()/2;
        strShape = "QPushButton{border-radius:"+QString::number(tempRadius)+"px;} ";
        this->resize(this->height(),this->height());
        if(value == "circle")
            this->shape = 3;
        else if(value == "circle plain" || value == "plain circle")
            this->shape = 5;
    }else{
        strShape = "QPushButton{border-radius:4px;} ";
        this->shape = 0;
    }
    applyProperty();
}

void QV_PushButton::setLoading(bool value)
{
    this->isLoading = value;
}

void QV_PushButton::setDisabled(bool value)
{
    this->isDisabled = value;
    this->setEnabled(!value);
    if(value){
        if(this->themeType == 0){
            if(this->shape == 1 || this->shape == 4 || this->shape == 5){
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:#FFF;border:1px solid "+q_bcolor_border3+";color:"+q_fcolor_text4+";} ";
            }else{
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:#FFF;border:1px solid "+q_bcolor_border3+";color:"+q_fcolor_text4+";} ";
            }
        }else if(this->themeType == 1){
            if(this->shape == 1 || this->shape == 4 || this->shape == 5){
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_primary_plain_bg+";border:1px solid "+q_type_primary_plain_disabled+";color:#8cc5ff;} ";
            }else{
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_primary_disabled+";border:1px solid "+q_type_primary_disabled+";color:#FFF;} ";
            }
        }else if(this->themeType == 2){
            if(this->shape == 1 || this->shape == 4 || this->shape == 5){
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_success_plain_bg+";border:1px solid "+q_type_success_plain_disabled+";color:#a4da89;} ";
            }else{
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_success_disabled+";border:1px solid "+q_type_success_disabled+";color:#FFF;} ";
            }
        }else if(this->themeType == 3){
            if(this->shape == 1 || this->shape == 4 || this->shape == 5){
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_warning_plain_bg+";border:1px solid "+q_type_warning_plain_disabled+";color:#f0c78a;} ";
            }else{
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_warning_disabled+";border:1px solid "+q_type_warning_disabled+";color:#FFF;} ";
            }
        }else if(this->themeType == 4){
            if(this->shape == 1 || this->shape == 4 || this->shape == 5){
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_danger_plain_bg+";border:1px solid "+q_type_danger_plain_disabled+";color:#f9a7a7;} ";
            }else{
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_danger_disabled+";border:1px solid "+q_type_danger_disabled+";color:#FFF;} ";
            }
        }else if(this->themeType == 5){
            if(this->shape == 1 || this->shape == 4 || this->shape == 5){
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_info_plain_bg+";border:1px solid "+q_type_info_plain_disabled+";color:#bcbec2;} ";
            }else{
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_info_disabled+";border:1px solid "+q_type_info_disabled+";color:#FFF;} ";
            }
        }else if(this->themeType == 6){
            if(this->shape == 1 || this->shape == 4 || this->shape == 5){
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_dark_plain_bg+";border:1px solid "+q_type_dark_plain_disabled+";color:#808080;} ";
            }else{
                strDisableStyle = "QPushButton,QPushButton:hover,QPushButton:pressed{background-color:"+q_type_dark_disabled+";border:1px solid "+q_type_dark_disabled+";color:#FFF;} ";
            }
        }
    }else
        strDisableStyle = "";
    applyProperty();
}
