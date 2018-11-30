
# Table of Contents

1.  [このページは](#org9148eb2)
2.  [勉強中の言語](#org789871a)
    1.  [C](#org6048cd2)
        1.  [新・明解C言語 入門編](#orga764534)
    2.  [Fortarn](#orgaf0dd54)
    3.  [Julia](#org17d740b)
    4.  [Lisp](#org1ab282a)
    5.  [Processing](#orgd5a9f98)
    6.  [Python](#org579513d)
    7.  [bash](#org41bb9d7)
3.  [Materials and methods](#org6ca67dc)


<a id="org9148eb2"></a>

# このページは

林 晃のプログラミング"言語"の勉強ノートです．

"プログラミング"の勉強ノートはこちら


<a id="org789871a"></a>

# 勉強中の言語


<a id="org6048cd2"></a>

## C

具体的に日々の仕事でどう役立つのか，具体的なアイデアは特にないが，
プログラムを書く者として，ある種の教養のために勉強中．


<a id="orga764534"></a>

### 新・明解C言語 入門編

1.  [勉強ノート](./C/meikai_nyuumon.md)

2.  勉強の参考にさせていただいているサイト

    <http://meikaicansewer.blogspot.com>


<a id="orgaf0dd54"></a>

## Fortarn

古の言語


<a id="org17d740b"></a>

## Julia

コンパイル言語だが，インタプリタのように使える．

この先，重い計算をイチから書くならJuliaがいいかも．


<a id="org1ab282a"></a>

## Lisp

Emacsを自力で拡張したいので勉強中．


<a id="orgd5a9f98"></a>

## Processing

グラフィック用途に強い言語．

[公式HP](http://www.generative-gestaltung.de/1/)


<a id="org579513d"></a>

## Python

自然言語処理に強いと聞いて，ミーハー心で飛びついたものの，
理論の勉強が追いつかず頓挫中．

Operpyxlを装備させればExcel駆逐運動に役立ってくれそうな気もするが，
Rと比較したときの具体的なパフォーマンスについては，検討が必要．


<a id="org41bb9d7"></a>

## bash

なんだかんだ必要．


<a id="org6ca67dc"></a>

# Materials and methods

本ページの作り方

-   EmacsのOrg-modeで作成
-   .mdファイル形式でエクスポート
-   GitHubへpush

    ;; 本当はここに
    (org-export-dispatch)
    ;; のように，md変換からGitHubへのプッシュまで，Emacsのコマンドを書いてしまいたいが
    ;; コマンド履歴にorg-export-dispatchが出てこないので困っている．

