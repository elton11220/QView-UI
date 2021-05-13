# QV_PushButton Class

This class inherits from QPushButton and adds some properties and methods.

|   Inherit   |                    Header                     |
| :---------: | :-------------------------------------------: |
| QPushButton | `#include "./QViewUI/common/qv_pushbutton.h"` |

## Examples

<img src="./images/components/qv_pushbutton/img1.png" style="width:500px;"/>

```clike
QV_PushButton* btn1 = new QV_PushButton(this,QPoint(10,10),"Button","default","default","default",false,false);
QV_PushButton* btn2 = new QV_PushButton(this,QPoint(10,10),"Button","mini","primary","plain",false,false);
QV_PushButton* btn3 = new QV_PushButton(this,QPoint(10,10),"Button","small","success","round",false,false);
QV_PushButton* btn4 = new QV_PushButton(this,QPoint(10,10),"Button","large","warning","round plain",false,false);
QV_PushButton* btn5 = new QV_PushButton(this,QPoint(10,10),"Button","default","danger","circle",false,false);
QV_PushButton* btn6 = new QV_PushButton(this,QPoint(10,10),"Button",QSize(200,90),"info","circle plain",false,false);
```

## Properties

| Type |    Name    | Default Value | Optional value | Description                  | Comments                                                                                     |
| :--: | :--------: | :-----------: | :------------: | :--------------------------- | :------------------------------------------------------------------------------------------- |
| int  |    size    |       0       |    0 1 2 3     | Size of button               | default 0 mini 1 small 2 medium 3 (custom 4 is only designed for the overloaded constructor) |
| int  | themeType  |       0       | 0 1 2 3 4 5 6  | Theme of button              | default 0 primary 1 success 2 warning 3 danger 4 info 5 dark 6                               |
| int  |   shape    |       0       |  0 1 2 3 4 5   | Shape of button              | default 0 plain 1 round 2 circle 3 round plain 4 circle plain 5                              |
| bool | isLoading  |     false     |   true false   | Loading status of the button |                                                                                              |
| bool | isDisabled |     false     |   true false   | Disable of button            |                                                                                              |

## Public Functions

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
int getShape() const
bool getLoading() const
bool getIsDisabled() const
```

### QV_PushButton(QWidget \*parent = nullptr,QString content = "",QPoint initialLocation = QPoint(0,0))

- The constructor of the function (`3` overloaded methods)
- Basic properties for initializing buttons

#### Parameter description

`QWidget parent` Specifies the parent of the component

`QString content` Text content for setting components

`QPoint initialLocation` Used to set the location of the component

### QV_PushButton(QWidget \*parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QString initialSize="default", QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false)

- The constructor of the function (`3` overloaded methods)
- Used to initialize the properties of the button

#### Parameter description

`QString initialSize` Receives a qstring object to set the size of the component

?> **Optional value**  
default mini small medium

`QString initialTheme` Receive a qstring object to set the theme of the component

?> **Optional value**  
Refer to `QV_Color`  
default primary success warning danger info dark

`QString initialShape` Receive a qstring object to set the shape of the component

?> **Optional value**  
default  
plain  
round  
circle  
round plain/plain round  
circle plain/plain  
circle

`bool initialLoading` Sets whether the load style is displayed

`bool initialDisabled` Set disable

### QV_PushButton(QWidget \*parent = nullptr,QPoint initialLocation = QPoint(0,0),QString content = "",QSize initialSize=QSize(100,40), QString initialTheme="default", QString initialShape="default", bool initialLoading=false, bool initialDisabled=false)

- The constructor of the function (`3` overloaded methods)
- Use a QSize object to initialize the button

#### Description of special parameters

!> Unlike the previous function, the initializize parameter type of this overloaded constructor changes to qsize, which allows you to create a custom sized button

`QSize initialSize` Receives a QSize object to set the size of the component

### void applyProperty()

- Apply the style changes generated by the partial set method

### void setSize(const QString& value)

- Use the style of the component to set the button size

?> **Optional v alue**  
default mini small medium

### void setSize(const QSize& value)

- Use a QSize object to set the size of the button

### void setThemeType(const QString& value)

- Use the built-in style of QView to set the button style

?> **Optional value**  
Refer to `QV_Color`  
default primary success warning danger info dark

### void setShape(const QString& value)

- Use the built-in style of QView to set the button shape

?> **Optional value**  
default  
plain  
round  
circle  
round plain/plain round  
circle plain/plain  
circle

### void setLoading(bool value)

### void setDisabled(bool value)

-Set the disabled status of the button  
-Disabled true / Enabled false

### int getSize() const

- Return the size ID of the button
- default 0 mini 1 small 2 medium 3 custom 4

### int getThemeType() const

- Returns the style ID of the button
- default 0 primary 1 success 2 warning 3 danger 4 info 5 dark 6

### int getShapeType() const

- Returns the style ID of the button
- default 0 plain 1 round 2 circle 3 round plain 4 circle plain 5

### bool getLoading() const

### bool getIsDisabled() const

- Return the disabled status of the button
- Disabled true / Enabled false
