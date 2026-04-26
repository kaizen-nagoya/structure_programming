---
title: @kazuo_reve 「大学時代に学んだこと・経験したこと」を自分と比較
tags: 新人プログラマ応援 名古屋工業大学 DoCAP 小川メソッド
author: kaizen_nagoya
slide: false
---
@kazuo_reve  大学時代に学んだこと・経験したこと
https://qiita.com/kazuo_reve/items/e9443e51b6ccd9d52db8

は、名古屋工業大学  Calendar 2021 12月3日の記事です。

この内容を自分と比較することによって、学科の違いとか、時代の違いとか、それ以外の違いが何に基づいているかなどがあぶりだせないか記録します。

以下、引用部分は @kazuo_reve さんの記述です。

# はじめに
>私は、名古屋工業大学 工学部 知能情報システム学科 出身です。
1996年に入学しています。
大学時代に学んだこと・経験したことを振り返り、考察を述べてみたいと思います。

私は、名古屋工業大学 工学部 電気工学科 出身です。
1986年に卒業しています。
大学時代に学んだこと・経験したことを振り返り、考察を述べてみたいと思います。

# 大学時代の環境
>UNIXのPC
ブラウザはNetscape
OHPを使って発表

PC-98011(intel 8086:16bit CPU) OS はMS-DOS 2.11
ネット接続はモデム(serial 2400bps: Modulation demodulation equipment)、文字端末(character terminal)
OHPを使って発表

# 大学時代に学んだプログラミング言語
>大学時代に以下の言語でプログラムを書いた（写経した）記憶がある。
最初に学んだ言語はPascalだったと記憶している。
Pascal
Lisp
Prolog
Java
C

FORTRAN

名古屋工業大学に入る前から仕事でプログラミングはしており、
アセンブラ(Z80,i086)
BASIC(Z80, 8086)
COBOL
FORTRAN
で書いていた。

>社会人になってから書いたことがある言語と比較をしてみる。
大学時代に使ったことがある言語は、社会人になってからほぼ使っていいないことがわかる。

@kazuo_reve 
|言語|大学|社会人（業務）|社会人（改善・趣味）|
|:----|:----|:----|:----|
|Pascal|〇| | |
|Lisp|〇| | |
|Prolog|〇| | |
|Java|〇| | |
|C|〇|〇| |
|C++| |〇| |
|C#| | |〇|
|VBA| | |〇|
|Perl| | |〇|
|R| | |〇|
|Python| | |〇|

@kaizen_nagoya
|言語|社会人（名工大入る前）|名工大|電総研研修生|社会人（電総研研修生後）|
|:--|:--|:--|:--|:--|
|アセンブラ|〇|○||
|BASIC|〇|〇||
|COBOL|〇|||
|FORTRAN|〇|〇|||
|C|||〇|○
|Pascal|| |〇 |
|Lisp|| |〇 |
|OBJ|||〇||
|Prolog|||〇|
|C++|||| 〇|
|Java||| |〇 |
|C#| | ||〇|
|R| | ||〇|
|Python|| | |〇|

大学時代は新しくプログラムは勉強していない。

松井信行　教授が、大学時代に電磁気学を勉強しないと、一生電磁気学を勉強する機会はないと言われた。

当時、電磁気学の講義を担当していた　教授の研究室で卒業研究をした。

## 電総研言語システム研究室研修生
中小企業大学校の６ヶ月研修のうち、後ろの３ヶ月は電総研言語研システム究室の研修生として３ヶ月滞在しt時に、LISPで書かれたOBJの論文を渡され、コメントをするように言われた。そこで、まず、Pascalで書かれたコンパイラをC言語に変換しながらCコンパイラの作り方を学んだ。次にCで書かれたCコンパイラの改良を行い、最後の一月でOBJのシンタックスチェッカをC言語で書いて、言語についてのコメントをまとめ、ソフトウェア技術者協会で発表した。

産総研の研修生の３ヶ月は、アメリカ留学の１年分くらいの勉強をしたかもしれない。
以前訪問したカリフォルニア工科大学バークレー校と、スタンフォード大学の学生の教科書の一覧を入手したが、それらのうち、産総研の図書館に所蔵していた本はこの機会に読んだような気がする。

かなり後に、カーネギーメロン大学を訪問した際に、学生の教科書の一覧は、かなりの資料がもうWEBに上がるようになっていて、主にWebで勉強した。

アメリカ留学、アメリカ就職の代わりに行ったこと。行なっていること。英語(33) 仮説(111)
https://qiita.com/kaizen_nagoya/items/9f8e791bd6be3bed34bb

前の３ヶ月は、デザイナ指導者養成研修として３ヶ月、デザイナを指導するのに必要な技術、感覚、訓練を受けた。色に関する研修もいくつかあったが、必ずしも納得しておらず、自分の経験の方が、教育より先に行っていることが確認できたかもしれない。

プログラマが知っているとよい色使い(JIS安全色)
https://qiita.com/kaizen_nagoya/items/cb7eb3199b0b98904a35

# 大学時代の成果
>大学時代の唯一の成果は以下の論文。
ただし、論文も論文のために書いたコードも手元にはない。
最近、久々に見たいなと思ったが見れないという状態である。
当時は、gitなどのシステムに成果をアップするような文化はなかったと思う。
https://jglobal.jst.go.jp/detail?JGLOBAL_ID=200902180463560480

大学時代の成果は、卒業研究はFORTRAN、研究室のシステムの改良はBASIC、デンソーとの共同研究のモータの制御実験はアセンブラ（卒業の翌年）

連立微分方程式のPade近似解法　Fortran手による最適化とコンパイラの最適化、誤差の評価
https://qiita.com/kaizen_nagoya/items/c55d29f0d7e9ebd07a31

連立微分方程式のPade近似と、Cコンパイラとモデルに基づく設計
https://qiita.com/kaizen_nagoya/items/5e50b3c9c0004fe92bd9

通信エミュレータの移植
https://qiita.com/kaizen_nagoya/items/ce505bbea4229b83e93b

# 大学時代の共通科目
>大学時代の共通科目があったと記憶している。
* 体育実技  
* 心理学
* 線形代数
* 微分積分
* 英語
* 第2外国語（私の場合は、ドイツ語）

名工大は学士入学で３年に編入している。最初の大学でも第二外国語はなかった。
編入にあたっては、２年までの共通科目は、履修済みの科目で読み替え、不足する部分は、工業数学の補修に参加することを条件に認定してもらっている。名工大でも第二外国語履修は条件にはならなかった。

ちなみに、同時に入学した学生で、一番、履修済み該当科目が少なく、一番たくさん認定してもらった人だけが既定年数で卒業したような気がする。

名工大の学生時代に、
熱力学に関するエントロピー学会の世話人
計測工学科、経営工学科の先生だちが代表や役員をやっていたOR学会の中部支部の幹事
をしていた。

学生会員の費用対効果をねらい、計測自動制御学会と、電子情報通信学会に入会した。

## 現在のカリキュラム
>現在のカリキュラムは以下に公開されている。
http://syllabus.ict.nitech.ac.jp/
現在は第2外国語という科目は存在していない模様。
現在のカリキュラムの共通科目を見て、今一度学びたいと思う科目は以下である。
この2つは大学時代に学ぶのではなく、社会人になってからも学び続ける必要があるように思う。
残念ながら大学時代は、興味もなく、必要性を感じなかった。
* 産業・経営リテラシー（経営戦略、会計学、企業経営）
* グローバルコミュニケーション（English）

生命・物質化学演習
固体反応速度学

残念ながら、物質系の化学、生物は、名工大在学中は興味もなく、必要性を感じなかった。

航空宇宙関係の仕事をして、物質系由来の打ち上げ失敗を分析しないと安全分析ができないことを知り、高校化学から勉強しなおしている。

プログラマが高校化学を勉強する訳
https://qiita.com/kaizen_nagoya/items/02eecd7857926f659506

自動車関係の仕事をして電気自動車は電池の性能で決まることを知り、当時は単位を落としても選択だったので再履修しなかった個体物性系の勉強を始めようとしている。

自動車の電源・電池と計算機・通信
https://qiita.com/kaizen_nagoya/items/f749754c2c9a15d2b70e

# 考察
>* 大学時代に1つのプログラミング言語だけをしっかり学ぶ価値は低いかもしれない。業務によって使用するプログラミング言語は異なる。プログラミング言語は独学でも学べる。
* 大学時代の成果はgitなどにアップしておくとよいかもしれない。
* 「産業・経営リテラシー（経営戦略、会計学、企業経営）」については、社会人になってから学びたくなった。共通科目には、社会人になってから、必要性を感じる科目がありそう。
* 英語については、本当に真剣に学んでおけばよかったと後悔。英語を使う能力が低いと、獲得できる情報が本当に少ない。学生時代から現在まで継続的に英語を勉強していれば、もっとスキルが伸びていたかもしれない。
* 自由にプログラミングをする（作品を作る）科目があってもよいかもしれない。大学時代にプログラミング楽しいと思えていれば、もっとスキルが伸びていたかもしれない。
* 大学において授業以外の時間・経験も重要かもしれない。

英語は専門の数学の教科書が英語で、数学とかプログラムは英語で勉強した方が、式やプログラムに集中でき、自然言語の記述に振舞わされないだけいいかもと思った。

名工大の部活には学生の間はあまり参加しなかった。
そうは言うものの、卒業した翌年も、名工大とデンソーの共同研究のプログラムを書きに大学に行っていたので、卒業後の方が、部活に参加した感じ。

NOP(NIT of Programmers)など
https://qiita.com/kaizen_nagoya/items/fb5630980839aa9a6519

当時、本をだしていた学生もいた。
大学卒業後会社を興した子もいた。
大学当時、Unixユーザ会でデモをしていた学生がすごいなと思った。VZのMifes コンパチのマクロもあっというまに作ってしまった。

VZエディタ移植に当たって実施したことと成果。仮説(115)
https://qiita.com/kaizen_nagoya/items/5551be98dcbed8f41949

情報系の学科ではないことと、プログラミングについては仕事をしに行っていたような感じだったかもしれない。

愛工大、大同大学（当時は大同江大）の卒業研究の指導を２０年くらい行ったが、
すべて、題材は自分で決められ、好きなプログラムを書いて、それを学会発表するようにした。

プログラミングについて、自分で大学で教わったわけではないし、２２歳の学生で１０歳くらいからプログラミングしていればもう１０年選手なので、私よりプログラミング能力の高い人が２割以上いた。

新人(学生)を指導するよりも新人(学生)に指導してもらった方が効率的。仮説・検証（139）
https://qiita.com/kaizen_nagoya/items/db993b1536055029f7c8

１年間で成果の出てる学生は、電気関係学会東海支部、情報処理学会全国大会、どこかの学会の研究会の３回発表してもらい、他の発表者はほとんど大学院２年生以上だったりしたような気がする。

# おわりに
>過去をふりかえるだけでは、何も始まらないので、これもいろいろ”やってみる”。
https://qiita.com/kazuo_reve/items/a2e15627f0eff62e6af6

未来を計画しても、ななかな進まない。これまで同様、学生プログラマの後ろを歩きつづけようかなった思うんです。

AUTOSAR教材作成３年計画, AUTOSAR(19)
https://qiita.com/kaizen_nagoya/items/84d8f1ecbbe7af7803af

今、技術面で中途半端になっていること（自分）16項目。仮説(13)
https://qiita.com/kaizen_nagoya/items/65ccc33ea9f738d02a85

６５歳からのプログラミング入門 転職(16) 
https://qiita.com/kaizen_nagoya/items/1561f910c275b22d7c9f

一覧

物理記事　上位100
https://qiita.com/kaizen_nagoya/items/66e90fe31fbe3facc6ff

量子(0) 計算機, 量子力学
https://qiita.com/kaizen_nagoya/items/1cd954cb0eed92879fd4

数学関連記事１００
https://qiita.com/kaizen_nagoya/items/d8dadb49a6397e854c6d

統計(0)一覧
https://qiita.com/kaizen_nagoya/items/80d3b221807e53e88aba

品質一覧
https://qiita.com/kaizen_nagoya/items/2b99b8e9db6d94b2e971

言語・文学記事　１００
https://qiita.com/kaizen_nagoya/items/42d58d5ef7fb53c407d6

医工連携関連記事一覧
https://qiita.com/kaizen_nagoya/items/6ab51c12ba51bc260a82

自動車　記事　１００
https://qiita.com/kaizen_nagoya/items/f7f0b9ab36569ad409c5

通信記事１００
https://qiita.com/kaizen_nagoya/items/1d67de5e1cd207b05ef7

日本語（０）一欄
https://qiita.com/kaizen_nagoya/items/7498dcfa3a9ba7fd1e68

英語(0) 一覧
https://qiita.com/kaizen_nagoya/items/680e3f5cbf9430486c7d

転職(0)一覧
https://qiita.com/kaizen_nagoya/items/f77520d378d33451d6fe

仮説（0）一覧（目標100現在40）
https://qiita.com/kaizen_nagoya/items/f000506fe1837b3590df

音楽　一覧(0)
https://qiita.com/kaizen_nagoya/items/b6e5f42bbfe3bbe40f5d

「@kazuo_reve 新人の方によく展開している有益な情報」確認一覧
https://qiita.com/kaizen_nagoya/items/b9380888d1e5a042646b

Qiita(0)Qiita関連記事一覧（自分）
https://qiita.com/kaizen_nagoya/items/58db5fbf036b28e9dfa6

鉄道（０）鉄道のシステム考察はてっちゃんがてつだってくれる
https://qiita.com/kaizen_nagoya/items/26bda595f341a27901a0

安全（0）安全工学シンポジウムに向けて: 21
https://qiita.com/kaizen_nagoya/items/c5d78f3def8195cb2409

一覧の一覧( The directory of directories of mine.) Qiita(100)
https://qiita.com/kaizen_nagoya/items/7eb0e006543886138f39

Ethernet 記事一覧　Ethernet(0)
https://qiita.com/kaizen_nagoya/items/88d35e99f74aefc98794

Wireshark 一覧 wireshark(0)、Ethernet(48)
https://qiita.com/kaizen_nagoya/items/fbed841f61875c4731d0

線網（Wi-Fi）空中線(antenna)(0) 記事一覧(118/300目標)
https://qiita.com/kaizen_nagoya/items/5e5464ac2b24bd4cd001

OSEK OS設計の基礎　OSEK(100)
https://qiita.com/kaizen_nagoya/items/7528a22a14242d2d58a3

Error一覧 error(0)
https://qiita.com/kaizen_nagoya/items/48b6cbc8d68eae2c42b8

++ Support(0)　
https://qiita.com/kaizen_nagoya/items/8720d26f762369a80514

Coding(0) Rules, C, Secure, MISRA and so on
https://qiita.com/kaizen_nagoya/items/400725644a8a0e90fbb0

プログラマによる、プログラマのための、統計(0)と確率のプログラミングとその後
https://qiita.com/kaizen_nagoya/items/6e9897eb641268766909

なぜdockerで機械学習するか 書籍・ソース一覧作成中 (目標100)
https://qiita.com/kaizen_nagoya/items/ddd12477544bf5ba85e2

言語処理100本ノックをdockerで。python覚えるのに最適。:10+12
https://qiita.com/kaizen_nagoya/items/7e7eb7c543e0c18438c4

プログラムちょい替え（0）一覧:4件
https://qiita.com/kaizen_nagoya/items/296d87ef4bfd516bc394

Python(0)記事をまとめたい。
https://qiita.com/kaizen_nagoya/items/088c57d70ab6904ebb53

官公庁・学校・公的団体（NPOを含む）システムの課題、官（０）
https://qiita.com/kaizen_nagoya/items/04ee6eaf7ec13d3af4c3

「はじめての」シリーズ　 ベクタージャパン　
https://qiita.com/kaizen_nagoya/items/2e41634f6e21a3cf74eb

AUTOSAR(0)Qiita記事一覧, OSEK(75)
https://qiita.com/kaizen_nagoya/items/89c07961b59a8754c869

プログラマが知っていると良い「公序良俗」
https://qiita.com/kaizen_nagoya/items/9fe7c0dfac2fbd77a945

LaTeX(0) 一覧　
https://qiita.com/kaizen_nagoya/items/e3f7dafacab58c499792

自動制御、制御工学一覧（０）
https://qiita.com/kaizen_nagoya/items/7767a4e19a6ae1479e6b

Rust(0) 一覧　
https://qiita.com/kaizen_nagoya/items/5e8bb080ba6ca0281927

小川清最終講義、最終講義（再）計画, Ethernet(100) 英語(100) 安全(100)
https://qiita.com/kaizen_nagoya/items/e2df642e3951e35e6a53

＜この記事は個人の過去の経験に基づく個人の感想です。現在所属する組織、業務とは関係がありません。＞
This article is an individual impression based on my individual experience. It has nothing to do with the organization or business to which I currently belong.
### 文書履歴(document history)
ver. 0.01 初稿 20211204
ver. 0.02 「プログラマが知っているとよい色使い(JIS安全色)」「アメリカ留学、アメリカ就職の代わりに行ったこと。行なっていること.」追記 20211205
### 最後までおよみいただきありがとうございました。
いいね　💚、フォローをお願いします。
####  Thank you very much for reading to the last sentence.
Please press the like icon 💚　and follow me for your happy life.
