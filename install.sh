appname=HTYColorPicker
s="[Desktop Entry]\nName=海天鹰颜色拾取器\nComment=海天鹰颜色拾取器\nExec=`pwd`/$appname\nIcon=`pwd`/$appname.png\nPath=`pwd`\nTerminal=false\nType=Application\nCategories=Image;"
echo $s > $appname.desktop
cp `pwd`/$appname.desktop ~/.local/share/applications/$appname.desktop