# RICOH Live Streaming Client SDK for Windows

株式会社リコーが提供するRICOH Live Streaming Serviceを利用するためのRICOH Live Streaming Client SDK for Windowsです。
現在、RICOH Live Streaming Client SDK for Windows Unreal Engine プラグイン（以下UEプラグインと表記）は正式版ではなくβ版として提供しています。UEプラグインの使用にあたっては、ソフトウェア使用許諾契約書の第１０条を特に注意してご確認ください。

RICOH Live Streaming Serviceは、映像/音声などのメディアデータやテキストデータなどを
複数の拠点間で双方向かつリアルタイムにやりとりできるプラットフォームです。

サービスのご利用には、API利用規約への同意とアカウントの登録、ソフトウェア利用許諾書への同意が必要です。
詳細は下記Webサイトをご確認ください。

* サービスサイト: https://livestreaming.ricoh/
* トライアル登録: https://console.livestreaming.mw.smart-integration.ricoh.com/login/register
* ソフトウェア使用許諾契約書 : [Software License Agreement](SoftwareLicenseAgreement.txt)
* NOTICE: This package includes SDK and sample application(s) for "RICOH Live Streaming Service".
At this moment, we provide API license agreement / software license agreement only in Japanese.

## 構成

* [doc](doc) : APIドキュメント および チュートリアル
* [licenses](licenses) : OSSライセンス表示
* [unity_app](unity_app) : Live Streaming API の Windows Unity 向けサンプル および ライブラリ一式
* [unreal_engine_plugin](unreal_engine_plugin) : UEプラグイン および ライブラリ一式
* [CHANGELOG.md](CHANGELOG.md) : 変更履歴
* README.md : 本ファイル

## ライブラリの場所

- Unityプロジェクト [unity_app\Assets\Plugins\x86_64](unity_app/Assets/Plugins/x86_64) 配下の下記dllが対象  
  依存ライブラリのインストールについては、[チュートリアル](doc/articles/tutorial.html) をご参照ください

  - ClientSDK.dll
  - webrtc_wrapper.dll
  - websocket-sharp.dll

- UEプラグイン [unreal_engine_plugin\LiveStreaming_ClientSDK\Source\ThirdParty\Bin\Win64](unreal_engine_plugin/LiveStreaming_ClientSDK/Source/ThirdParty/Bin/Win64) 配下の下記dllが対象

  - AssemblyResolve.dll
  - UnrealEngineClient.dll
  - ClientSDK.dll
  - webrtc_wrapper.dll
  - log4net.dll
  - Newtonsoft.Json.dll
  - websocket-sharp.dll
  - Microsoft.Extensions.Http.dll と依存ライブラリ一式

## 依存ライブラリ
- log4net : v3.0.3
- Newtonsoft.Json : v13.0.3
- WebSocketSharp : v1.0.2
- Microsoft.Extensions.Http : v9.0.1

## バージョンアップ時の更新方法
- dll 一式を差し替えてください
