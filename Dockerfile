# ベースイメージの選択
FROM ubuntu:20.04

# タイムゾーンの設定
ENV TZ=Asia/Tokyo
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

# 必要なパッケージのインストール
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    build-essential \
    g++ \
    gdb \
    git \
    curl \
    wget \
    vim \
    && rm -rf /var/lib/apt/lists/*

# C++のバージョンを指定
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    g++-9 \
    && rm -rf /var/lib/apt/lists/*

# ワーキングディレクトリの設定
WORKDIR /workspace

