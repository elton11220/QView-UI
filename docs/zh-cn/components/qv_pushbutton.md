# QV_PushButton Class

本类继承于 QPushButton，增加了一些属性和方法。

|    继承     |                    头文件                     |
| :---------: | :-------------------------------------------: |
| QPushButton | `#include "./QViewUI/common/qv_pushbutton.h"` |

## 示例

<img src="./images/components/qv_pushbutton/img1.png" style="width:500px;"/>

```clike
QV_PushButton* btn1 = new QV_PushButton(this,QPoint(10,10),"按钮","default","default","default",false,false);
QV_PushButton* btn2 = new QV_PushButton(this,QPoint(10,10),"按钮","mini","primary","plain",false,false);
QV_PushButton* btn3 = new QV_PushButton(this,QPoint(10,10),"按钮","small","success","round",false,false);
QV_PushButton* btn4 = new QV_PushButton(this,QPoint(10,10),"按钮","large","warning","round plain",false,false);
QV_PushButton* btn5 = new QV_PushButton(this,QPoint(10,10),"按钮","default","danger","circle",false,false);
QV_PushButton* btn6 = new QV_PushButton(this,QPoint(10,10),"按钮",QSize(200,90),"info","circle plain",false,false);
```

## 属性

| 类型 |   属性名   | 默认值 |    可选值     | 描述             | 备注                                                            |
| :--: | :--------: | :----: | :-----------: | :--------------- | :-------------------------------------------------------------- |
| int  |    size    |   0    |    0 1 2 3    | 按钮的大小       | default 0 mini 1 small 2 medium 3 (custom 4 仅用于重载方法)     |
| int  | themeType  |   0    | 0 1 2 3 4 5 6 | 按钮颜色主题     | default 0 primary 1 success 2 warning 3 danger 4 info 5 dark 6  |
| int  |   shape    |   0    |  0 1 2 3 4 5  | 按钮形状         | default 0 plain 1 round 2 circle 3 round plain 4 circle plain 5 |
| bool | isLoading  | false  |  true false   | 按钮是否加载状态 |                                                                 |
| bool | isDisabled | false  |  true false   | 按钮是否禁用     |                                                                 |

## 成员函数

```clike
QV_PushButton(QWidget *parent = nullptr,QString content = "",QPoint initialLocation = QPoint(0,0))
QV_PushButton(QWidget *parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QString initialSize="default", QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false)
QV_PushButton(QWidget *parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QSize initialSize=QSize(100,40), QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false)
void applyProperty()
void setSize(const QString& value)
void setThemeType(const QString& value)
void setShape(const QString& value)
void setLoading(bool value)
void setDisabled(bool value)
int getSize() const
int getThemeType() const
int getShapeType() const
bool getLoading() const
bool getIsDisabled() const
```

### QV_PushButton(QWidget \*parent = nullptr,QString content = "",QPoint initialLocation = QPoint(0,0))

- 函数的构造函数（共有 `3` 个重载方法）
- 用于初始化按钮的基本属性

#### 参数描述

`QWidget parent` 用于指定组件的父对象

`QString content` 用于设置组件的文字内容

`QPoint initialLocation` 用于设置组件的位置

### QV_PushButton(QWidget \*parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QString initialSize="default", QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false)

- 函数的构造函数（共有 `3` 个重载方法）
- 用于初始化按钮的各项属性

#### 参数描述

`QString initialSize` 接收一个 QString 对象，设置组件的大小

?> **可选值**  
default mini small medium

`QString initialTheme` 接收一个 QString 对象，设置组件的主题

?> **可选值**  
请参考 `QV_Color`  
default primary success warning danger info dark

`QString initialShape` 接收一个 QString 对象，设置组件的形状

?> **可选值**  
default (默认圆角)  
plain (镂空)  
round (大圆角)  
circle (圆形)  
round plain/plain round (镂空大圆角)  
circle plain/plain (镂空圆形)  
circle (圆形)

`bool initialLoading` 设置是否显示加载样式

`bool initialDisabled` 设置是否禁用

### QV_PushButton(QWidget \*parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QSize initialSize=QSize(100,40), QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false)

- 函数的构造函数（共有`3`个重载方法）
- 使用 QSize 初始化按钮尺寸

#### 特殊参数描述

!> 与上一函数不同的是，此重载构造函数的 initialSize 参数类型变为了 QSize 类型，这将允许您创建一个自定义大小的按钮

`QSize initialSize` 接收一个 QSize 对象，设置组件的大小

### void applyProperty()

- 应用部分 set 方法产生的样式变化

### void setSize(const QString& value)

- 使用组件的自带样式设置按钮大小

?> **可选值**  
default mini small medium

### void setSize(const QSize& value)

- 使用一个 QSize 对象设置按钮的大小

### void setThemeType(const QString& value)

- 使用 QView 的自带样式设置按钮样式

?> **可选值**  
请参考 `QV_Color`
default primary success warning danger info dark

### void setShape(const QString& value)

- 使用 QView 的自带样式设置按钮形状

?> **可选值**  
default (默认圆角)  
plain (镂空)  
round (大圆角)  
circle (圆形)  
round plain/plain round (镂空大圆角)  
circle plain/plain (镂空圆形)  
circle (圆形)

### void setLoading(bool value)

### void setDisabled(bool value)

- 设置按钮的禁用状态
- 禁用 true / 不禁用 false

### int getSize() const

- 返回按钮的尺寸 ID
- default 0 mini 1 small 2 medium 3 custom 4

### int getThemeType() const

- 返回按钮的样式 ID
- default 0 mini 1 small 2 medium 3 custom 4

### int getShapeType() const

- 返回按钮的形状 ID
- default 0 plain 1 round 2 circle 3 round plain 4 circle plain 5

### bool getLoading() const

### bool getIsDisabled() const

- 返回按钮的禁用状态
- 禁用 true / 不禁用 false
