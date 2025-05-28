@echo off
title Git一键提交工具

echo 正在准备提交...
git add . 
git commit -m "提交于 %date% %time%"
git push

echo.
echo 提交完成！按任意键关闭窗口...
pause >nul