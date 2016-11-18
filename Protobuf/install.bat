setlocal
set GEN_PATH=%~dp0
set BUILDED_DIR=%GEN_PATH%out

set TARTGET_DIR=%GEN_PATH%..\pc\qq-catcher\Proto\src
rd /q /s "%TARTGET_DIR%\"
md "%TARTGET_DIR%"
xcopy /y /s /e "%BUILDED_DIR%\cpp" "%TARTGET_DIR%\"

set TARTGET_DIR=%GEN_PATH%..\android\QQConsensusMonitor\proto\src\main\java
rd /q /s "%TARTGET_DIR%\"
md "%TARTGET_DIR%"
xcopy /y /s /e "%BUILDED_DIR%\java" "%TARTGET_DIR%\"

set TARTGET_DIR=%GEN_PATH%..\android\qqhook\proto\src\main\java
rd /q /s "%TARTGET_DIR%\"
md "%TARTGET_DIR%"
xcopy /y /s /e "%BUILDED_DIR%\java" "%TARTGET_DIR%\"

endlocal
pause