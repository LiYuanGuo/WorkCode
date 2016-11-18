setlocal
set GEN_PATH=%~dp0
set PROTOBUF=protoc-3.0.0-beta-3-win32
set PATH=%GEN_PATH%%PROTOBUF%;%PATH%
rd /q /s "%GEN_PATH%out\"
md "%GEN_PATH%out"
md "%GEN_PATH%out\java"
md "%GEN_PATH%out\cpp"
protoc -I"%GEN_PATH%src" --java_out="%GEN_PATH%out\java" --cpp_out="%GEN_PATH%out\cpp" %GEN_PATH%src\*.proto
endlocal
pause