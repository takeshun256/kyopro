# ベースイメージの選択
FROM ubuntu:20.04

# タイムゾーンの設定
ENV TZ=Asia/Tokyo
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

# ロケールの設定
RUN apt-get update \
    && apt-get install -y locales \
    && locale-gen ja_JP.UTF-8 \
    && echo "export LANG=ja_JP.UTF-8" >> /etc/bash.bashrc

# 必要なパッケージのインストール
RUN apt-get update && apt-get install -y \
    build-essential \
    g++ \
    gdb \
    git \
    curl \
    wget \
    vim \
    npm \
    python3-pip \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# setup.shの実行
COPY setup_oj.sh /root
COPY template /root
RUN chmod +x /root/setup_oj.sh
RUN /root/setup_oj.sh

# ワーキングディレクトリの設定
WORKDIR /workspace

