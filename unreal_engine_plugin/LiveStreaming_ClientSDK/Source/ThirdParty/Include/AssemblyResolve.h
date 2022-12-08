/**
* @File .net系アセンブリの検索パスを設定する
* （これがないとUnrealEngineのExeディレクトリしか検索してくれない）
*/
#pragma once

#ifdef ASSEMBLYRESOLVE_EXPORTS
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif
	/// <summary>
	/// アセンブリ検索ディレクトリを設定
	/// </summary>
	/// <param name="directory">.netアセンブリが配置されたディレクトリパス</param>
	DECLSPEC void SetAssemblySearchDirectory(const char* directory);

	/// <summary>
	/// アセンブリ検索ディレクトリをクリア
	/// </summary>
	DECLSPEC void ClearAssemblySearchDirectory();

	/// <summary>
	/// アセンブリ検索ディレクトリを設定する関数ポインタ型
	/// </summary>
	typedef void (*SetAssemblySearchDirectoryFunc)(const char* directory);

	/// <summary>
	/// アセンブリ検索ディレクトリをクリアする関数ポインタ型
	/// </summary>
	typedef void (*ClearAssemblySearchDirectoryFunc)();

#ifdef __cplusplus
}
#endif