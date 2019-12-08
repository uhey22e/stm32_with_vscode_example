# STM32CubeMX開発環境構築サンプル

STM32CubeMX(w/ Makefile)で生成したコードに以下の修正を加えたサンプルです。

* C++対応
* VSCode向け ビルド・フラッシュ書き込みTask作成
* Cortex-Debug(VSCode plugin)対応
* Semihosting対応

以下環境で動作確認済みです。

* macOS Mojave : 10.14.6
* STM32CubeMX : 5.4.0
* GNU Make : 3.8.1
* openocd : 0.10.0
* GNU Arm Embedded Toolchain : 9-2019-q4-major
* STM32Cube FW_L0 v1.11.2
