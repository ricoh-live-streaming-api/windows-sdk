# RICOH Live Streaming Client SDK for Windows Unity

Live Streaming API に接続するWindows Unityアプリケーション

## 動かし方

1. Unity Hubでunity_appをリストに追加し起動する
2. Projectの `Assets > Senes` で動作させたいSceneをダブルクリックする
3. Client ID, Secret, Room ID を取得する
4. 設定ファイルを作成する。
5. `File > Build And Run` を選択し、exeファイルを作成する

## シーン

* Watch
  * 映像・音声の受信のみを行う
* SampleScene
  * 映像・音声の双方向送受信を行う
* UnityCamera
  * Unityカメラの映像の送信、映像の受信、音声の双方向受信を行う

### 設定ファイル

* `unity_app/Secrets.template.json` を `unity_app/Assets/StreamingAssets/` にコピーし、`Secrets.json` に名前を変更する。
* `Secrets.json` を編集する。
    * `client_id`、 `client_secret`、`room_id` は実際の値を入力する。
```
{
    "client_id" : "",
    "client_secret" : "",
    "room_id" : "sample-room",
    "video_bitrate" : 20000
}
```

## ログ出力機能

### SDK ログ
- [log4net](https://logging.apache.org/log4net/) を使用してログをファイルに書き込む。
- `C:/Users/{ユーザー名}/AppData/LocalLow/RICOH/ClientSDKForWindows-UnitySample/logs/main.log` という名前で出力される。
- アプリ起動直後、`[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]` で config ファイルを読み込む必要がある。
  configファイルの読み込み方法については、[BootStrap.cs](./Assets/Scripts/BootStrap.cs) を参照。
- ログの設定は [Log4net.Config.xml](./Assets/StreamingAssets/Log4net.Config.xml) で行う。

### Unity ログ
- Unity が出力するプレイヤーログ。
  詳細は [Unityマニュアル](https://docs.unity3d.com/ja/2020.3/Manual/LogFiles.html) を参照。
- `C:/Users/{ユーザー名}/AppData/LocalLow/RICOH/ClientSDKForWindows-UnitySample/Player.log` という名前で出力される。

### Stats ログ
- [Client SDK API](https://api.livestreaming.ricoh/docs/clientsdk-api-external-specification/) の `GetStats` メソッドを用いて `RTCStats` の通知イベントを受け取り、ファイルに書き込む。
- `C:/Users/{ユーザー名}/AppData/LocalLow/RICOH/ClientSDKForWindows-UnitySample/logs/stats/20200319T1336.log` という名前で出力される。
  ファイル名は実際の日時で `yyyyMMdd'T'HHmm` の形式となる。
  接続する度に新しいファイルが生成されるが、自動では削除されない。
- ファイル形式は [LTSV](http://ltsv.org/) となっている。
  すべての情報を出力しているのではなく `candidate-pair`, `stream`, `track`, `media-source`, `inbound-rtp`, `outbound-rtp`, `remote-inbound-rtp` の情報だけ出力している。
  その他の情報を出力したい場合は [RTCStatsLogger.cs](./Assets/Scripts/RTCStatsLogger.cs) を修正する。
  出力可能な情報の一覧は https://www.w3.org/TR/webrtc-stats/ で確認できる。

### WebRTC ログ
- [Client SDK API](https://api.livestreaming.ricoh/docs/clientsdk-api-external-specification/) の `SetLibWebrtcLogOption` メソッドを用いて WebRTC ネイティブのログをファイルに書き込む。
- `C:/Users/{ユーザー名}/AppData/LocalLow/RICOH/ClientSDKForWindows-UnitySample/logs/webrtc/webrtc_0` という名前で出力される。
  ログの最大サイズを超えた場合はファイル名 `webrtc_0` の番号の部分がインクリメントされる。
  アプリ起動時または切断毎に新しいファイルが生成され、古いファイルは `yyyyMMddHHmmss` の形式のフォルダにバックアップされる。
  バックアップはアプリ起動時に削除される。

## 対応コーデック

現状対応しているコーデックは以下の通り。
- VP8、VP9ソフトウェアエンコーダ、デコーダ
- [NVIDIA VIDEO CODEC SDK](https://developer.nvidia.com/nvidia-video-codec-sdk)のH264ハードウェアエンコード、デコード

ソフトウェアでのH.264エンコード/デコードは未対応。

## 対応Unityバージョン
- Unity 2020.3

## 対応プラットフォーム
- Windows10 1903 x86_64以降

## 依存ライブラリ
- log4net : v2.0.15
- Newtonsoft.Json : v13.0.1
- JWT : v9.0.3