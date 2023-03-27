# kyopro
競技プログラミングの勉強用レポジトリ

## setup

### クローン
```bash
git clone https://github.com/takeshun256/kyopro.git
cd kyopro
```

### Docker環境をスタート

- ビルド、コンテナ起動とAtcoderのログインを全て行う
```bash
make start
```

- それぞれ行う
```bash
make build
make run
~# make login
```

### 新しいコンペのためのディレクトリを作成
- 新規作成するコンペの名称を聞かれるので入力
- e.g. https://atcoder.jp/contests/abc295 -> abc295がコンペの名称

```bash
make start_new_comp.sh
```


### 環境を抜けて、コンテナを削除
```bash
~# exit
make clean
```

### cppファイルのコンパイル、実行ファイルの実行と実行ファイル削除
```bash
crun <cppファイル>

e.g.
crun A.cpp
```


## 参考
- [crunエイリアス](https://qiita.com/yuya296/items/39dcf6df573cb7851307)
- [atcoder-cli](https://github.com/Tatamo/atcoder-cli)
- [online-judge-tools](https://github.com/online-judge-tools/oj)
