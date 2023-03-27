#!/bin/bash

# C++のバージョンを指定
update-alternatives --install \
        /usr/bin/g++ g++ /usr/bin/g++-9 100

# C++コンパイル実行のためのエイリアスの設定
echo 'function crun() { command g++ -std=c++17 "$@" && ./a.out && rm -f a.out; }' \
        >> /root/.bashrc

# Atcoder CLIのインストール 
npm install -g atcoder-cli
pip3 install online-judge-tools

# Atcoder用のテンプレートを作成
acc config default-template cpp
config_dir="$(acc config-dir)"
mkdir -p "${config_dir}/cpp"
cp "/root/main.cpp" "${config_dir}/cpp/main.cpp"
cp "/root/template.json" "${config_dir}/cpp/template.json"
