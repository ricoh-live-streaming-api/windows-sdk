# RICOH Live Streaming Client SDK for Windows Unreal Engine プラグイン

株式会社リコーが提供するRICOH Live Streaming Serviceを利用するための RICOH Live Streaming Client SDK for Windows Unreal Engine プラグイン（以下プラグインと表記）です。  
現在、プラグインは正式版ではなくβ版として提供しています。プラグインの使用にあたっては、ソフトウェア使用許諾契約書の第１０条を特に注意してご確認ください。

RICOH Live Streaming Serviceは、映像/音声などのメディアデータやテキストデータなどを
複数の拠点間で双方向かつリアルタイムにやりとりできるプラットフォームです。

サービスのご利用には、API利用規約への同意とアカウントの登録、ソフトウェア利用許諾書への同意が必要です。
詳細は下記Webサイトをご確認ください。

* サービスサイト: https://livestreaming.ricoh/
* ソフトウェア開発者向けサイト: https://api.livestreaming.ricoh/
* アカウント登録: https://livestreaming.ricoh/user_register.html
* ソフトウェア使用許諾契約書 : [Software License Agreement](SoftwareLicenseAgreement.txt)
* NOTICE: This package includes SDK and sample application(s) for "RICOH Live Streaming Service".
At this moment, we provide API license agreement / software license agreement only in Japanese.

## 構成

* [doc](doc) : APIドキュメント
* [licenses](licenses) : OSSライセンス表示
* [unreal_engine_plugin](unreal_engine_plugin) : プラグイン および ライブラリ一式
* README.md : 本ファイル

## ライブラリの場所

プラグイン [unreal_engine_pluginLiveStreaming_ClientSDK\Source\ThirdParty\Bin\Win64](unreal_engine_plugin/LiveStreaming_ClientSDK/Source/ThirdParty/Bin/Win64) 配下の下記dllが対象

- AssemblyResolve.dll
- UnrealEngineClient.dll
- ClientSDK.dll
- webrtc_wrapper.dll
- log4net.dll
- Newtonsoft.Json.dll
- websocket-sharp.dll

## 依存ライブラリ
- log4net : v2.0.15
- Newtonsoft.Json : v13.0.1
- WebSocketSharp : v1.0.3-rc11
