# Qt 海天鹰颜色拾取器
![alt](preview.png)  
Linux 平台基于 Qt 的颜色拾取程序。  
C键取色，点击RGB或Hex颜色值复制颜色文本，鼠标拖动移动界面，Ctrl+Q退出。  
已编译好的 HTYColorPicker 程序适用64位Linux系统Qt5环境，双击运行，其他版本请自行编译。  
缺点：  
1.需要激活窗体才能使用热键；  
2.暂时无法把QPixmap截图直接转换成QImage取色，先把QPixmap保存到本地，再QImage载入图片文件取色。
