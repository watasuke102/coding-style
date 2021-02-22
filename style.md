# コーディング規約
**基本的には`.clang-format`に従う形で**

## スペース・揃え
- `// comment` のように、//の後には半角スペースx1
- `#include "hoge.h"` マクロ文の後にスペース
- `if (hoge == 0)` ==前後にスペース
- `if (hoge)` `while (hoge)` 括弧前にスペース
- switchはこんなかんじ

    ```cpp
    // 全部のcaseでおなじようなことする場合
    switch (hoge) {
        case 0: DoZero(); result = 0; break;
        case 1: DoOne();  result = 1; break;
        case 2: DoTwo();  result = 2; break;
    }
    ```

    ```cpp
    // 基本
    switch (hoge) {
        case 0:
          DoZero();
          break;
        case 2:
          flag = true; // flagなんて名前の変数つくるな
          DoTwo();
          break;
    }
    ```

- `int a = 0;` =前後にスペース
- `int x = a*b + c%2`
- ポインタは `int* name;` 、 `int *name;` ではない
- インクリメントは基本的に前置 `++a;`
- インデントはスペースx2
- クラスの継承コロンpublic: やprivate: などはx1でインデント

    ```cpp
    class HogeClass {
     private:
      int button_push_count_ = 0;
    }
    // class HogeClass {
    // ○private:
    // ○○int button_push_count_ = 0;
    // }
    ```

- 括弧の後にはスペースひとつ、else if〜等は閉じ括弧と同じ行に

    ```cpp
    // コメントは位置を示すものであって、こういうコメントを書こうねって言うことではない
    if (hoge) { // hogeのとき
      DoSomething();
    } else if (fuga) { // fugaのとき
      DoSomethingTwo();
    } else { // hogeでもfugaでもないとき
      NothingToDo();
    }
    ```

- 同じような内容は縦に揃えられるようにしよう↓

    ```cpp
    QObject::connect(close_button,     &QPushButton::clicked, this, &MainPage::AskExit_);
    QObject::connect(next_page_button, &QPushButton::clicked, this, &MainPage::NextPage_);
    ```

- インクルード順は宣言元ヘッダ（classの宣言されているファイルなど）→C言語ライブラリヘッダ→他ライブラリヘッダ→自分のヘッダ


## 命名規則
- ファイル名： this_is_file_name.cpp
- 変数：number_val
- 関数：FunctionName()
- 名前空間：short（全部小文字）
- クラス：ClassName
    - メンバ変数：member_num_
- 定数：constexpr int PAGE_COUNT=10;


## 書き方
- structに関数を付けるくらいならclassにしよう
- できるだけconstつかおう
- 全ソースファイルの一番上に書いた人、ファイル名、ライセンスについてを書く（ライセンスヘッダ？）

    ```cpp
    // Project - Project description
    // file_name_here.cpp
    //
    // CopyRight (c) 2021 Watasuke
    // Email  : <watasuke102@gmail.com>
    // Twitter: @Watasuke102
    // This software is released under the (LICENSE NAME) License.
    ```
- インクルードガードはdefineで、<PROJECT>_<FILE>_H_の形にする
  pragma onceがもしかしたら動かないかもしれない
    ```
    #ifndef PROJECTNAME_MAIN_H_
    #define PROJECTNAME_MAIN_H_
    ...
    # endif //PROJECTNAME_MAIN_H_
    ```

## 更新履歴   
- 2/22 名前空間について追記、インクリメントは前置（[速いから](https://twitter.com/Watasuke102/status/1363686417105260544)）、クラスは名前空間使えば`_ClassName`じゃなくて`ClassName`でいいよね
- 1/25 一部、制定理由や詳細を記入
### 2020年の更新
- 12/4 括弧について、縦揃えにしないようにした  
＞Googleスタイルガイドの「The more code that fits on one screen, the easier it is to follow and understand the control flow of the program.」という原則に従うべきだと思ったため  
- 11/16 インクルードガードについて追記  
- 11/7 公開  