---
title: ハリポタファンによるハリポタファンのための闇の魔術に対する防衛術
tags: 新人プログラマ応援 watchdog メモリ保護 小川メソッド QiitaEngineerFesta2023
author: kaizen_nagoya
slide: false
---
闇の魔術に対する防衛術  Calendar 2021
https://qiita.com/advent-calendar/2021/yaminomajutu

9日目の記事です。４日目の　@nfujita55a さんの　iOS15メールプライバシー保護機能という闇への防衛術
https://qiita.com/nfujita55a/items/da6596221e734ae1df30

と、他にもおかきになられた記事を参考に書き始めます。

Harry Potter１巻で出てくる蛇がpython. Anacondaも蛇の一種。
https://harrypotter.fandom.com/wiki/Python

Harry Potter and the Philosopher's Stone (First mentioned)
https://www.jkrowling.com/book/harry-potter-philosophers-stone/

# 闇の魔術
## 電子計算機の闇
電子計算機を使っていると、さまざまな闇に遭遇します。

一つは、経済、電気、通信と専門を渡り歩いてきて、情報を専門に勉強したことがなく、情報の闇を照らす灯りを自分が持っていないということによります。

情報の専門家の方で、灯りをお持ちの方は、何を馬鹿なことを書いていると思われるかもしれません。

@kazuo_reve 「大学時代に学んだこと・経験したこと」を自分と比較
https://qiita.com/kaizen_nagoya/items/7ff0015e08118b5fd8d5

に少し書きました。電総研（現在の産総研）に研修生として在籍していた３ヶ月間は、東大の計数工学科を卒業された方はじめ、綺羅星のような方々と同席させていただいて勉強しました。


アメリカ留学、アメリカ就職の代わりに行ったこと。行なっていること。英語(33) 仮説・検証(111)
https://qiita.com/kaizen_nagoya/items/9f8e791bd6be3bed34bb

「アセンブラは得意だけどLISPは苦手」
と発言したら、

>LISPはアセンブラだ

との答えが。たしかに、LISPマシンのアセンブラはLISPなんですもの。

教えていただいたことは、LISPで書いたおBJという項書き換え系言語OBJについて

シンタックスチェッカを作って、ソフトウェア技術者協会で発表させていただきました。

OBJの試用経験

このシンタックスチェッカがまた闇なのです。

DEBUGモードだと動くのに、そうでないと暴走する。

最初の１月はSmall C Compilerを写経し。
次の１月は、Pascalで書かれていたコンパイラをC言語に移植して、
最後の月にOBJのシンタックスチェッカをC言語で書いた。

今なら、静的検査をすれば、暴走しない書き換えができたのにと残念。

###  キーボードの闇
LISPでは、メタキーというのを使う。

CTRLキーと対称な機能の場合がある。

IBM-PCだと、WSCキーに割り当てる場合があった。
これは違うだろと思った

岩波 情報科学辞典の感想。
https://bookmeter.com/books/1093081

>２冊新品で購入。書斎とプログラムを組む場所の２カ所。Wikiが発達する前は、ひたすらこの辞書に頼ってきた。記述の中には、Emacsの項のように、 メタキーについて、（普通はESCキーを使う）というように、Altキーを使う方が自然なのに、「普通は」という非科学的な記述もある。全項目の中で、違和感があったのは、この１カ所。Wikiに全項目が掲載されれば、日本の技術の向上に役立つと思う。長尾 真, 稲垣 康善, 辻井 潤一, 中田 育男, 石田 晴久, 田中 英彦, 所 真理雄, 米沢 明憲

LISPERに聞いた。ESCに割り当てるのは邪道だ。じゃ、岩波の辞書に書くなし。

メタキーがEscなのは不便なのでOptionに変えたい
https://qiita.com/ohakutsu/items/e15ba9d58ca64f935c69

いまだに規定値が変わっていない。キーボードの闇。

## メモリの闇
何が一番の闇かというと、CPUの特権モードのたぐい。

メモリ保護とか、時間保護とか言うんですけど、それを確かめるためのデバッグをしようとしてうまくできず、じゃ、デバッガのデバッグをしようとしたら、メモリの管理の仕組みの使い方がわかっていないと、何をしているのかさっぱりわからなくなってしまい、闇の魔術にはまってしまったような気になることです。

80286というCPUが出た時に、特権モードが４つくらいあって、どのモードが何のために使うのか、さっぱりわかりませんでした。後で知ったことは、PCとして使うための設計ではなく、ハードウェアを制御するための設計だったらしいような。

## ノイズの闇
メモリも、ノイズなどによって飛んだり、電源が不安定になってレジスタに読み込んだ時にずれていたり、何があるかわかりません。

CANという通信規約で、スタッフビットといって、２進数の同じ値が続くと、逆の値を入れるという仕組みは、すごくよく考えたもんだと感心したものです。

ああ、これも闇の魔術に対する防衛術の一つだと学びました。

## 暴走
暴走って、いろいろな原因で起こります。また、暴走と似た現象になることもいろいろな原因で起こります。

自分で書いたプログラムの精度の評価をするために、FORTRANの倍精度の計算した結果を、四倍精度でたしかめようとしたら、何時間も反応がなくなりました。
そこで、途中結果を時々出力するようにしました。
３日間かけて計算した結果を見たら、計算が終わるのに３年かかることが分かりました。

# 防衛術
## 電源断、再起動(reset)
電子計算機ですから、電源を切れば終わります。
これが最大の防衛術。

計算機を使わなければ、防衛する必要もない。
人手でできることは人手でやる。

ひどい場合は、計算機を使った方が、人手でやるより、時間がかかったり、お金がかかったりすることがあります。

電源を切る、計算機を使わない。これが最大の防衛術です。

本番環境でやらかしちゃった人 Advent Calendar 2021
https://qiita.com/advent-calendar/2021/yarakashi-production

「配電盤の電源を切る」
https://qiita.com/kaizen_nagoya/items/5fee2f3a4fb3cede675c

のはあまりお勧めしていません。

そちらの方にも、防衛術を少し書き足す予定です。

## 複数台利用
一台の計算機、一台の記録装置だけを使っていては、何が原因で動かなくなったかがわからないことがあります。

複数台の計算機、複数台の記録装置を使っていると、一台ではうごかなくなったり、暴走しても、もう一台では動いていることがあります。

防衛術の一つは複数台利用です。

この防衛術は、お金がかかるという難点があります。

## 番犬
watchdog
https://www.ablic.com/jp/semicon/products/automotive/automotive-watchdog-timer/intro/
https://docs.datadoghq.com/ja/watchdog/
https://jpdocs.us.sios.com/Linux/9.3/LK4L/TechDoc/Content/configuration/lifekeeper_io_fencing/watchdog.htm

## メモリ保護
メモリ保護は第不得意です。

intel 80286というCPUが登場した際に、
理解しようとして断念しました。

intel 80286 programmers reference manual
http://bitsavers.trailing-edge.com/components/intel/80286/210498-005_80286_and_80287_Programmers_Reference_Manual_1987.pdf

## ノイズ対策
専門家ではない。勉強はしてる。
https://bookmeter.com/books/2304299
https://bookmeter.com/books/1090424
https://bookmeter.com/books/8026849
https://bookmeter.com/books/5671718
https://bookmeter.com/books/130179

# 参考資料
新人(学生)を指導するよりも新人(学生)に指導してもらった方が効率的。仮説（139）
https://qiita.com/kaizen_nagoya/items/db993b1536055029f7c8

ハリーポッター「ダンブルドア軍団」に習うプログラマの組織化。仮説（19）
https://qiita.com/kaizen_nagoya/items/85122fb88a294b81b9e8

M.S.WindowsにPython3を導入する（７つの方法、7つの罠）2024年版
https://qiita.com/kaizen_nagoya/items/2b6e7643fb164c287f4e

### 文書履歴
ver. 0.01 初稿 20211205
ver. 0.02 投稿にあたり加筆。
ver. 0.03 OBJ シンタックスチェッカ　追記 20220101 午後６時
ver. 0.04 キーボードの闇。 追記　20220101 午後7時
ver. 0.05 ハリーポッター「ダンブルドア軍団」に習うプログラマの組織化URL追記 20220313
ver. 0.06 Python追記 20240104

### 最後までおよみいただきありがとうございました。
いいね　💚、フォローをお願いします。
####  Thank you very much for reading to the last sentence.
Please press the like icon 💚　and follow me for your happy life.
