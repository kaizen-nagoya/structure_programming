---
title: プログラマが高校化学を勉強する訳 水(131)
tags: 化学 電池 物理 数学 生物
author: kaizen_nagoya
slide: false
---
# 背景(back ground)
プログラマのための化学入門
https://qiita.com/kaizen_nagoya/items/19da0013d82646563aa8

化学を取り組もうとした３つのきっかけ 水(130) 
https://qiita.com/kaizen_nagoya/items/875905f02d2039efa7e2

プログラマが電池設計に寄与できるプログラムを書くために
https://qiita.com/kaizen_nagoya/items/73e44e4f1ebf161f58cc

自動車の電源・電池と計算機・通信
https://qiita.com/kaizen_nagoya/items/f749754c2c9a15d2b70e

物質系の資料を整理するのに何度も失敗した。量子(73) Researchmap(40) 水(129) 
https://qiita.com/kaizen_nagoya/items/1894a0a64865f0a2d916

という記事を整理しはじめて、ふっと思い出した。
高校の頃、化学をほとんど勉強しなかった。
化学の試験が記憶問題ばかりだったのが嫌だと思い込んでいたのかもしれない。
記憶は機械がやればいい仕事で、早くそういう時代が来て欲しいと思ったかどうかは定かではない。
関数電卓も使ったことがなく、携帯電話すらなく、計算はそろばんか計算尺でやっていた時代だった。1970何頃。

# 作業(workbook)
化学の高校教科書に、関連しそうな化学のプログラミングのURLをつけていき、すこしづつ動かしてみる。

小学校でプログラミングを覚え
中学校で物理のプログラミングを極めたら、
高校で数学か化学か、生物で成果を出せると思う。

そうしたら、大学はいろんなところから推薦入学の口が来るに違いない。
８歳からプログラムを始めたら、１８歳で一流のプロになっているはずだから。

のちほど、
「プログラマが高校数学を勉強する訳」
「プログラマが高校生物を勉強する訳」
というのも書こうと思う。
その前に、
「プログラマが高校物理を中学の間に勉強する訳」
というのを書かねば。

## 電池(~~battery~~ cells)
例えば、電気自動車は電池が命。
電池の性能で航続距離が決まる。
電動機の能力は、搭載できる電池で上限が決まってしまうかもしれない。

電池は、化学作用が基本。
電池の材料の振る舞いである化学が分からずに、電池を制御しようとすると、発熱させて煙が出たり、ちょっとした爆発をすることがあるかもしれない。

そんなところに興味を持って読んでみるとよいかも。

## 生命(biology)

生命体は有機化合物でできている。
有機化合物の原理を知っていないと、
生命を精神論で御そうとすることになるかもしれない。

生命科学の入り口は、物理と化学から。
物理ー＞化学ー＞生物の順に勉強するとすごくよく分かるかも。

遺伝子解析は量子力学的な知見がやくだつかもかも。
遺伝子解析、遺伝子機能解析
https://qiita.com/kaizen_nagoya/items/150646f72c55a36f8c39

## 元素記号

元素記号は、いろいろな略号、短縮名と重複する。
プログラムの変数名を決める場合に、元素記号となるべく重ならないように決めると、化学系のプログラムライブラリと共存することがあっても、可読性が下がらないようにできるかもしれない。

元素名は、英単語も知っていると、元素記号を見て、英単語が言えると、意思疎通が容易になる局面があるかもしれない。

下記教科書の周期表に、英語名の記載がなかった。
ここに記載してみる。


# 東京書籍　化学　高校教科書
![51Vbozp1JoL._SX356_BO1,204,203,200_.jpg](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/51423/848047e6-5b05-da70-e776-fc04f1eaa799.jpeg)
https://ten.tokyo-shoseki.co.jp/text/hs/science/book008/
https://www.amazon.co.jp/dp/4487165539/

少し古い2012年版で勉強している。現状の2017年版とだいぶ違う点は、（）書きなどで印をつける。

章節のみだしには、英語を付記しているのは助かる。
2012年版には最上位の見出しに英語がない。なぜなんだろう。元素表に英語がないのは残念だ。なぜ、その文字で表しているかが分かった方が、馴染みが進む気がする。

ちょっと読んで気がついたことがある。
物理を勉強してから化学を勉強すれば、
すごくよくわかったのにということ。

物理を勉強してから、数学を勉強したときに思ったことと似ている。

物理原則を知っていれば、数学で解く意味が分かる。
物理原則を知っていれば、化学で解ける問題がある。

数学系の学科の方は、数学やってから物理をやればいいと思っているらしい。
物理やってから数学やれば、すごく簡単なのに。
物理は、数学の一部だけ使ってうまく答えを導く。
熱力学でも、電磁気学でも。

そして、物理法則をプログラムで組んで解いてからなら、
数学も化学もどんとこいっていう気になる。

原理で理解するのではなく、
プログラムを組んで、数値的にも解がだせるようになると、
俄然自信が湧いてくるのかもしれない。

おもな見出し項目を一覧にして、英語表記のあるものはそのまま。ないものは、順次追記予定。
元素名が出て来たら、元素記号（番号）を追記中。

地球、宇宙の元素の比率を知っていれば、もっと興味を持ったかもしれないと思い、補足記事を記載中。
元素の語源も調べ中。

元素
https://qiita.com/kaizen_nagoya/items/35e686e530979ec802e9

英語(3) 仮説・検証(88)用語の衝突(用語・用例募集中)
https://qiita.com/kaizen_nagoya/items/6a8eb7ffaa45eeb16624

英語(2) まぎらわしい、間違えやすい、行き違いの多い略号worst 10(候補24)
https://qiita.com/kaizen_nagoya/items/0bff5dbb72208053489b


# 1編　物質の状態(と平衡):State of Matter
### 1章　物質の状態:State of Matter
> 物質は原子、イオン、分子などの粒子の集合体で、温度・圧力が決まると、個体・液体・気体のいずれかの状態をとる

物体 状態遷移 by plantUML
https://qiita.com/kaizen_nagoya/items/a82408364b850dfe0136

疑問：高校化学ではプラズマは扱わないのだろうか。扱わないとすれば、その理由は？
流体力学でプラズマが扱えるのなら、高校物理で扱ってもいいかも。

#### 1.1.1 物質の三態:The three state of matter:
>　　状態変化とエネルギー
　　状態変化と分子間力

#### 1.1.2 気体・液体間の状態変化:Change of state between gas and liquid: 
>　　気体の圧力
水銀柱による圧力の測定
　　気液平衡と蒸気圧
　　沸騰
「圧力を下げた条件での水の沸騰」
　　状態図

### 2章　気体の性質:Property of gases
#### 1.2.1 気体:Gases
>　　ボイルの法則
　　シャルルの法則
　　ボイル・シャルルの法則

「気体の体積の変化」
http://www.keirinkan.com/kori/kori_chemistry/kori_chemistry_2_kaitei/contents/ch-2/1-bu/1-3-1.htm

basic 気体の体積の変化 プログラム　どうやって動かせばいい？
https://qiita.com/kaizen_nagoya/items/676c1eb1c4b9ad0e5be8

#### 1.2.2 気体の状態方程式: the ideal gas law 
>　　気体の状態方程式
　　気体の分子量
「物質の分子量測定」
　　混合気体
　　理想気体と実在気体
実在気体と理想気体のずれ
実在気体の状態変化
実在気体の状態方程式

### 3章　溶液の性質: Properties of solutions
#### 1.3.1 溶解: Dissolution
>　　溶解のしくみ
「液体どうしの混ざり方を調べよう」
　　固体の溶解度
　　溶液の濃度
　　気体の溶解度

#### 1.3.2 希薄溶液の性質: Colligative properties
>　　蒸気圧降下と沸点上昇
ラウールの法則
　　凝固点降下
　　沸点上昇・凝固点降下と分子量
　　浸透圧
　　浸透圧と分子量

#### 1.3.3 コロイド:Colloids
>　　コロイド粒子
　　コロイド溶液の性質
　　コロイド溶液の種類
「コロイドの性質」

### 4章　固体の構造:Structures of solids
#### 1.4.1 結晶:crystals
>　　結晶の種類

#### 1.4.2 金属結晶の構造:Structures of metallic crystals
>　　金属結晶の構造
最密構造
「金属結晶のモデルをつくってみよう」
充塡率

#### 1.4.3 イオン結晶の構造:Structures of ionic crystals
>　　イオン結晶の構造

#### 1.4.4 そのほかの結晶と非晶質:other types of solids
>分子結晶
共有結合の結晶
ダイヤモンドの結晶の単位格子と密度
　　非晶質
イオン結晶の安定性
「イオン・金属・分子からなる物質の性質」
「モル凝固点降下と溶質分子の会合」

# 2編　化学反応とエネルギー:Chemical reactions and energy 
### 1章　化学反応と熱・光:Chemical reactions and heat/light
#### 2.1.1. 反応熱と熱化学方程式:Heat of reaction and thermochemical equation
>　　化学反応と熱の出入り
「発熱反応と吸熱反応を調べよう」
　　熱化学方程式
　　いろいろな反応熱

#### 2.1.2 ヘスの法則:Hes's law
>　　ヘスの法則
　　生成熱と反応熱の関係
　　結合エネルギー

#### 2.1.3 化学反応と光（光とエネルギー) Chemical reactions and light
>　　光とエネルギー
　　物質と光
格子エネルギー

### 2章　電池と電気分解: electrochemistry
#### 2.2.1 電池:cells
>　　電池の原理
　　実用電池
「燃料電池で発電してみよう」
リチウム[3:Li]イオン電池のしくみ
標準電極電位

#### 2.2.2 電気分解:Electrolysis
>　　電気分解
　　電気分解における反応
「塩化銅(Ⅱ)[CuCl2]を電気分解してみよう」
金属イオンの電気分解と陰極の反応
電気分解の法則
電気分解槽の接続方法
「ヘスの法則」
「電気分解」
「ファラデー定数を求める」

## 3編　化学反応の速さと平衡 Reaction rate and Chemical equilibria
### 1章　化学反応の速さ:Reaction rate
#### 3.1.1 反応の速さ:Reaction rate
>　　速い反応と遅い反応
　　反応の速さの表し方

#### 3.1.2 反応速度を変える(決める)条件:Rare laws
>　　反応速度と濃度
反応速度定数の求め方
　　反応速度と温度
「反応速度」
反応速度と触媒
固体触媒のはたらき方
　　反応速度を変えるほかの要因

#### 3.1.3 反応のしくみ:Reaction mechanism
>　　粒子の衝突
複合反応と律速段階
　　活性化エネルギー
活性化エネルギーと温度

### 2章　化学平衡:Chemical equilibria
#### 3.2.1 可逆反応と化学平衡:Reversible reactions and chemical equiliblia
>　　可逆反応と不可逆反応
　　化学平衡
　　平衡定数と化学平衡の法則
反応速度定数と平衡定数
平衡定数と気体の分圧の関係

#### 3.2.2 平衡の移動:Equilibrium shift
>　　平衡移動の原理
　　濃度変化と平衡の移動
濃度変化による平衡のしくみ
　　圧力変化と平衡の移動
圧力変化による平衡の移動のしくみ
反応に関わらない成分を加えたときの平衡移動
　　温度変化と平衡の移動
温度変化による平衡の移動のしくみ
　　触媒と平衡の移動
「平衡の移動」
　　ルシャトリエの原理の化学工業への応用
化学反応の進む方向

### 3章　水溶液中の化学平衡:Chemical equilibrium in aqueous solution
#### 3.3.1 電離平衡:Electrolytic dissociation equilibrium 
>　　電離平衡
「酢酸[C2H4O2]の電離平衡と電離定数」
水[H2O]の電離平衡とpH

#### 3.3.2 塩の水への溶解: Dissolution of salts in water
>塩の加水分解
加水分解を受けやすい酸とは
　　緩衝液とpH
「緩衝液」
緩衝液の例
緩衝作用と滴定曲線
中和点のpHの算出法
「弱酸・強塩基の滴定曲線を作成しよう」
　　溶解平衡
硫化水素[H2S]の電離平衡
複数のイオンの溶解度積の差を利用した塩化物イオンの定量法
「反応速度式と活性化エネルギー」
「平衡の移動」
「難溶性塩の溶解平衡」

# 4編　無機物質:mineral material　
### 1章　周期表と元素:The periodic table
#### 4.1.1 周期表と元素:The periodic table
>　　元素の分類

### 2章　非金属元素の単体と化合物:the chemistry of non-metals
#### 4.2.1 水素と希ガス（貴ガス）:Hydrogen and rare gases
>　　水素[1:H]
「水素を発生させよう」
　　希ガス（貴ガス）

#### 4.2.2 ハロゲンとその化合物:the chemistry of halogens
>　　ハロゲン
　　ハロゲンの化合物

#### 4.2.3 酸素・硫黄とその化合物: the chemistry of oxygen and sulfur
>　　酸素[8:O]
「酸素を発生させよう」
　　酸化物の性質とオキソ酸
「酸化物の性質を調べよう」
　　硫黄[16:S]とその化合物
「二酸化硫黄の性質を調べよう」
硫酸の製造と発煙硫酸

#### 4.2.4 窒素・リンとその化合物:the chemistry of nitrogen and phosphorus
>　　窒素とその化合物
「一酸化窒素の性質を調べよう」
　　リンとその化合物

#### 4.2.5 炭素・ケイ素とその化合物:the chemistry of carbon and silicon
>　　炭素[6:C]とその化合物
　　ケイ素[14:Si]とその化合物
さまざまな無機化合物とオクテット則
気体の発生と捕集方法

### 3章　典型金属元素の単体と化合物:the chemistry of main group metals
#### 4.3.1 アルカリ金属とその化合物:alkali metals
>　　アルカリ金属
　　ナトリウム[11:Na]の化合物
「アルカリ金属の化合物の性質を調べよう」

#### 4.3.2 2族元素とその化合物:the group 2 elements
>　　2族元素の単体
　　2族元素の化合物

#### 4.3.3  1，2族以外の典型金属元素とその化合物:the group 12, 13 and 14 metals
>　　アルミニウム[13:Al]とその化合物
「アルミニウムの単体と化合物の性質を調べよう」
　　亜鉛[30:Zn]とその化合物
「亜鉛の単体と化合物の性質を調べよう」
　　水銀[80:Hg]とその化合物
　　スズ[50:Sn]・鉛[82:Pb]とその化合物

### 4章　遷移元素の単体と化合物: transition metals
#### 4.4.1 遷移元素とその化合物: transition metals
　　遷移元素の特徴
　　錯イオン
　　鉄[26:Fe]とその化合物
「鉄イオンの性質を調べよう」
　　銅[29:Cu]とその化合物
硫酸銅（Ⅱ）五水和物の構造
　　銀[47:Ag]とその化合物
　　クロム[24:Cr]とその化合物
　　マンガン[25:Mn]とその化合物

#### 4.4.2 金属イオンの分離・確認:separation and identification of metal ions
>　　塩化物イオン[Cl-]との反応
　　硫化物イオン[S2-]との反応
　　水酸化物イオンと[OH-]との反応
　　炭酸イオン[CO32-]・硫酸イオン[SO42-]との反応
金属イオンの反応のまとめ
　　金属イオンの系統分離

### 5章　無機物質と人間生活:inorganic materials in our lives
#### 4.5.1 金属:metals
>　　金属の分類と製錬
　　金属の利用
「低融点合金（ウッド合金）をつくろう」

#### 4.5.2 セラミックス:Ceramics
>　　セラミックス
　　ガラス
　　陶磁器とセメント
　　ファインセラミックス
「塩素[17]Cl]の性質」
「アンモニア[NH3]の性質」
「カルシウム[20:Ca]の単体と化合物」
「銅の化合物」
「銀の化合物」
「金属イオンの反応」
「金属イオンの分離と確認」
「さまざまな色のガラスをつくろう」

# 5編　有機化合物:organic compounds
### 1章　有機化合物の特徴と構造:properties and structures of organic compounds
#### 5.1.1 有機化合物の特徴:properties of organic compounds
>　　有機化合物と無機化合物
　　有機化合物の多様性と特徴
　　炭化水素の分類
　　官能基による分類
　　有機化合物の表し方
　　異性体

#### 5 .1.2 有機化合物の構造式の決定:determination of chemical structures of organic compounds
>　　構造式決定の手順
「スクロースの成分元素を調べよう」
質量分析とNMR

### 2章　炭化水素:hydrocarbons
#### 5.2.1 飽和炭化水素:saturated hydrocarbons
>　　アルカンの構造
アルカンの性質
分子の形と沸点，融点
アルカンの反応
シクロアルカン
シクロヘキサンの構造

#### 5.2.2 不飽和炭化水素:unsaturated hydrocarbons
>　　アルケンの構造
　　シス-トランス異性体
　　アルケンの製法と性質
マルコフニコフの法則
アルケンの酸化反応
　　アルキン
エノール形とケト形
「アセチレンの性質を調べよう」
炭化水素の分子式と構造
共有結合の種類

###　3章　アルコールと関連化合物(酸素を含む有機化合物):organic compounds containing oxygen
#### 5.3.1 アルコールとエーテル:Alcohols and ethers
>　　アルコールの構造と分類
　　アルコールの性質
ブタノールの融点・沸点の高低
　　アルコールの反応
「アルコールの性質を調べよう」
脱離反応の方向性（ザイツェフの法則）
　　さまざまなアルコール
エーテル

#### 5.3.2 アルデヒドとケトン:Aldehydes and ketones
>　　カルボニル化合物
　　アルデヒド
　　ケトン
「ヨードホルム反応」

#### 5.3.3 カルボン酸とエステル:Carboxylic acids and esters
>　　カルボン酸の構造と分類
　　カルボン酸の性質
　　さまざまなカルボン酸
マレイン酸とフマル酸の融点
　　鏡像異性体
旋光性について
　　エステル
エステル化の反応機構

#### 5.3.4 油脂とセッケン:fats and soaps
>　　油脂
　　セッケン
　　界面活性剤
　　合成洗剤
油脂のけん化価とヨウ素価
エステル化の反応機構

### ４章　芳香族化合物:aromatic compounds
#### 5.4.1 芳香族炭化水素:aromatic hydrocarbons
>　　ベンゼン
ベンゼン環の安定性
　　芳香族炭化水素
　　芳香族炭化水素の反応
「ニトロベンゼンを合成しよう」

#### 5.4.2 酸素を含む芳香族化合物:aromatic compounds containing oxygen atoms
>　　フェノール類
　　フェノール類の性質
　　フェノール
芳香族化合物の置換基の配向性
　　芳香族カルボン酸
「サリチル酸メチルを合成しよう」

#### 5.4.3 窒素を含む芳香族化合物:aromatic compounds containing nitrogen atoms
>　　芳香族アミン
　　アゾ化合物
ニトロベンゼンからアニリンを合成する反応式のつくり方

#### 5.4.4 芳香族化合物の分離:separation of aromatic compounds
>有機化合物と酸化数

### 5章　有機化合物と人間生活: organic compounds and human life
#### 5.5.1 食品:foods
>　　炭水化物
　　タンパク質
　　脂質
ビタミン

#### 5.5.2 医薬品:medicines
>　　医薬品の歴史
「アスピリンとサリチル酸メチルを比べよう」
　　医薬品の種類
　　医薬品の作用

#### 5.5.3 染料:Dyes
>　　染料の分類
　　染色のしくみ
　　合成染料の種類

#### 5.5.4 洗剤:detergents
>　　セッケンと合成洗剤
合成洗剤の種類
洗浄補助剤
「脂肪族炭化水素の性質」
「ホルムアルデヒドの性質」
「酢酸エチルの合成とけん化」
「セッケンをつくり，性質を調べる」
「フェノール類の性質」
「芳香族化合物の分離」
「アニリンの合成」
「アゾ染料の合成」
「ビタミンCの定量」

# 6編　高分子化合物:polymers
### 1章　(天然)高分子化合物:(natural occurring)polymers
#### 6.1.1 (天然)高分子化合物:(natural occurring)polymers
>　　高分子化合物の分類
　　高分子化合物の構造

#### 6.1.2 単糖類・二糖類:sugars
>　　糖の分類
　　単糖類
「グルコースの還元性を調べよう」
　　二糖類

#### 6.1.3 多糖類:polysaccharides
>　　デンプン・グリコーゲン
　　セルロース
　　セルロースの利用
　　再生繊維
　　半合成繊維

#### 6.1.4 アミノ酸:amino acids
>　　アミノ酸の種類
　　アミノ酸の性質・反応
「アミノ酸の電気泳動を調べよう」
等電点の計算
　　ペプチド

#### 6.1.5 タンパク質:proteins
>　　タンパク質の種類
　　タンパク質の構造
　　タンパク質の反応
　　タンパク質の呈色反応
　　酵素

#### 6.1.6 核酸:Nucleic acids
>　　核酸の構成
　　DNAの構造とはたらき
DNAの複製
RNAの種類とはたらき
グルコースの立体異性体
酵素反応の速度

### 2章　合成高分子化合物:synthetic polymers
#### 6.2.1 合成高分子化合物:synthetic polymers
>　　合成高分子の種類
　　単量体の重合反応
　　合成高分子の特徴

#### 6.2.2 合成繊維:syntetic fibers
>　　縮合重合で得られる合成繊維
「ナイロン66を合成しよう」
　　付加重合で得られる合成繊維

#### 6.2.3  プラスチック:Plastics
>　　プラスチックの分類
　　熱可塑性樹脂
　　熱硬化性樹脂
　　イオン交換樹脂

#### 6.2.4 ゴム:Rubbers
>　　天然ゴム
　　合成ゴム
高分子の立体構造と性質
繊維の構造と性質

### 3章　高分子化合物と人間生活:polymers and human life
#### 6.3.1 プラスチック利用の拡大と環境問題:advantage and disadvantage of increasing use plastics
>　　プラスチックの利用の拡大
　　プラスチックの再生処理
「発泡ポリスチレンを溶かしてみよう」
「タンパク質の検出」
「銅アンモニアレーヨンの合成」
「イオン交換樹脂」

# 元素周期表

| |原子番号|元素記号|英語|日本語|原子番号|元素記号|英語|日本語|原子番号|元素記号|英語|日本語|原子番号|元素記号|英語|日本語|原子番号|元素記号|英語|日本語|
|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|
|1|1|H|Hydrogen|水素|3|Li|Lithium|リチウム|11|Na|Sodium|ナトリウム|19|K|Potassium|カリウム|37|Rb|Rubidium|ルビジウム|
|2| | | | |4|Be|Beryllium|ベリリウム|12|Mg|Magnesium|マグネシウム|20|Ca|Calcium|カルシウム|38|Sr|Strontium|ストロンチウム|
|3| | | | | | | | | | | | |21|Sc|Scandium|スカンジウム|39|Y|Yttrium|イットリウム|
|4| | | | | | | | | | | | |22|Ti|Titanium|チタン|40|Zr|Zirconium|ジルコニウム|
|5| | | | | | | | | | | | |23|V|Vanadium|バナジウム|41|Nb|Niobium|ニオブ|
|6| | | | | | | | | | | | |24|Cr|Chromium|クロム|42|Mo|Molybdenum|モリブデン|
|7| | | | | | | | | | | | |25|Mn|Manganese|マンガン|43|Tc|Technetium|テクネチウム|
|8| | | | | | | | | | | | |26|Fe|Iron|鉄|44|Ru|Ruthenium|ルテニウム|
|9| | | | | | | | | | | | |27|Co|Cobalt|コバルト|45|Rh|Rhodium|ロジウム|
|10| | | | | | | | | | | | |28|Ni|Nickel|ニッケル|46|Pd|Palladium|パラジウム|
|11| | | | | | | | | | | | |29|Cu|Copper|銅|47|Ag|Silver|銀|
|12| | | | | | | | | | | | |30|Zn|Zinc|亜鉛|48|Cd|Cadmium|カドミウム|
|13| | | | |5|B|Boron|ホウ素|13|Al|Aluminum|アルミニウム|31|Ga|Gallium|ガリウム|49|In|Indium|インジウム|
|14| | | | |6|C|Carbon|炭素|14|Si|Silicon|ケイ素|32|Ge|Germanium|ゲルマニウム|50|Sn|Tin|スズ|
|15| | | | |7|N|Nitrogen|窒素|15|P|Phosphorus|リン|33|As|Arsenic|ヒ素|51|Sb|Antimony|アンチモン|
|16| | | | |8|O|Oxygen|酸素|16|S|Sulfur|硫黄|34|Se|Selenium|セレン|52|Te|Tellurium|テルル|
|17| | | | |9|F|Fluorine|フッ素|17|Cl|Chlorine|塩素|35|Br|Bromine|臭素|53|I|Iodine|ヨウ素|
|18|2|He|Helium|ヘリウム|10|Ne|Neon|ネオン|18|Ar|Argon|アルゴン|36|Kr|Krypton|クリプトン|54|Xe|Xenon|キセノン|

|原子番号|元素記号|英語|日本語|原子番号|元素記号|英語|日本語|原子番号|元素記号|英語|日本語|原子番号|元素記号|英語|日本語|
|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|
|55|Cs|Cesium|セシウム| | | | |87|Fr|Francium|フランシウム| | | | |
|56|Ba|Barium|バリウム| | | | |88|Ra|Radium|ラジウム| | | | |
|57|La|Lanthanum|ランタン| | | | |89|Ac|Actinium|アクチニウム| | | | |
|58|Ce|Cerium|セリウム|72|Hf|Hafnium|ハフニウム|90|Th|Thorium|トリウム|104|Rf|Rutherfordium|ラザホージウム|
|59|Pr|Praseodymium|プラセオジム|73|Ta|Tantalum|タンタル|91|Pa|Protactinium|プロアクチニウム|105|Db|Dubnium|ドブニウム|
|60|Nd|Neodymium|ネオジム|74|W|Tungsten|タングステン|92|U|Uranium|ウラン|106|Sg|Seaborgium|シーボーギウム|
|61|Pm|Promethium|プロメチウム|75|Re|Rhenium|レニウム|93|Np|Neptunium|ネプツニウム|107|Bh|Bohrium|ボーリウム|
|62|Sm|Samarium|サマリウム|76|Os|Osmium|オスミウム|94|Pu|Plutonium|プルトニウム|108|Hs|Hassium|ハッシウム|
|63|Eu|Europium|ユウロピウム|77|Ir|Iridium|イリジウム|95|Am|Americium|アメリシウム|109|Mt|Meitnerium|マイトネリウム|
|64|Gd|Gadolinium|ガドリニウム|78|Pt|Platinum|白金|96|Cm|Curium|キュリウム|110|Ds|darmstadtium|ダームスタチウム|
|65|Tb|Terbium|テルビウム|79|Au|Gold|金|97|Bk|Berkelium|バークリウム|111|Rg| roentgenium|レントゲニウム|
|66|Dy|Dysprosium|ジスプロシウム|80|Hg|Mercury|水銀|98|Cf|Californium|カリホルニウム|112|Cn| copernicium|コペルニシウム|
|67|Ho|Holmium|ホルミウム|81|Tl|Thallium|タリウム|99|Es|Einsteinium|アインスタイニウム|113|Nh|Nihonium|ニホニウム|
|68|Er|Erbium|エルビウム|82|Pb|Lead|鉛|100|Fm|Fermium|フェルミウム|114|Fl|flerovium|フレロビウム|
|69|Tm|Thulium|ツリウム|83|Bi|Bismuth|ビスマス|101|Md|Mendelevium|メンデレビウム|115|Mc|Moscovium|モスコビウム|
|70|Yb|Ytterbium|イッテルビウム|84|Po|Polonium|ポロニウム|102|No|Nobelium|ノベリウム|116|Lv|livermorium|リバモリウム|
|71|Lu|Lutetium|ルテチウム|85|At|Astatine|アスタチン|103|Lr|Lawrencium|ローレンシウム|117|Ts|Tennessine|テネシン|
| | | | |86|Rn|Radon|ラドン| | | | |118|Og|Oganesson|オガネソン|

# 参考資料
Qiita Calendar 2021 折り返し
https://qiita.com/kaizen_nagoya/items/3ffdcc464aa3855f5319
# 関連資料
' @kazuo_reve 私が効果を確認した「小川メソッド」
https://qiita.com/kazuo_reve/items/a3ea1d9171deeccc04da

' @kazuo_reve 新人の方によく展開している有益な情報
https://qiita.com/kazuo_reve/items/d1a3f0ee48e24bba38f1

' @kazuo_reve Vモデルについて勘違いしていたと思ったこと
https://qiita.com/kazuo_reve/items/46fddb094563bd9b2e1e
## 自己記事一覧
Qiitaで逆リンクを表示しなくなったような気がする。時々、スマフォで表示するとあらわっることがあり、完全に削除したのではなさそう。

４月以降、せっせとリンクリストを作り、統計を取って確率を説明しようとしている。
2025年２月末を目標にしている。

Qiitaの記事に３段階または５段階で到達するための方法
https://qiita.com/kaizen_nagoya/items/6e9298296852325adc5e

プログラマが知っていると良い「公序良俗」
https://qiita.com/kaizen_nagoya/items/9fe7c0dfac2fbd77a945

逆も真：社会人が最初に確かめるとよいこと。OSEK(69)、Ethernet(59)
https://qiita.com/kaizen_nagoya/items/39afe4a728a31b903ddc

「何を」よりも「誰を」。１０年後のために今見習いたい人たち
https://qiita.com/kaizen_nagoya/items/8045978b16eb49d572b2

物理記事　上位100
https://qiita.com/kaizen_nagoya/items/66e90fe31fbe3facc6ff

量子(0) 計算機, 量子力学 
https://qiita.com/kaizen_nagoya/items/1cd954cb0eed92879fd4

数学関連記事１００
https://qiita.com/kaizen_nagoya/items/d8dadb49a6397e854c6d

図(0) state, sequence and timing. UML and お絵描き 
https://qiita.com/kaizen_nagoya/items/60440a882146aeee9e8f

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

coding (101) 一覧を作成し始めた。omake:最近のQiitaで表示しない5つの事象
https://qiita.com/kaizen_nagoya/items/20667f09f19598aedb68

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

100以上いいねをいただいた記事16選
https://qiita.com/kaizen_nagoya/items/f8d958d9084ffbd15d2a

小川清最終講義、最終講義（再）計画, Ethernet(100) 英語(100) 安全(100)
https://qiita.com/kaizen_nagoya/items/e2df642e3951e35e6a53
＜この記事は個人の過去の経験に基づく個人の感想です。現在所属する組織、業務とは関係がありません。＞
This article is an individual impression based on the individual's experience. It has nothing to do with the organization or business to which I currently belong.
### 文書履歴(document history)
ver. 0.01 初稿 20210505 午前
ver. 0.02 みだし英語追記 20210505 午後
ver. 0.03 元素表記表追記 20210505 夜
ver. 0.04 原子番号・元素記号追記 20210506
ver. 0.05 見出し補足 20210507
ver. 0.06 ありがとう追記 20230311
### 最後までおよみいただきありがとうございました。
いいね　💚、フォローをお願いします。
####  Thank you very much for reading to the last sentence.
Please press the like icon 💚　and follow me for your happy life.
