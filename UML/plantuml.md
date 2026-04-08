Q1 plantumlファイルの拡張子は？
A1　PlantUMLファイルの拡張子は、主に次のいずれかが使われます：

* **`.puml`**（最も一般的・推奨）
* `.plantuml`
* `.uml`
* `.txt`（テキストとして扱う場合）

### おすすめ

👉 **`.puml`** が事実上の標準で、多くのエディタやツール（VS Code拡張など）でも認識されやすいです。

例：

```
state_matter_quantum.puml
```

環境によってはどの拡張子でも動きますが、特に理由がなければ `.puml` を使うのが無難です。

Q2　拡張子.pumlで図を描いてくれるソフトには何がありますか。
A2
`.puml`（PlantUML）ファイルを描画できるソフトは、かなりいろいろあります。代表的なものを「用途別」に整理すると分かりやすいです。

---

# 🧰 ① 王道：公式ツール

### ■ PlantUML（本体）

* Javaで動く公式ツール
* `.puml` を画像（PNG / SVG）に変換
* GUIモードもあり
* コマンドラインでも使える ([PlantUML.com][1])

👉 特徴

* 軽い・正確・標準
* ただしUIはシンプル（やや地味）

---

# 💻 ② エディタ＋プラグイン（最も人気）

### ■ Visual Studio Code + PlantUML拡張

* 一番よく使われる環境
* `.puml`を書きながらリアルタイムプレビュー
* 補完・ハイライトあり ([huidsp.github.io][2])

👉 おすすめ度：⭐⭐⭐⭐⭐
👉 初心者～プロまでこれが定番

---

### ■ IntelliJ IDEA

* JetBrains系IDE
* PlantUMLプラグインあり
* Java開発者に人気

---

### ■ Atom

* 軽量エディタ
* PlantUML用のプラグインあり ([ウィキペディア][3])

---

# 🌐 ③ ブラウザ（インストール不要）

### ■ PlantUML Online Server

* ブラウザでそのまま描画
* `.puml`を貼るだけ

👉 特徴

* 環境構築不要
* すぐ試せる

---

# 🍎 ④ 専用アプリ

### ■ EasyPlantUML

* Mac専用アプリ
* リアルタイムプレビュー・補完あり
* PNG/SVGなどに書き出し可能 ([App Store][4])

---

# 🧪 ⑤ その他（ちょっと玄人向け）

* Neovim + plugin
* Emacs + plantuml-mode
* GitLab（CIで自動レンダリング）

---

# 🧭 まとめ（どれを選べばいい？）

* 🥇 初心者・迷ったら
  → **VS Code + PlantUML拡張**
* 🥈 サクッと試す
  → **オンラインツール**
* 🥉 本格・自動化
  → **PlantUML本体 + コマンドライン**

---

必要なら👇

* VS Codeでのセットアップ手順
* 日本語フォント設定（文字化け対策）
* Graphvizのインストール方法

も詳しく解説できます 👍

[1]: https://plantuml.com/ja/gui?utm_source=chatgpt.com "Standalone tool usage"
[2]: https://huidsp.github.io/softeng/env/plantuml.html?utm_source=chatgpt.com "PlantUML - ソフトウェア工学"
[3]: https://en.wikipedia.org/wiki/PlantUML?utm_source=chatgpt.com "PlantUML"
[4]: https://apps.apple.com/jp/app/easyplantuml/id1589635432?utm_source=chatgpt.com "‎EasyPlantUMLアプリ - App Store"
