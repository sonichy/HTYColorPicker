# Qt 海天鹰颜色拾取器
![alt](preview.png)  
Linux 平台基于 Qt 的颜色拾取程序。  
C键取色，点击 rgb 或 hex 颜色值复制颜色文本，鼠标拖动移动界面，Ctrl+Q 退出。  
已编译好的 HTYColorPicker 程序适用 64 位 Linux 系统Qt5.6 环境，双击运行，install.sh 生成快捷方式，其他版本请自行编译。
## V1.3
* 控件放入布局中，空间不够时会撑开，不会遮盖。
* Qt 5.6 SVG 颜色值不支持大写，颜色值改成小写。
## V1.2  
修复转换为16进制为个位时，没有补0的问题。
## V1.1
使用 QImage = QPixmap.toImage() 方法，取消保存到本地图片，消除延时，感谢 Rekols@deepin.org 。  

## 缺点
需要激活窗体才能使用。