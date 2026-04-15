C言語を習得する３つの方法
https://qiita.com/kaizen_nagoya/items/84cab0888c193bba429b

C言語(C++)が必要な人と必要ない人
https://qiita.com/kaizen_nagoya/items/2afe9e846b55b24cb6f1

# pp1.

## Vモデル
Water Fallを折り返しただけ。上下の単位が不明。

## 要求
２者間取引のお金の計算用の仕組み。
物理現象では、条件という言葉を使う。

## 設計
図で書くか、コードで書くかは任意。
図からコード、コードから図を自動生成できればよい。
設計から仕様を自動生成し、仕様から要求を自動生成すればよい。

## UML図　
制御、通信、OSでは
状態遷移図・状態遷移表、　時系列図、刻時図

# PPT2
## N
状態遷移図・状態遷移表、　時系列図、刻時図
## T
時系列図、刻時図
## C
状態遷移図・状態遷移表、　時系列図、刻時図
## R
状態遷移図・状態遷移表、　時系列図、刻時図
## 機能要件(function)
Cの関数として実現するもの
## 非機能要件
時間のソースコードでは、CPU依存部分を割り込み処理などで書かないと実現できない。


# ppp3
４つのモデルは、それぞれ自動生成。
専用ツール、生成AIを使うかは選択。

motor control
JMARG モータ設計
MATLAB Model in the loop simulator
Simulink Software int the loop simulatr
FPGA: Verilog HDL Hardware in the loop simulator
DIRS：Driver in the loop simulator
テストコース、公道試験
