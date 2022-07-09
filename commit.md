# コミットメッセージ

git commit時のメッセージをどうするべきか

[Conventional Commits 1.0.0](https://www.conventionalcommits.org/ja/v1.0.0/) をベースに諸々変えている


## 形式
```
`type`: [`scope`>]`desc`

[`body`]
```

`[]` はoptionalで、\`\` には任意の文字列が入る

typeはcommitの方向性を示す（これだけいくつかの種類から選ばれる）、scopeは編集した箇所を具体的に示すもの、descは変更点の要約、bodyは本文（descの補足になっているときもある）

以下は一例：

- update: 機能追加とか
- fix: バグ修正とか
- refactor: コードのリファクタリング
- release: リリースコミット
- add: ファイルの追加
- remove: ファイルの削除

ちなみに、2022/07/09時点での[TAGether](https://github.com/watasuke102/TAGether)のコミットメッセージを見てみると以下のようになっている

```
$ git log --format=%s | sed 's/:.*//g' | sort | uniq -c | sort -r
    397 update
    139 fix
     32 release
     24 add
      4 remove
      3 refactor
      2 Revert "add
      1 rename
      1 initial commit
      1 Revert "fix
      1 Merge pull request #1 from watasuke102/remove-transition-module
      1 Merge branch 'main' into dev
      1 Fix
```

## 例

[TAGether](https://github.com/watasuke102/TAGether)を例に

### f455343

```
update: edit> Tab連打で問題文→答え→コメントの順にフォーカス出来るようにした
```

### 219492b

```
update: カテゴリ作成のプロセスを変更

これまで：createページに移動
いまから：モーダルで新しいカテゴリ名を受け取り、それをもとにカテゴリを作成してからeditページに移動
```

## 改善点など
- updateは長いので、featでも良いのでは
