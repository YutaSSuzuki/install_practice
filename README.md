# 本リポジトリの`README.md`以外のファイルははすべて[ChatGPT](https://openai.com/blog/chatgpt)を使用して作成しました。

## 概要

本リポジトリは、輪読会時に使用するコードの置き場です。それぞれのファイルの内容は以下の通りです。

* `compile/prime.cpp`: 素数判定をするC++のコード
* `compile/configure`: `prime.cpp`をコンパイルするためのスクリプト
* `interpreter/prime.py`: 素数判定をするPythonのコード

## 使用法

以下のコードを書くファイルが置かれているディレクトリで実行してください。


```bash
cd compile/
./configure
make
```

`./configure`でエラーが発生した場合は以下のコマンドを実行してください。

```bash
chmod +x configure
```