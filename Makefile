.PHONY: start build run login start_new_comp clean

# ビルドするDockerイメージの名前を設定
IMAGE_NAME = "cpp_env"

# イメージをビルド
build:
	docker build -t $(IMAGE_NAME) .
	
# 指定されたIMAGE_NAMEでDockerコンテナを起動する
run:
	docker run -it --rm -v $(PWD):/workspace $(IMAGE_NAME) /bin/bash
	
# Atcoder, OJにログインする
login:
	./login_oj.sh
	
# 競技プログラミングの新しいフォルダを作成する
start_new_comp:
	./start_new_comp.sh
	
# Dockerイメージを削除
clean:
	docker rmi $(IMAGE_NAME)

# コンテナのビルドと実行、ログインを行う
start:
	make build
	docker run -it --rm -v $(PWD):/workspace \
	$(IMAGE_NAME) ./login_oj.sh
