# コーディング規約

**基本的には`.clang-format`に従う形で**

## スペース・揃え

- インクリメントは基本的に前置 `++a;`
- if文は出来る限り括弧を付ける
  - ただしreturnはいらない
  - returnに3行かけたくない

  ```cpp
  if (flag) {
    flag = f();
  } else {
    flag2 = f();
  }

  if (flag) return;

  // 駄目
  if (flag2) f();
  ```

- だいたい同じような内容は縦に揃えられるようにしよう↓

    ```cpp
    // 必要に応じてclang-formatをオフにする
    // clang-format off
    QObject::connect(close_button,     &QPushButton::clicked, this, &MainPage::AskExit_);
    QObject::connect(next_page_button, &QPushButton::clicked, this, &MainPage::NextPage_);
    // clang-format on
    ```

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

- インクルードガードはdefineで、`<PROJECT>_<FILE>_H_`の形にする
  - pragma onceがもしかしたら動かないかもしれない（だいたい使えるとは思うけど、まあ念の為くらい）

  ```cpp
  #ifndef PROJECTNAME_MAIN_H_
  #define PROJECTNAME_MAIN_H_
  ...
  # endif //PROJECTNAME_MAIN_H_
  ```

## 更新履歴

- 2022/03/27 clang-formatに従えばいいので色々削除、その他最近のコードに合わせて追記など
- 2021/02/22 名前空間について追記、インクリメントは前置（[速いから](https://twitter.com/Watasuke102/status/1363686417105260544)）、クラスは名前空間使えば`_ClassName`じゃなくて`ClassName`でいいよね
- 2021/01/25 一部、制定理由や詳細を記入
- 2020/12/04 括弧について、縦揃えにしないようにした  
＞ Googleスタイルガイドの「The more code that fits on one screen, the easier it is to follow and understand the control flow of the program.」という原則に従うべきだと思ったため  
- 2021/11/16 インクルードガードについて追記  
- 2021/11/07 公開
