#!/bin/bash

# このスクリプトはAtcoderのコンテストを開始するためのスクリプトです。

# 動画のURLを入力
read -rp "Atcoder Competition Name[e.g. abc293]: " COMP_NAME

# コンテストのディレクトリを作成
cd /workspace/src
acc new "${COMP_NAME}"
echo "Created ${COMP_NAME} directory.: /workspace/src/${COMP_NAME}"
