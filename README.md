# kyopro
競技プログラミングの勉強用レポジトリ

## setup
```bash
docker build -t cpp_competitive_env . # イメージをビルド
docker-compose up -d # コンテナを作成
docker-compose exec cpp_env bash # コンテナに入る
```
コンテナを抜ける
```bash
exit
```
コンテナの停止と削除
```bash
docker-compose down
```


