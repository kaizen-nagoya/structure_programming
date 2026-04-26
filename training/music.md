---
title: プログラムは音楽(1)だ (A program is a music.) 仮説(54)
tags: プログラム 音楽 MIDI 小川メソッド CountdownCalendar2022
author: kaizen_nagoya
slide: false
---
# この資料の背景
この資料は、子供にプログラミングを教えるのに、音が鳴る題材だとデバッグが容易であることとに基づいています。音楽活動をされているプログラマの方々、音楽活動をされている方々がプログラミングに取り組む際の意見交換に基づいています。
何人かは、プログラマに転身される過程におつきあいしています。

そんな方の紹介からまず。
https://www.youtube.com/watch?v=qOOymLivqhU

[![津軽三味線世界大会に挑戦！【秋の大演奏会 チケット絶賛発売中！】](http://img.youtube.com/vi/qOOymLivqhU/0.jpg)](https://www.youtube.com/watch?v=qOOymLivqhU)
https://www.youtube.com/watch?v=ZBo-gvFN2mI

[![演奏会に向けて初の合同練習&中間発表 パート1【秋の大演奏会 チケット絶賛発売中！】](http://img.youtube.com/vi/ZBo-gvFN2mI/0.jpg)](https://www.youtube.com/watch?v=ZBo-gvFN2mI)

公開算譜(open source)は楽しいの (just want to have fun.)
https://qiita.com/kaizen_nagoya/items/4368f223940794ac2937

から参照しました。機械系の技術者の方が、Pythonの音楽プログラムに取り組み３週間で自在に扱えるようになられました。

プログラムは音楽だ with ChatGPT
https://qiita.com/kaizen_nagoya/items/67cca93211e22998b406

＜この項は書きかけです。順次追記します。＞
# ある日の午後
音楽活動をされているプログラマの方と話をした。

音楽のこと。
オープンソースのこと。
心理学のこと。
## 音楽
音楽を専門家としてお金をもらって活動するか、
音楽以外の職業を持ち音楽を自分の楽しみとして活動するか、
それ以外にも色々な状況がある。

音楽から少し視点を変えて美術ならどうだろう。
美術であれば、専門家で、美術活動だけでは食えずに、
学校の先生をしたり、別に職業を持って絵を描いている人たちは大勢いる。
その人たちは、専門家として絵を描いて、専門家の展覧会に出展していたりする。
偉大な美術家であればあるほど、生前評価されていないことがある。

専門家であることと、食っていけることは必ずしも同値ではないし、因果関係があるとは限らない。

プログラマもArtistであり、専門家であることと喰っていけることは同値ではないかもしれない。

専門家として音楽をやっている人たちだけが音楽に貢献しているのだろうか。
## オープンソース・プログラマ
オープンソースは、天才プログラマだけでは成り立っているかもしれない。

複雑なプログラムは天才が作るとしても、さまざまな応用、ちょっとした変形など、作り替えて使ったり、簡略版を作ったり、動作試験をしたり、いろんな人がいろんな関わりを持って成り立っている。

お金をもらって、特定の人のために作るソフトウェアをソースコードを公開しないという活動がある。
それに対して、自分のために、作ったソフトウェアを、オープンソースとして提供するという活動がある。

例えば、この２つの活動の間に、色々な種類が存在するが、ひとまずこの２つだけで考えても、色々なことが議論可能かもしれない。

自分のために作る場合には、検証は不要である。
常に、妥当性を確認する方が、検証するより容易で早いからである。

他人のために作る場合には、妥当性を確認する手間がかかるため、
ひとまず検証しておいて、妥当性確認を後からしようとしていることを意識していない場合があるかもしれない。

他人のために作る場合には、どういう必要があるか、何を解決したいか、実際には分かっていない状態から作業が始まるかもしれない。そこでは、分析が必須なのかもしれない。

多くの試験は、大勢の専門家ではないプログラマたちの手によっている。
## 心理学
人間が「動機があって何かをする」という仮説は、何かの時には有効かもしれない。
人間が動機がなくて、何かをし続けて、そこから逆算して「動機」なるものを想定することがあるかもしれない。

心理学は、経験科学であって、原理が事前に存在すると仮定しない方がいいかもという話をした。

人が初めて音楽を聞く時に、本人に動機があることはほとんどない。
何度も何度も聞くうちに、色々な感情が生まれ、その感情の共通部分を想定する場合がある。
そのうちに、音楽を聞こうとする場合に、感情の共通部分を意識するかもしれない。
それを動機と呼ぶことは可能だろう。

行動に必ず動機があるという仮説は成り立ったことにはならない。

仮説（34）心理学の本を読むよりはコンパイラ書いた方がよくね
https://qiita.com/kaizen_nagoya/items/fa715732cc148e48880e

科学哲学考
https://qiita.com/kaizen_nagoya/items/456273849f4b17bd9ab5

人間が計算機に勝てる３つのこと
https://qiita.com/kaizen_nagoya/items/49dc709d289d22846044
# まえがき(preface)
子供のプログラミングには音の鳴るものがいいというのは経験則。
自分で聞いて、治すことができるから。
設計者と利用者が同一人物で済むのが大事。
自分が心地よくするための努力は惜しまない。

音楽活動をされている方にプログラミングを習ってもらって、
３週間から３ヶ月でプロとしてのプログラムが書けるようになるのも経験則。
時間が大事だということがわかっているから。
どの時期(timing)に何をすればいいか。
プログラマが指揮者であることがすぐに理解できる。
対象に対する深い理解が、計画(program)を作ることができる前提だと知っている。
## 前史(biography)
5歳の頃、オルガンでkeyboardに馴染んでから、10歳くらいに英文typewriterを叩くようになった。

音楽を先に習ってから、計算機を習うとよいという経験に基づいて書き始めた。

半田ごてを持つ前に、筆を持った方がよいというのも一つの経験則。

習字とピアノは３歳から５歳くらいから習わせると、電子技術者かプログラマになれるかなって期待してもいいかも。

今日、放送大学の講義を聞いた。
放送大学アーカイブス・知の扉 音楽・情報・脳('13)第７回・８回
https://bangumi.ouj.ac.jp/bslife/detail/01638033.html

講師の一人の博論
可聴域をこえる超高周波成分の信号強度差が音の受容反応に及ぼす影響
総合研究大学院大学　八木玲子
https://ndlonline.ndl.go.jp/#!/detail/R300000001-I000004364741-00

オーディオプログラミング言語 Advent Calendar 2020
https://qiita.com/advent-calendar/2020/audiolang

この資料はまだ全部は読んでいない。拝見したら個別の記事を順次転記予定。

プログラムは詩(poem)だという説と対になっているのが
プログラムは音楽(music)だという説です。

プログラムは詩(A program is a poem)という下書きの資料と、
プログラムは音楽(A program is a music)という記事とで対になっています。

プログラムは詩(A program is a poem)という記事は、
「ゼロから作るDeep Learning ２自然言語処理編」読書会に参加する前に読んで置くとよい資料とプログラム
https://qiita.com/kaizen_nagoya/items/537b1810265bbbc70e73
の読書会が済んだ頃に完成予定 ~~です~~ でした。今、不完全な状態でご不便をおかけしています。しばらくお待ちくださると幸いです。量子計算機の読書会の終了時点までに整理し直す予定です。

「量子アニーリングの基礎」を読む
https://qiita.com/kaizen_nagoya/items/29580dc526e142cb64e9

ところで、
料理？音楽？結局プログラミングは”何と”似ているのか
https://qiita.com/kawanakashotaro/items/34f9b168686adcfe16a6
で、なぜ詩(poem)がないのかは不思議。

プログラムは詩のように描こう
https://qiita.com/kaizen_nagoya/items/dd2a912f23b18e0f8893

K-On! The Movie Eiga Keion! Reg.A/B/C Australia
![71XTOTiGhsL._SY500_.jpg](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/51423/3a21f749-5a20-4b6c-ee86-6b898d1e9672.jpeg)
https://www.amazon.com/K-Movie-Blu-ray-Naoko-Yamada/dp/B01A9QXTES/

上記bule rayは、B/2　の設定のドライブがないと再生できません。
Region B/2: Europe, Greenland, French territories, Middle East, Africa, Australia and New Zealand

# 目的(purpose)
プログラムと音楽の相似性、同一性、関連性を明らかにすることにより、
プログラムの自動生成と音楽の自動生成に共通な枠組(framework)を提供、発見、発言することを目的とする。

Qiitaの記事を体系的に整理して、枠組みがすでに存在するか、今作られようとしているかを確認する。

音を題材にしたプログラムから、プログラミングを始めると、自分ですぐに確認できるため、プログラムを直しながら作っていくという試行錯誤の過程を短期間で習得することができるという仮説を立てて教育して成果が出るかどうかを確認します。

音楽に興味がない方には、ゲームという画面の動きに着目したものをお勧めすることがあります。

Lode-Runnerで学ぶ実践C言語-ビー・エヌ・エヌ企画部
![51JaGIOM+4L._SL500_SX351_BO1,204,203,200_.jpg](https://qiita-image-store.s3.amazonaws.com/0/51423/b5ed3b1c-7a32-519d-8cd8-49f8286cb9d3.jpeg)
https://www.amazon.co.jp//dp/4893690116
はC言語のソースコードがついています。入力して、type missのコンパイルエラーを取っていると文法を知らなくてもプログラムが直せることが分かるようになっているかも。

# 成果(outcome)
プログラミングをしたことがない方（１０歳の子供から８０歳のお年寄りまで）で、音を鳴らすプログラミングから始めると、すぐにプログラミングの楽しさを知ることができる。

Qiita上の音楽に関する資料で、音楽とプログラムとの関係が明確になる。

プログラムの様々な枠組みが、音楽の様々な枠組みと再利用可能であることがわかる。

機械学習、深層学習、量子コンピュータ等の技術の応用分野として、プログラムand/or音楽の自動生成、課題発見、不具合補修の一部が可能になる。

## プログラマ(programmer)と音楽(music)
プログラマに音楽関係者は多い。
私は幼稚園の頃オルガンを習っていました。
実家が印刷屋だったこともあり、中学に入る前に英文タイプを覚えました。
コンピュータのキーボードはキーボードという意味で３つ目の道具です。

CPU周りの電子工作の情報源の一つが音響関係者です。
何を隠そう、私も音響から電子工作に入りました。
高校の放送部でのミキサの半田付けです。約48年前。

音響機器の製作マニュアルの作成の下働きをしました。

ここでは、音楽・音響関係のQiitaの記事を集め、ありとあらゆるところで、安価に良い音響を得られるようにすることを目標にします。

その際に、ネットワーク、無線、CPU、プログラムが関係するところがあることに色々であうに違いない。

## プログラムと音楽の共通点
算符　と　音符
算譜　と　楽譜

算譜は算符(code)で描き、楽譜は音符(note)で描く。音符を積み上げたものがchord。

楽譜は時間的順番と同時並列処理
算譜は論理的順番または論理的宣言だが、時間的順番と同時並列処理も含む。

楽譜でも算譜でも大事なことは、同期と同時並列処理。

そして、楽譜　＜　算譜
全ての楽譜を算譜で表すことができる。

また、プログラムそのものを、音楽としてdebugすることも検討しています。
プログラムを音響出力して、違和感のあるところにバグがあるとか。
プログラムを音響変換して機械学習させて、バグを見つけるとか。

## やると面白そうなことは山盛り
例えば

88鍵のキーボードで「奏でる」プログラミング
https://qiita.com/fudafoota/items/ed91e3f9abe1f1ddfea7

最初は音楽・音源の記事から。

なお、プログラマ目線なため、プログラミング言語等で分類しています。
アプリが採用している技術に思い違いがあるかもしれません。
分類に違和感がある場合には、コメント等でおしらせくださると幸いです。
誤字、誤植なども、、、。（）書きは当方で手を加えたもの、及びQiita以外の URLです。

# プログラミングと音楽の違い例（キーボード）
コンピュータのキーボードと、音楽用キーボードの違いで、
3台以上の機材、３台のディスプレイを利用して困っていること
https://qiita.com/kaizen_nagoya/items/3812f281c108cb121b0b
へのコメントへの返事を書いていて気がつきました。

コンピュータのキーボードは、右手と左手で別々のコンピュータの操作をすることはほとんどない。あるとすれば、２台で同期していて、リターンキーなどの特定のキーを、交互に押すような運用試験の時くらい。

音楽だと、２台、３台のキーボードを並べて、右手はこっちの音、左手はこっちの音という使い方をされることがある。

考え方の違いは後日整理します。

# 微分・積分
電気回路を簡単に解くための道具が微分と積分。
電気回路を理解するのによいのが、電気回路の出力としての音楽。

音響機器で音楽を作ろうとして、回路を設計しようとすると、微分・積分を駆使すれば、簡単にすばらしい音が創作、再現できる。

微分、積分だと意識する必要はない。絶縁巻線(coil)が微分をしてくれて、蓄電器(capacitor, condenser)が積分してくれる。

音を聞きながら、回路をいじれば、微分・積分をしらなくても、微分・積分を計算してくれる。
小学校で、理科と音楽と数学を同時に教えればいいのだ。

先に、答えを知っていれば、問題を解くのは怖くない。
物理現象の答えを先に知って、数式は計算するだけでよい。
その計算も計算機にプログラムを与えればしてくれる。
微分・積分は恐ることはない。ただ、音楽を聴いて気持ちいいかどうかで、微分・積分がわかってしまう。

音楽の微分と積分～音楽の縦線と横線について～
https://drum-lesson.net/music_difference_integral/

「音のレッスンとは何なのか」：音楽の微分と音（響き）の積分　[体験記：音のレッスン（完）]
https://unify.blog.so-net.ne.jp/2012-06-16

「ジャズと微分／積分、アフリカ的とインド的」
https://djapon.hatenablog.com/entry/20120606

これだけ覚えれば電気回路は卒業　2007.4.19 水野
http://www.ey.u-tokai.ac.jp/mizuno/kyozai/denki_enshu/012Inmedance%20of%20LC.pdf

【CR回路】微分回路の波形・式・原理　アルゴリズム雑記.
https://algorithm.joho.info/denki-denshi/cr-kairo-bibun-hakei-shiki-genri/

・オペアンプ（３）発振回路、微積分回路　公益社団法人日本電気技術者協会
https://www.jeea.or.jp/course/contents/12124/

## 積分
Kerasを触ってみた その②「音楽生成（LSTM）」（2017/5/23）
https://qiita.com/torukusakabe/items/fd17d6fda53e86eda813


作って学ぶ耳の錯覚「シェパードトーン(無限音階)」
https://qiita.com/shionhonda/items/4fff494a0cd4d843b6df

## 微分
RNN-RBMによる旋律の予測と生成と音楽情報処理に関する紹介
http://xiangze.hatenablog.com/entry/2014/09/28/143934

Siv3Dで音を遊んでみた
https://qiita.com/hat_a2c/items/28ff9f21a7386821a923

# 聴覚
【VR学まとめ】2.3 聴覚
https://qiita.com/nkjzm/items/0d5db04f6a60690b48d6

【VR学まとめ】2.7 モダリティ間相互作用と認知特性
https://qiita.com/nkjzm/items/ca4f75918f7e66def83c

【VR学まとめ】4.2.3 聴覚レンダリングとモデル
https://qiita.com/nkjzm/items/5ae01203c0f93baa9c13

自然非言語処理第１０日目： 聴覚による非言語処理
https://qiita.com/alfredplpl/items/5b3ac615424c549bdb26

作って学ぶ耳の錯覚「シェパードトーン(無限音階)」
https://qiita.com/shionhonda/items/4fff494a0cd4d843b6df
# 音楽、音源

音とFM音源の軽い紹介と今昔物語
https://qiita.com/nanase/items/a6789735a73b8da6526f

「オトアソビ（oto asobi） 2回目」概要レポート
https://qiita.com/tadfmac/items/43e1ce490f4c2ff18f5c

Chromeで動くMIDIコン作ってみた🕹
https://qiita.com/onomuta/items/663926501600f77ed898

ブラウザを誰でも簡単に扱える楽器にしてみた
https://qiita.com/comorebi_notes/items/56e41f3ddc228597450d

Flaskを用いたWebアプリケーションで音を再生する
https://qiita.com/a2kiti/items/9b4491da63230fd3fe6b

Sonic PiでSoundProgramming!
https://qiita.com/santa_sukitoku/items/6585a84eeb01d2b8d3a3

C4Dでの音合わせが少し楽になるかもしれないAEスクリプト紹介
https://qiita.com/shutosg/items/03011f8ec97d942deb7e

FM音源について
https://qiita.com/fukuroder/items/e1c2708222bbb51c7634

# 音声
音声対話システムの評価方法
https://qiita.com/GushiSnow/items/2dd028510de1203c857c
音声処理で参考になったサイトまとめ
https://qiita.com/eve_yk/items/07bc094538f2d50841f4

音声認識で「結月ゆかり実況」動画を作る
https://qiita.com/toRisouP/items/979326f0ea5e944e1d3b

Google Cloud Speech APIで音声の自動文字起こし
https://qiita.com/kokky/items/659bde4cdc8ce5c78e29

音楽アプリのための音声解析入門
https://qiita.com/icoxfog417/items/d376200407e97ce29ee5

## 音楽API
（songle含む：http://api.songle.jp/sync/v1）

音楽系API（主に音楽配信サービス）まとめ
https://qiita.com/yumayamada1029/items/d556e8d227418bcfb8c0

## UPIC
UPIC調べ中
https://qiita.com/kaizen_nagoya/items/854912a604505a2844d1

# MMDAgent(Nagoya Institute of Technology)
はじめてのMMDAgent
https://qiita.com/5sick/items/ef465be59ade518af6ba

MMDAgent を Android で動かす
https://qiita.com/KTaskn/items/50cd70477c3c90f932e4

MMDAgentについてまとめる 音声認識・音声合成編
https://qiita.com/m-masaki72/items/c850710186e13d69132d

## Alexa(amazon)
Alexaと自分のシステムとでユーザー連携する方法
https://qiita.com/sitopp/items/a91057e1df7c1948b41c

Alexa Skills 開発用ブックマーク
https://qiita.com/sitopp/items/accb2a813091f00255c7

NAMAROIDの音声認識をAmiVoiceでやってみた
https://qiita.com/atticatticattic/items/8c6f2fb008d21384df05

音声データの初心者向けガイド 〜Beginner's Guide to Audio Data〜
https://qiita.com/daisukelab/items/d084c0a82e3f229043a7

コマンドライン上で音声信号処理をやってみる
https://qiita.com/taroc/items/eda650ba4f89b94a783b

# 機械学習
### 分析・認識
Deep Learningで楽曲認識
https://qiita.com/slowsingle/items/36b6381124249d067026

音楽の構成（Aメロ、サビ等）を自動で分割する。
https://qiita.com/tackey/items/ca51b7c891cf604a6527

MIDIデータでword2vecをやってみた（があまりうまくいった実感が得られなかった）
https://qiita.com/tackey/items/a24194701f9ccc4fd32b

音響処理の基礎 with CNN　〜機械学習で「太鼓の達人」の自動作譜をしてみた〜
https://qiita.com/woodyOutOfABase/items/01cc43fafe767d3edf62

音響プログラミング環境一覧（随時更新予定）
https://qiita.com/Hulc_0418/items/5ca66f05122c5ea7838f

DNN-CRFをChainerで作って音楽のコード進行認識
https://qiita.com/xiao_ming/items/c25642d9d095964410fd

音楽と機械学習 前処理編 MFCC ~ メル周波数ケプストラム係数
https://qiita.com/martin-d28jp-love/items/34161f2facb80edd999f

Deep U-Netで自動歌声分離
https://qiita.com/xiao_ming/items/88826e576b87141c4909

【論文読み】深層学習で複雑な音楽コードの認識をやる問題
https://qiita.com/xiao_ming/items/25a0fec55ab6f71325a8

### 機械学習による作曲(自動生成）
ディープラーニングで曲のコード進行を生成するウェブサービスを作りました
https://qiita.com/yura/items/bb7e0767813fff6fe74f

TensorFlow製アート・音楽生成プロジェクト「magenta」で曲を作ってみる。
https://qiita.com/tackey/items/cd75d385ec08094dbd7f

アート・音楽生成 magentaプロジェクトの概観
https://qiita.com/tackey/items/db77ca732a52a4c68df4

グーグルMagentaの採譜プログラムと自分のプログラムを比べたら互角の勝負だったという話
https://qiita.com/kichiki/items/0325aa2e8b70416f6597

RNNを用いたコード進行自動生成
https://qiita.com/a2kiti/items/b0a500762a127b7ad69b

## 作曲
画像から音楽の自動生成
https://qiita.com/a2kiti/items/83db255fdb12e5ed593d
音ゲーの同期方法について考察した
https://qiita.com/nom3nan/items/b58241d35b4bc6a6acfa

HoudiniをOSCタイムラインとして使う
https://qiita.com/satoruhiga/items/63fea9616d5135a328d3

MOOGとかのラダーフィルタについての覚書
https://qiita.com/Aogiri-m2d/items/d691eb801071f4402f6a

### vocaloid
初心者でもイチから作曲する方法
https://qiita.com/syui/items/fc47b28e21f582574f5c

MacOS Sierra上でMikuinstallerを使ってVocaloid2を動かしてみた
https://qiita.com/yohase/items/aa23a152f32bbb5b42c3

VOCALOID 4 「巡音ルカ V4X」のインストールではまったこと
https://qiita.com/rero/items/cb264b5b96f43c072b5d

Node.jsとHTML5で初音ミクのオンラインかるたゲーム「ミクミクかるた」を作ってみた
https://qiita.com/yamarou/items/e78752089451d207090c

【初音ミク】Innocence【3DPV】に出てくる「あの楽器」のWeb版
https://qiita.com/Shino3/items/9ff6a4529f9fea15e11b

(参考：アイヌの歌をボーカロイドで https://researchmap.jp/jonfkfpbz-1833293/)

#### unity with vocaloid
【Unity】Unity with Vocaloidで「どれみ」を歌わせるまで
https://qiita.com/tatmos/items/c04d17854a1c1cc02632

Unity with VOCALOIDを触ってみる
https://qiita.com/northprint/items/0bdceef7d7b54a138dfb

### Game music
サウンド調整のこれから
https://qiita.com/tatmos/items/c51186378d8b8030b57b

プログラマ向けゲームBGM作曲講座
https://qiita.com/tatmos/items/5e8a1dde70318e5f1c4c

プログラマ向けゲームBGM作曲講座（ミックス編）
https://qiita.com/tatmos/items/12a860ba67ed868a2443

手軽にできる3Dサウンドを目指してやってみたこと
https://qiita.com/tatmos/items/a278a780455af2a928ac

簡単にBGMやSEを作れるアプリの紹介
https://qiita.com/takish/items/83755878007ed9b95db7

# 音響解析
### praat (https://sites.google.com/site/utsakr/Home/praat)

praat: 音響分析用スクリプト
https://qiita.com/yamcat/items/5eb13f939ed40e857be0

praat: Soundオブジェクトに対する音響分析
https://qiita.com/yamcat/items/c2181681f4194a7cd6bf

praat: 選択したサウンドオブジェクト全てに対する音響分析
https://qiita.com/yamcat/items/7d106b411496a60d4480

praatを用いた個人的な音声分析手順
https://qiita.com/yamcat/items/41684a5289cdef216cc7

Praatの音声アノテーション（.TextGrid）を自動生成
https://qiita.com/Syuparn/items/d86e77c39527539b16c5

Macに"音声学に関する分析ソフト"Praatを入れる
https://qiita.com/B163301/items/f42a05f87681cf1f5840

Praatで録音＆スペクトラムを表示する
https://qiita.com/B163301/items/5e9f6bc021b38151331a

## python(拡張子.py)
Pythonで学ぶシンセサイザー
https://qiita.com/a2kiti/items/4449d15e16c1793fd53f

Python で音楽を作って楽しもう
https://qiita.com/yura/items/e5c6e9527215e0e0524a

pythonで音声処理
https://qiita.com/nyancook/items/786cffd0b07bad8b4444

PythonでMIDIを扱うパッケージ　midiとpretty_midi
https://qiita.com/marshi/items/18bf9199b1b164ec1856

pretty_midiを使って、PythonでMIDIファイルを作成する
https://qiita.com/tackey/items/d0525798bddc4516f4f9

[Python]デジタル音源データの量子化誤差のシミュレーション
https://qiita.com/Y_F_Acoustics/items/6742a0a8ad6b37a0f4f5

Pythonでmp3の波形を描く
https://qiita.com/tackey/items/225fdb5f07f2033377fa

Pythonで音楽解析する"music21"
https://qiita.com/ognek/items/924ca96f0c4be4ed0e24

python3で演奏する電子オルゴール
https://qiita.com/gx3n-inue/items/d7ae2d4962c41af62fc2#_reference-25a0760e493f2f27a8a1

PythonでAM音響信号の変動強度とラフネスを検証
https://qiita.com/tmtakashi_dist/items/b76350e304ef8e33fc1a

pythonでもっとも簡単に音声合成する方法
https://qiita.com/DaikiMaekawa/items/49d9ab2b14fa14df6460

Pythonで音響信号処理
https://qiita.com/wrist/items/5759f894303e4364ebfd

Pythonで音響信号処理(2)
https://qiita.com/wrist/items/4b404230e264c5cb571c

Numpyで奏でるクリスマスソング
https://qiita.com/TatchNicolas/items/fb4064a7f394b977765e

Jupyter notebookで音を鳴らす
https://qiita.com/driller/items/3d4cd5721f5ab5b42f54

Pythonでdocomoの音声合成APIを利用する
https://qiita.com/peishnm2/items/618d112babaa9cc3395d

【脳波測定】Pythonライブコーディングで集中力を音でフィードバックするシステム
https://qiita.com/peishnm2/items/9f96f2c3919135ef3110

Pythonでスピーカの周波数特性を分析https://qiita.com/tmtakashi_dist/items/c65d1c570d40e21d27b3

sounddeviceでPythonを使って録音する
https://qiita.com/tmtakashi_dist/items/f5fd2a1b0d66ec4aabde

pythonで音楽再生
https://qiita.com/johejo/items/19ee319c62ed63d62c58

### FoxDot
FoxDot（音楽用ライブコーディング環境）をインストール
https://qiita.com/Hulc_0418/items/ba3e94633e465f7201d0
FoxDotを使ってライブコーディングでセッションをする
https://qiita.com/Hulc_0418/items/8cc12fe53e20ef7eadd9
Troopを使ってライブコーディングセッションをする！
https://qiita.com/Hulc_0418/items/0509ed0521f7309b29d7

## R(拡張子 .R)
Rでコード進行を丁寧丁寧丁寧に可視化してみる（Level 1）
https://qiita.com/sasanquaneuf/items/aed57423b4edce26f783#_reference-5b75444025dd00b0da09

Qlik SenseとShinyでコード進行を丁寧に描くと決めていたよ（Level 2）
https://qiita.com/sasanquaneuf/items/06d90cebe8b9ca775aea#_reference-df23d0cd1073c03f5032

さだまさしの楽曲のコード遷移を整理してみた
https://qiita.com/aich_08_/items/ef0a352a653ae3e721dd

## ruby(拡張子 .rb)
gem の紹介：key_change 音楽のコードを楽に転調する
https://qiita.com/gazayas/items/03050c25e993ab757b64

ruby-soxでかっこいい音楽を作ってみる
https://qiita.com/doima_/items/2cf028d5c535bac91405

OSC入門 - osc-rubyを使った基礎からiTunesのリモート操作まで
https://qiita.com/5t111111/items/f8504e382e348df430d0

## C＃(拡張子 .cs)
C#でSoundCloudライクな波形を表示する音楽プレーヤを作ってみる
https://qiita.com/siy1121/items/dd06a5e700dcf9543af7

C#で音声波形を表示する音楽プレーヤーを作る
https://qiita.com/lenna_kun/items/a0f03447bb893c9ab937

C#でサウンドを鳴らす
https://qiita.com/Oichan/items/b93e8e8ba8211b925d0a

【Unity(C#)】簡単にサウンドを再生、停止する方法
https://qiita.com/OKsaiyowa/items/d1a131f6b3e356c19388

C#でWaveの波形を読み込む
https://qiita.com/amutou/items/ef7ff0a800965154d971

## C++(拡張子 .cpp)

C/C++でcross-platformでの音楽再生にはSDL_mixerが便利
https://qiita.com/thorikawa/items/1ea4dae30749543b6a4f

C++で使える　音響合成ライブラリ
https://qiita.com/chikashimiyama/items/34bc76e9597ea5589fbf

文字列(ドレミ)を読み込んで音(ドレミ)に変換するやつ作ってみた(C++)
https://qiita.com/Nonohoo/items/34bd0a3c962dffddcd37

音声分析合成システムWORLDなるものを使ってみる。
https://qiita.com/misumi3104/items/de49e591a72b781c0521

海苔音源をプログラミングでなんとかしてみる
https://qiita.com/YSRKEN/items/eca369f7a5a1b2b2385d

C++ゲーム開発録 - 1週間で音ゲー制作
https://qiita.com/Nao-Shirotsu/items/db6824e28b7d511946a8

### Swift
Swiftで音楽のBPMを算出するコードを作ってみた
https://qiita.com/From_F/items/8d16dfc9807281771bc3

人生初のライブラリ作成で学んでいったことメモ in Swift
https://qiita.com/touyoubuntu/items/e61eb15fe955d905362f

[Swift] 音楽を流す方法
https://qiita.com/Tatsunori-Ono/items/ffa3fb72fd2822e0caf1

【SpriteKit】で音楽を流す
https://qiita.com/nigg/items/7b28e319082322f7aecd

Swiftで音楽を再生
https://qiita.com/sawapi/items/e08ab4f56f7e4684defd

AVAudioPlayerで音楽を再生する
https://qiita.com/ekCraft/items/1963f6cba23f27358865

[iOS] [Objective-C] [swift] AVAudioPlayerで音楽を再生する
https://qiita.com/sunstripe/items/eda55d352f6b90a617e4

UIBarButtonItemの再生、一時停止ボタンの切り替え
https://qiita.com/k-k-c/items/18594bc7229280e676aa

### JUCE

JUCEのAPIでPCMシンセサイザーを作る(C++)
https://qiita.com/COx2/items/e50e8f29bea633c6e5b0

JUCEのMIDI入力受付処理への理解を深める。(C++)
https://qiita.com/MachiaWorx/items/e7c2eeb6e53fc23eb33d

Max/Mspのgen~とJUCEを使ったVSTの作り方
https://qiita.com/Hulc_0418/items/13d6eba380270838b6a4

ADC 2017の講演についてひたすら紹介する -Day1-
https://qiita.com/COx2/items/4a5f781206195200ea30

ADC 2017の講演についてひたすら紹介する -Day2-
https://qiita.com/COx2/items/d52709387ab793f5b6ec

### Julia
Juliaで楽器を作ろう（コナミ効果）！
https://qiita.com/kimrin/items/689f5b6ae4c0f56cf4a4

### VST(Virtual Studio Technology)

Faust&JUCEによる超高速VST開発
https://qiita.com/tomoyanonymous/items/79b3e551984a707b5c9a

Raspberry PiでVSTプラグインを開発する話
https://qiita.com/COx2/items/a0c8a24e8f5345508a24

C++ VST Pluginを作成する(環境構築)
https://qiita.com/gansaibow/items/4c7cf39c8d6a5f960c9d

Studio OneでVSTプラグインを読み込む
https://qiita.com/gansaibow/items/b9bb380d8887d0285de8

### Faust(Functional AUdio STream)
関数型音声処理言語、Faustをはじめよう
https://qiita.com/tomoyanonymous/items/30ff7c862c362aa90a7d

Faust : 単純な発振器(ただしVSTエフェクト)を作ってみた。
https://qiita.com/ttatsf/items/bb56239c538579aa2fd0

Faust : 初めてのVSTプラグイン
https://qiita.com/ttatsf/items/0a24ec3fc411fcde021e

FAUST:自分好みのフェイザーを作ってみた
https://qiita.com/ttatsf/items/c3a9123614e75649247d
Faust:自分好みのディストーションを作ってみた
https://qiita.com/ttatsf/items/121938a872ec44ef873c

FAUST:フェイザーっぽいコーラス?コーラスっぽいフェイザー?を作ってみた
https://qiita.com/ttatsf/items/c9ff35cfe1ccb7fdc1f6

Faust:自分好みのステレオコンプを作ってみた
https://qiita.com/ttatsf/items/6f15452ae5c3d42ac32e

Faust で遊ぶ
https://qiita.com/reprimande/items/7071affe8e6758515c28

### Unity
Unityでシンセサイザーを！
https://qiita.com/r_benjamin_cotton/items/72e4d1c13380aa657dc3

【Unity-Chan】HeartCatch【音楽アクション】
https://qiita.com/tatmos/items/4c2c176d9457855924f0

Unity で音楽に合わせたデータを作るのに MIDI ファイル + SmfLite が楽だった
https://qiita.com/chiepomme/items/ea524fdb40f21a8101f9

[Unity] 0から始めるMusic.cs
https://qiita.com/lycoris102/items/0969a07d09e3655b11ce

[Unity]シンプルな音ゲーの作り方 part1　譜面作成
https://qiita.com/Teach/items/12a2e3b2f8c09dbbc5bd

[Unity]シンプルな音ゲーの作り方 part2 ゲーム製作
https://qiita.com/Teach/items/e8343fe0405da7ebd5fc

UnityのNativeAudioPluginを作る。
https://qiita.com/Hulc_0418/items/742a96cb0b9c6bdc1980

unityで音を鳴らす
https://qiita.com/studio_haneya/items/8883812d7dcd8a626f69

知る人ぞ知るUnity 5のネイティブオーディオプラグインについて
https://qiita.com/tnayuki/items/c565c030c7da7b95216d

## C(拡張子 .c)
C言語でシンセサイザー作成入門（その１）
https://qiita.com/MachiaWorx/items/87968666a2baf9fcc493

C言語でシンセサイザー作成入門（その２）
https://qiita.com/MachiaWorx/items/a94504a6cce48c8ce4e7

C言語ではじめる音のプログラミング - サウンドエフェクトの信号処理 -
http://floor13.sakura.ne.jp/book03/book03.html

インタラクティブミュージック作曲家にFluidSynthをざっくり紹介します
https://qiita.com/YosukeM/items/64df6b97acea3adb7f5b

全学計算機でC言語のプログラムから音を出す
https://qiita.com/iciclize/items/84f168c2f6c4a39610c2

## GLSL (OpenGL Shading Language) 
GLSLで音楽（はじめに）https://qiita.com/gaziya5/items/e5d058c20bc75c72b5a2

## matlab
MATLABでMIDI音源を鳴らす（C)
https://qiita.com/lastwaltz/items/0b609fcd0f3b19c988a2

SimulinkでMIDI音源を鳴らす（C)
https://qiita.com/lastwaltz/items/eb0fa3f859b25980098d

Playrecを(できるだけ)最新版でインストールした
https://qiita.com/Y_F_Acoustics/items/08980e4d31dfabfb5fd0

## JavaScript(拡張子 .js)
どんな(音楽の)コードでも翻訳できる(javascriptの)コードを書いてみた
https://qiita.com/comorebi_notes/items/c8b4dde0f6bd91666a5c

JavaScriptだけでMIDIで遊べる！最高に乱暴なWeb MIDI API利用方法
https://qiita.com/tadfmac/items/e26fdf1034ad6dad4504

PowerShellで演奏する電子オルゴール（C#コードあり）
https://qiita.com/gx3n-inue/items/8ca1d987d58235e7f434

JavaScriptでMIDIファイルを解析してみる 1
https://qiita.com/PianoScoreJP/items/2f03ae61d91db0334d45

JavaScriptでMIDIファイルを解析してみる ２
https://qiita.com/PianoScoreJP/items/71db2907b302793544e9

JavaScriptでMIDIファイルを解析してみる 3
https://qiita.com/PianoScoreJP/items/f7f2aa915c4af21df856

JavaScriptでMIDIファイルを解析してみる 4
https://qiita.com/PianoScoreJP/items/480c694f00a4f3afb28e

音を扱うJavaScriptライブラリや記事
https://qiita.com/mohayonao/items/d79e9fc56b4e9c157be1

音オペレーションで革命的なUXを！
https://qiita.com/ykato/items/d64dc1be85fff5495b55

Parrot MiniDroneのMamboを音声でコントロール
https://qiita.com/Syn256/items/dd0d0f4959f44033d6d8

#### 補足：npm
npmでnode.jsのpackageを管理する
https://qiita.com/sinmetal/items/395edf1d195382cfd8bc

npmの基本操作と解説
https://qiita.com/akkey2475/items/4c1eb3e3f36f705c7a1c

### GO
音楽プレイヤー作って音楽を同時ファイルしてみたいhttps://qiita.com/usk81/items/646c457e81ce2955d9ac
### Overtone
Overtoneで音楽プログラミング！
https://qiita.com/awakia/items/4e94b2ce9826abd9e0a1

overtoneを使ってドミソを鳴らす
https://qiita.com/TakesxiSximada/items/bff550ae995a79b31fd7

Overtoneによるオーディオプログラミング例
https://qiita.com/aike@github/items/5465c4dc5888ecc50bcd

### Web Audio
Web Audio APIで、簡単なシンセサイザーを作ってみる / 1: まずは音を鳴らす
https://qiita.com/tomoya_ozawa/items/5f3677a00e538415d9d5

Web Audio APIで、簡単なシンセサイザーを作ってみる / 2: 音をフェードアウトさせる
https://qiita.com/tomoya_ozawa/items/bfd09b436075af916833

ブラウザを誰でも簡単に扱える楽器にしてみた
https://qiita.com/comorebi_notes/items/56e41f3ddc228597450d

PCMシンセの音源部分のブラックボックス化(Web Audio)
https://qiita.com/ryoyakawai/items/7bfd6e2b208bdd96588a

Web Audioでサンプラー作ってみた
https://qiita.com/ryoyakawai/items/c26433bae382fee02a4b

WebAudio で簡単シンセ
https://qiita.com/wakufactory/items/1819609c797ce7d84545

PCMシンセの音源部分のブラックボックス化(Web Audio)
https://qiita.com/ryoyakawai/items/7bfd6e2b208bdd96588a

WebAudioで簡単なドラムシンセを作る
https://qiita.com/gyabo/items/529f1bf7fcbd4f5aa73c

Electronで、VJをしよう！①音とDOMの連動
https://qiita.com/tai_fukaya/items/d7628d653b986a5611c6

WebAudioの基礎まとめ。(NodeSchoolのWeb Audio Schoolをやってみたときの備忘録、レッスン00〜02まで)
https://qiita.com/afroscript10/items/40cadd1945acdaf41b33

## Processing
ProcessingのMinimライブラリでリアルタイム音声合成
https://qiita.com/nubata/items/43f7332c6d9a5c928908

## haskell（拡張子 .hs）
ライブコーディング環境 tidal で音を鳴らすまでの手順
https://qiita.com/tgck/items/07c4a08c55c9cc1d3feb

### TidalCycles(tidal) @yoppa
TidalをWindowsでセットアップする
https://qiita.com/yoppa/items/a0826e6b44c3bc701116

Tidalでライブコーディング! - セットアップ編
https://qiita.com/yoppa/items/41805cc6af62b1047a34

Tidalでライブコーディング! - 実践編
https://qiita.com/yoppa/items/5f1f9a033f1273e33242

Tidalでライブコーディング! - 応用編 : SuperColliderとの連携
https://qiita.com/yoppa/items/ac04af38625e1c9027e5

TidalCycles 0.8 リリース
https://qiita.com/yoppa/items/b195d4014de63686b2e0

TidalCyclesとSuperColliderの連携 - 改訂版
https://qiita.com/yoppa/items/261755e7f82d3387251f

TidalCyclesのインストール2018年版
https://qiita.com/yoppa/items/fe21d7136f8f3aafd55c

## Linux
いまどきのシンセサイザとLinuxについて
https://qiita.com/kurobeniq/items/13d59ed9541010373c45

Linux　USBオーディオデバイスの優先順位を上げる
https://qiita.com/skyfish20ch/items/f0cddcd1abb9e3133543

ubuntuで録音
https://qiita.com/tukiyo3/items/524b435ffaf61199f434

(record: https://manual.atmark-techno.com/armadillo-4x0/armadillo-440_startup_guide_ja-1.1.9/ch08.html)

### Raspbian
Raspberry Pi 3に安価なオーディオI/O基板を繋いでシンセサイザーを作る
https://qiita.com/ring2/items/f601b4128e3459cb3371

（WIP）Raspberry Piで音響合成したい
https://qiita.com/tadfmac/items/ebdf17bc8f811bca6f4f

Raspberry Pi に入れた OpenTalk の音響モデルを換える
https://qiita.com/yokobond/items/7c9ae2284511913bfaaf

Raspberry Piでアコギエフェクターを作ってみた
https://qiita.com/abtc/items/936fd13a5d9b3b4521ed

【快適】Raspberry Pi 3 でつくるAirPlayサーバ【オーディオ】
https://qiita.com/peishnm2/items/280216428a654670ba85

Raspberry Pi で超音波センサーを使って楽器を作る
https://qiita.com/ototonari/items/97c28ff77df133058cde

##Macintosh
Macでwindowsの音量ミキサーのようなアプリごとに音量を調節できる機能をインストールする(BackgroundMusic)
https://qiita.com/xeno01/items/cd7db9ed6101d40cc3bc

Macで音楽を再生してみた時の話
https://qiita.com/syui/items/ccff670488435cd52da0


## SoX(Sound eXchange: http://sox.sourceforge.net/ , rec, play, sox)
今更聞けない目的別soxの使い方
https://qiita.com/mountcedar/items/a04ebc4f8c27c226bbff

SoXチートシート - コマンドラインで音声編集
https://qiita.com/moutend/items/50df1706db53cc07f105

SoXコマンドでサンプリング音楽用の素材を作って遊ぶ(Mac)
https://qiita.com/_atsushisakai/items/02e404aa26d9a62f1b4f

Macから標準出力に録音データを流す方法
https://qiita.com/sutoh/items/5c906a73f7f6881c44fb

## AVR
ESRテスタを活用して555回路で実験(mega328)
https://qiita.com/nanbuwks/items/fd35f0c7a43c5b483fcf

(mega328 https://www.microchip.com/wwwproducts/en/ATmega328)

## MusicXML
ほかの楽譜ソフトから LilyPond ソースに変換する (MusicXML)
https://qiita.com/norisio/items/d3b6b12effac0f494185

GitBookに楽譜(MusicXML)を埋め込む
https://qiita.com/hiroki-uchida/items/c043ba8a2fba3bfb8bc7

Web上で楽譜を扱うライブラリたち
https://qiita.com/KenjiOtsuka/items/066fb31197f8d4094753

## LilyPond(拡張子 .ly)
LilyPondに関する有益な情報源のまとめ
https://qiita.com/suitougreentea/items/1c06006cc3956a66afb3

今月のLilyPond記事まとめ
https://qiita.com/suitougreentea/items/15df3b12e201acc5e0c9

LilyPondでTacetをつくる
https://qiita.com/ef81sp/items/7c3e4d8d28981e522c6e

LilyPondで調号・練習番号・テンポ・拍子などを音楽表記と分離して書く
https://qiita.com/ef81sp/items/4ff66a21b08fa063eedc

Emacs+LilyPond=楽譜が作れる
https://qiita.com/dr_yst/items/0e3877c4b68f98b1a9d1

MediaWikiのページに楽譜を埋め込む
https://qiita.com/narabanow/items/2abaefc520d9ef4a391d

どのLilyPondを使う？lilypond.org公式版vsディストリ配布版
https://qiita.com/trueroad/items/781a40f7a8e741d9168b

LilyPondとGhostscriptとTeXで作る楽譜と文章を組み合わせたドキュメント
https://qiita.com/trueroad/items/d548087d5d7e716f1730

LilyPondのデフォルトフォント
https://qiita.com/trueroad/items/488d3f89bf5319b9efdc

LilyPondで欧文フォントと和文フォントを組み合わせる
https://qiita.com/trueroad/items/6dcd774a5b9081bda7db

LilyPondのフォントにまつわるあれこれ
https://qiita.com/suitougreentea/items/6c7d808d1e7bb58e4b09

LilyPondで増一度を記譜する
https://qiita.com/suitougreentea/items/56708d878f7b38dec67c

SphinxにLilyPondを組み込む
https://qiita.com/suitougreentea/items/b7923eab04c87b589411

LilyPondでListのプロパティ（特にInternalなやつ）をいじる際の注意点
https://qiita.com/comp_to88_ly/items/bd75877d253aa53510c4

近代フランス系で時々使うあのトレモロを書く
https://qiita.com/comp_to88_ly/items/e00feaf5b89dcb4c635a

# WASAPI 
Windowsのオーディオ(WASAPI loopback capture)をandroidで再生する
https://qiita.com/monotaro_ex/items/3423d4255b8d8292407b

# 閑話休題(Coffee Break)
ちょっと前の話。
ある展示会で、ロボットで合奏させる企画があったとのこと。
どうやって同期させるかが話題となったらしい。
色々やって、最後は人間が同時にボタンを押す方法で解決したとのこと。

もし、技術で解決するとしたら、
１）個々の楽器の特性として、開始信号から、顧客に音が伝わるまでの遅延を測定しておくこと。
　　打楽器はすぐに音が鳴るかもしれない。管楽器で空気を送る場合には、個々の楽器で遅延が違う。
２）指揮者（電子指揮棒）から個々の楽器までの遅延を測定しておくこと。
３）時刻同期を定期的に取り、遅延のばらつきを測定しておくこと
４）通信速度を高速化すること
などがあります。担当したかった。費用対効果は１０楽器、１００回くらいまでなら人間が押す方が良いかも。

# MIDI(Musical Instrument Digital Interface)
MIDI 規格 まとめ
https://qiita.com/hideaki_sago/items/90e422ef9e0737b86221

GarageBandからMIDIを出力する
https://qiita.com/nenjiru/items/6bfcd849789a6b415d45

midiの再生(ubuntu)
https://qiita.com/tukiyo3/items/99f1152f408ba6cd8217

nRF51でBLE MIDIをアドバタイズする
https://qiita.com/miyakeryo/items/4d26a5f3f08b60fecadb

pretty_midiでコード進行のMIDIファイル生成
https://qiita.com/a2kiti/items/c0fea6e415bf7d743e16

TouchDesignerでのMIDIのセットアップ
https://qiita.com/joe_ohara/items/25b9aedc5369e3a79f62

いまどきのシンセサイザをPerlで弄る -Perl meets KRONOS-
https://qiita.com/kurobeniq/items/fc75c2d15695a6490f98

goでwindowsでmidi再生
https://qiita.com/ohisama@github/items/e8fb68fa8b311b3509dd

### JAVA MIDI(拡張子 .java)
[JavaFX]ソフトウェアMIDIキーボードを作ってみる 第１回
https://qiita.com/syany/items/75fab773cc8dc4275edb

[JavaFX]ソフトウェアMIDIキーボードを作ってみる 第２回　指をスライドさせて音階を変える
https://qiita.com/syany/items/26433bb9f63d3d512a80

ポケット・ミクをJava/Clojureから操作してみる
https://qiita.com/kurogelee/items/12a175866ef620f3c520

Fluentd対応MIDIキーボードを作ってみた
https://qiita.com/kazunori279/items/208e1526367426b39bbb

YMF825を使ってFM音源でサファリメロディーを響かせてみた
https://qiita.com/nanase/items/93df2fbb3dbb86da5b97

音を制御する - AudioManager
https://qiita.com/KeithYokoma/items/3896f5934478fa560a50

音ゲー作成までの道のり１
https://qiita.com/Gorilla_ZEN/items/f72a065a6a32320e0f5c

###YMF825
YMF825boardをAVRマイコンでMIDI音源化する
https://qiita.com/Shigosen/items/01a7acc8b0e55ce6ec8e

YMF825 レガシーMIDI音源
https://qiita.com/ringorou/items/d36a54de2bf1a5254c3a

YMF825 で和音
https://qiita.com/ringorou/items/d6fd9ce98064c2a64710

YMF825用 ボイスエディタみたいなもの
https://qiita.com/ringorou/items/5e919025d645c6b873aa

YMF825のテストプログラム
https://qiita.com/ringorou/items/29bbab1e29935d66a0e2

### Raspberry PI MIDI
raspberry pi 3 でstretch その15
https://qiita.com/ohisama@github/items/ae6cada37e7e024323e4
SMF (Standard Midi Format)を解析し、MIDIインターフェースに流し込む（プロトタイプ編）
https://qiita.com/ixsiid/items/e3633bc0a594dc5fb972

Raspberry PiとMIDIインターフェースでデバイス開発をする
https://qiita.com/ixsiid/items/d126b1d6a073373c2143

RtMidiライブラリを使って、MIDIインターフェースを作成する
https://qiita.com/ixsiid/items/dfd093732d05260ed174

SMF (Standard Midi Format)を解析し、MIDIインターフェースに流し込む（プロトタイプ編）
https://qiita.com/ixsiid/items/e3633bc0a594dc5fb972

SMF (Standard Midi Format)を解析し、MIDIインターフェースに流し込む（クラス編）
https://qiita.com/ixsiid/items/0d45cbeffeacd7739bc9

Raspberry Piに外部スイッチを扱うドライバを実装する
https://qiita.com/ixsiid/items/6389e71da5cb15ff7a98

### Web MIDI
Web MIDI APIを触ってみた
https://qiita.com/ShoheiOno/items/34ae96c2563586982490

Web MIDI APIを扱うためのMIDI基礎知識
https://qiita.com/okunokentaro/items/efaeb1124591e84fe9d3

WebMIDI MIDIマッピングを製作
https://qiita.com/sakai_shinichiro/items/923899384ad2ab9b97fc

Web MIDIとFeature Policy
https://qiita.com/toyoshim/items/b6756f17ad4ea6cfd598

アホみたいなWeb MIDI APIラッパーを更新してたらいろいろと気づいた
https://qiita.com/tadfmac/items/b3bd4f75654f7a07fb02

MIDI input処理テスト
https://qiita.com/ringorou/items/cfd5a108bf89fd6829c4

3時間で自動作曲プログラムを DAW で鳴らす
https://qiita.com/tanikawa/items/3ed44698f3472e6168dc

Web MIDI API による Web アプリと DAW の連携
https://qiita.com/tanikawa/items/1a820f662791077e5df7

Web MIDI APIによるDAW → ブラウザ → DAW連携の方法
https://qiita.com/cat2151/items/507bdb4d78e4ae369d02

Web MIDIを例にChromeにAPIを追加する手順概要を追ってみる
https://qiita.com/toyoshim/items/1b02e6ec5728da1aef3f

Web MIDI APIでシンセサイザーの入力を受け取ってみた
https://qiita.com/uplight_max/items/a1b921c4c70d5943d69b

Web based synthesizers supporting Web MIDI
https://qiita.com/toyoshim/items/760c4653370f0ba11fb1

Web Music Developers JP Meetup #1 で自分が気になったところのメモ
https://qiita.com/kubosho_/items/0bf697de12ba37ef9ad1

### PIC MIDI
PIC で MIDI の送受信 - 1. MIDI 送受信の回路
https://qiita.com/qtsoundlab/items/6fabef1d4317ec6a9597

PIC で MIDI の送受信 - 2. MIDI の送信
https://qiita.com/qtsoundlab/items/806db89b2039d6cf1d3e

PIC で MIDI の送受信 - 3. MIDI の受信
https://qiita.com/qtsoundlab/items/6d6e834f7f5465c99109

### Arduino MIDI
Electone × MIDI × Arduino
https://qiita.com/yudai220/items/b0b3dc6a8293780d5be2

Arduino MIDI Library の使い方
https://qiita.com/yudai220/items/3bde9461f282d56d1ac2

ArduinoでMIDI Pitchbendの値を真っ正直に計算してみる
https://qiita.com/ringorou/items/f648d72ef39112ce524e

超簡単！Arduino UNOをMIDIコントローラーにしよう！ <Arduino MIDI Library 4.2対応版>
https://qiita.com/tadfmac/items/9136f47ae1eea99a4ef7

Arduino Leonardo/MicroでもMIDI使いたい。
https://qiita.com/tadfmac/items/d685dae3e46d570386c3

Arduinoを使ってWeb MIDI APIから制御可能なUSB MIDIデバイスを自作する（MIDIUSB編）
https://qiita.com/tadfmac/items/8b532134247492427a43

Arduino MIDI in Neopix control.
https://qiita.com/ShooEgg/items/e29696e7212b4927bf5a

ArduinoでUSB MIDI メモ
https://qiita.com/ttatsf/items/4e05c1aece1749db2202

Mocoを使ったArduinoのUSB-MIDI化
https://qiita.com/yasuraok/items/8ae995b7484e140b071f

ジャイロセンサーでMIDIエフェクター(Arduino利用）
https://qiita.com/imauji/items/345f7ab6ecd9b1a33dc6

arduino+mozziでエフェクター付ミキサー製作
https://qiita.com/skyfish20ch/items/4668314618f3e4f0a1bf

arduino+mozziでステップシーケンサーっぽいシンセサイザー製作
https://qiita.com/skyfish20ch/items/8f0eb8bc48d0d4e5258e

arduino+mozziでドラムシンセサイザー（？）を作ってみた
https://qiita.com/skyfish20ch/items/675fdeaefc623e3bab9f

littleBits Arduinoを使ってハマったこと
https://qiita.com/bakuonboogie/items/ef715e773de817569d65

Arduinoで作るフットスイッチ・ペダルMIDIインターフェイス
https://qiita.com/emahub/items/8209b5606934ab60cc6f

Arduino UNOで作る一番簡単なMIDI音源
https://qiita.com/tadfmac/items/443207986039f48c578a

##Arduino
[WIP] Arduinoで音を出したい（メモ）
https://qiita.com/tadfmac/items/7fb26596fe6240959c48

【自作】ArduinoとMozziでつくるクラドニ図形【簡単】
https://qiita.com/peishnm2/items/26d9d90020e75fefd5db

【変態】ArduinoとMozziでうねうね動くクラドニ図形【動的】
https://qiita.com/peishnm2/items/a484966fe9a95ed6fcd4

# 追伸(post script)
音楽を利用したソフトウェアについての仕事は何件か。

１）PlayStationのゲームを初めて作られた会社への音関係のデータの変換の支援。
２）地下鉄２５周年記念で名古屋市科学館での展示でパソコンによる択一問題の制作で、音関係を含む。
三択、四択、五択クイズソフトの作成
https://qiita.com/kaizen_nagoya/items/7c19ead85cbf80b5aa2a

３）ISO 9000品質管理マニュアルの動画作成にあたって動画編集、媒体変換。
４）岐阜大学の大学院の非常勤講師として特別講義で音関係の信号処理の前座としてタイマ割り込みなどを担当
　遅延測定が専門のため。
５）大学の電気系の学科のmidi関係卒業論文の指導

学生が３人ほどmidiを題材に卒論をかかれました。

一人は家業がカラオケだそうで、midiを知っていると何かと役立つのが目的でした。

カラオケシステムにおける画面と曲のマッチング,岩田和也, 小川清, 電気関係学会東海支部連合大会, 1994年

二人は音楽活動をされていて、midiはお手の物で、こちらが色々と教えてもらったという感じです。

音楽サーチエンジン用シソーラスの設計, 高橋和史, 太田勝覚, 小川清, 電気関係学会東海支部連合大会講演論文集 1996

 音楽用サーチエンジンの基本設計 ,太田勝覚, 高橋和史, 小川清 , 電気関係学会東海支部連合大会講演論文集 1996

音楽検索エンジン用シソーラスの詳細設計
太田勝覚，小川清，高橋和史, 言語処理学会第8回年次大会, 1997
http://www.anlp.jp/proceedings/annual_meeting/1997/pdf_dir/A5-4.pdf

二人にはとても感謝しています。

今は、津軽三味線の名手が、phthonで音楽関係のプログラミングをしているのを毎週reviewさせていただいています。

ちょっと前は、BGMを含むゲームプログラミングのreviewを毎週していました。
https://www.youtube.com/channel/UCOszdioq1Qa16aTpJde_c4A

reviewしてたのは限定公開なので上記にはありませんが、推測は可能なので記載します。

楽譜ソフトはFinaleを使っています。Filale関連の記事が少ないですね。
そのうち書きます。ライセンスを持っている会社がよく変わったりして、いつどうバージョンアップしたらいいかが迷います。

音楽映画で英語勉強
https://qiita.com/kaizen_nagoya/items/7c37e4502f2f785ab104

自分の持っている音楽映画を貸したりして、英語と音楽とプログラムの均衡が取れるような努力もしたりしています。プログラミングが英語単語をよく使うので、、、

## おまけ(Additional Information)
十台で与謝野晶子の短歌と、石川啄木の詩を引用して詩集を出したことがあります。

20歳の頃から四十数年、プログラムは詩(poem)のように書こうを合言葉にプログラマをしてきました。

数年前には「計画者(programmer)の一日」という歌集を発行しました。

音響の勉強の後、無線の勉強を始めました。

放送局に就職したかったためです。
放送局には第1級無線技術が必要で資格を取りました。
無線も音響と並ぶ、電子工作の中心の一つです。

# 参考文献(reference)
ここに掲載するのは自分が参考にしてきたものです。現在のシステムに対応していないかもしれません。御免なさい。URLのamazonには感想等は記載済

初等ラジオ教科書, 大浦 一行, オーム社, 1951-1970
https://www.amazon.co.jp/dp/B000JAA8AS/

ディジタル信号処理と制御, 木村英紀, 昭晃堂 ,1982
https://www.amazon.co.jp/dp/4785611103/

コンピュータと音楽, コンピュータ・サイエンス誌　bit別冊, 音楽情報科学研究会, 1987
https://www.amazon.co.jp/dp/B07CG7DC1X/

トランジスタ技術SPECIAL No.38 (Z80ボードでコンピューター・ミュージック) 1993, CQ出版社 (編集)
https://www.amazon.co.jp/dp/B00MA6LFGK/

音響映像マニュアル、リットーミュージック, 1994-
https://www.amazon.co.jp/dp/4845602962/

マルチメディア時代のディジタル放送技術事典 NHK放送技術研究所, 1994
https://www.amazon.co.jp/dp/4621039687/

Digitanl Signal Processing and the Microcontroller, Dale Grover, John Deller,  Prentice Hall, 1998
https://www.amazon.co.jp/dp/0130813486/

MIDIブック (DTM HANDBOOKS),ジェフ-ロナ, リットーミュージック, 1998
https://www.amazon.co.jp/dp/4845600706/

C++ MIDIプログラミング, Paul Messick, 翔泳社, 1999
https://www.amazon.co.jp/dp/4894711036/

DSP C プログラミング入門,  瀬谷 啓介, 技術評論社, 2000
https://www.amazon.co.jp/DSPCプログラミング入門―組み込みシステムコーディングの基礎-瀬谷-啓介/dp/4774110787/ref=la_B004LQLU30_1_1?s=books&ie=UTF8&qid=1532329394&sr=1-1

DTM MAGAZINE 増刊 CV (キャラクターボーカル) 01 初音ミク 2008年 01月号
https://www.amazon.co.jp/dp/B000YKXQTI/

ナゴヤディレクターズバンド コンサート・マーチ『椛＜はなのき＞』 第50回記念定期演奏会,  2019年7月13日（土)：愛知県芸術劇場 コンサートホール
[![ナゴヤディレクターズバンド コンサート・マーチ『椛＜はなのき＞』 第50回記念定期演奏会
]
(http://img.youtube.com/vi/PAMmQw_IXCo/0.jpg)](https://www.youtube.com/watch?v=PAMmQw_IXCo)

# 関連資料(related material)
音楽　一覧(0) 
https://qiita.com/kaizen_nagoya/items/b6e5f42bbfe3bbe40f5d

作詞：松本隆。作曲：細野晴臣「風をあつめて」を計画書として事業展開, 現在「coverを集めて」 AUTOSAR(40)
https://qiita.com/kaizen_nagoya/items/92365c542714f27e5658

「駄目だ、もう何もできない」と思った時にするかもしれないこと 音楽(26) https://qiita.com/kaizen_nagoya/items/d672e461a75728dd5e74

仕様を自然言語で書くのやめませんか。「言葉にすれば」「嘘に染まる」水谷啓二・ダンシングオールナイト もんたよしのり 音楽(14) https://qiita.com/kaizen_nagoya/items/dd6ee74818f1a1a1c918

音楽(13) 映画で英語勉強（目標100作品：現在62）英語(21) 仮説(108) https://qiita.com/kaizen_nagoya/items/7c37e4502f2f785ab104

はっぴいえんど（作曲:大瀧詠一, 細野晴臣, 鈴木茂, 作詞:松本隆）をダイヤトーンで聴く 音楽(3) https://qiita.com/kaizen_nagoya/items/cfa82aa34fcb7cf7f6d4

Hotel California による音響(屋)入門 音楽(21) https://qiita.com/kaizen_nagoya/items/227df61565be6baea5db

## youtube

電子ピアノ動画：IT教育に役立つ　音楽(11) https://qiita.com/kaizen_nagoya/items/97bcb5467232e27f0f51


💚さいごまでおよみいただきありがとうございました。音楽(6)https://qiita.com/kaizen_nagoya/items/3387ded65f55a8303817

Idol en español (Oshi no Ko: Yoasobi) Lista de Youtube. Mirar, bien y mirar/seguir.musica(10)　https://qiita.com/kaizen_nagoya/items/13b6c604135a12e9f263

Artists for Haiti - Somos El Mundo (We Are The World) Video Oficial, musica(22)　https://qiita.com/kaizen_nagoya/items/109d415a3562192050dd

Hotel California による音響(屋)入門 音楽(21) https://qiita.com/kaizen_nagoya/items/227df61565be6baea5db

みの「にほんのうた」を プログラマ に 推す 三視点 音楽(4) https://qiita.com/kaizen_nagoya/items/a794b6719491c92e0215

博論の乗り。音楽(18)で再起なるか https://qiita.com/kaizen_nagoya/items/3c454674f0bf61236bb4	

博論の乗りで「にほんのうた」を論文にする 音楽(5)　https://qiita.com/kaizen_nagoya/items/4b40d8b8873aa7649a85

博論の乗りで「電子ピアノ」を論文にするには 音楽(20) https://qiita.com/kaizen_nagoya/items/58113ac4b8e28ccbd16c

Youtube mentors and friends 音楽(19) https://qiita.com/kaizen_nagoya/items/7910adb6e445dba7871d

## others

「ゼロから作るDeep Learning ２自然言語処理編」読書会に参加する前に読んで置くとよい資料とプログラム
https://qiita.com/kaizen_nagoya/items/537b1810265bbbc70e73

プログラミング言語教育のXYZ
https://qiita.com/kaizen_nagoya/items/1950c5810fb5c0b07be4

Qiitaで組立語(assembler)・機械語(machine language)・CPU＜アセンブラへの道＞
https://qiita.com/kaizen_nagoya/items/46f2333c2647b0e692b2

C言語（C++)に対する誤解、曲解、無理解、爽快。
https://qiita.com/kaizen_nagoya/items/3f3992c9722c1cee2e3a

量子コンピュータプログラムへの道
https://qiita.com/kaizen_nagoya/items/37c90488c87bbe9f2d71

ベートーヴェン: 交響曲 第9番 
https://github.com/kaizen-nagoya/Open_Source_is_Agile/blob/master/music/beethoven.md
https://bit.ly/2MpEcwS

データサイエンティストの気づき!「勉強だけして仕事に役立てない人。大嫌い!!」『それ自分かも?』ってなった!!!
https://qiita.com/kaizen_nagoya/items/d85830d58d8dd7f71d07

## 一覧
物理記事　上位100
https://qiita.com/kaizen_nagoya/items/66e90fe31fbe3facc6ff

量子(0) 計算機, 量子力学 
https://qiita.com/kaizen_nagoya/items/1cd954cb0eed92879fd4

数学関連記事１００
https://qiita.com/kaizen_nagoya/items/d8dadb49a6397e854c6d

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

プログラマによる、プログラマのための、統計(0)と確率のプログラミングとその後
https://qiita.com/kaizen_nagoya/items/6e9897eb641268766909

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
This article is an individual impression based on the individual's experience. It has nothing to do with the organization or business to which I currently belong.
### 文書履歴(document history)
ver. 0.10 初稿,記事約50, 20180722
ver. 0.11 項目追記、「なお、プログラマ目線なため、プログラミング言語等で分類しています。アプリが採用している技術に思い違いがあるかもしれません。分類に違和感がある場合には、おしらせくださると幸いです。」追記, 記事約100, 20180723午前
ver. 0.12 言語ごとに拡張子を例示, vocaloid, Game music, SoX, YMF825, TidalCycles(tidal) @yoppa　など項目追記 20180723午後
ver. 0.13  参考文献,Unity, Faust, VST, FoxDot追記 20180724
ver. 0.14 R, MusicXML, LilyPond追記。JavaScript修正 20180803
ver. 0.15 LilyPond項目追記 20180805
ver. 0.16 songle, UPIC追記 20180815
ver. 0.17 音響, JUCE追記 20190120
ver. 0.18 聴覚、C# 資料追記 20190304 昼
ver. 0.19 プログラミングと音楽の違い例（キーボード）追記 20190304 午後
ver. 0.20 資料追記 20190304 夜
ver. 0.21 参考文献追記 20190426
ver. 0.22 微分・積分追記 20190430
ver. 0.23 Swift追記 20190503
ver. 0.24 web audio追記　20190506
ver. 0.25 Web midi追記 20190519
ver. 0.26 標題追記 20190522
ver. 0.27 URL追記 20190616
ver. 0.28 URL追記 20190617
ver. 0.29 K-on!追記 20190730
ver. 0.30 ナゴヤディレクターズバンド コンサート・マーチ『椛＜はなのき＞』 第50回記念定期演奏会, 2019年7月13日（土)：愛知県芸術劇場 コンサートホールYoutube動画 https://bit.ly/35U19zQ 追記 20190819
ver. 0.31 ベートーヴェン: 交響曲 第9番 https://bit.ly/2MpEcwS 追記 20191224
ver. 0.32 音のプログラムから始める追記　20200123 
ver. 0.33 URL追記 20200208
ver. 0.34 まえがき(preface)追記 20200301
ver. 0.35 まえがきを前史(biography)に変更し前書き書き下ろし。オーディオプログラミング言語 Advent Calendar 2020記載。 20201226
ver. 0.36 ある日の午後　音楽、オープンソース、心理学 20210108
ver. 0.37 表現補正 20210514
ver. 0.38 公開算譜(open source)は楽しいの (just want to have fun.)から参照 20211024
ver. 0.39 URL追記 20220918
ver. 0.40 ありがとう追記　20230413
### 最後までおよみいただきありがとうございました。
いいね　💚、フォローをお願いします。
####  Thank you very much for reading to the last sentence.
Please press the like icon 💚　and follow me for your happy life.
<a href="http://b.hatena.ne.jp/entry/s/qiita.com/items/33c9f33581e6886f8ad8/" class="hatena-bookmark-button" data-hatena-bookmark-layout="vertical-normal" data-hatena-bookmark-lang="ja" title="このエントリーをはてなブックマークに追加"><img src="https://b.st-hatena.com/images/entry-button/button-only@2x.png" alt="このエントリーをはてなブックマークに追加" width="20" height="20" style="border: none;" /></a><script type="text/javascript" src="https://b.st-hatena.com/js/bookmark_button.js" charset="utf-8" async="async"></script>
http://b.hatena.ne.jp/guide/bbutton
