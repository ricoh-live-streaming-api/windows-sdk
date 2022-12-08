#pragma once

/// <summary>
/// .netのDispatcherを呼び出すための設定
/// </summary>
namespace Dispatcher
{
	/// <summary>
	/// Dispatcherで処理されるActionクラス（継承してExecを実装する）
	/// </summary>
	class Action
	{
	public:
		/// <summary>
		/// デストラクタ（必要に応じて継承して破棄処理を記述する）
		/// </summary>
		virtual ~Action() {};
		/// <summary>
		/// Dispatcherで処理したい内容を継承して実装する
		/// </summary>
		virtual void Exec() = 0;
	};
	
	/// <summary>
	/// Dispatcherで処理される優先順位
	/// </summary>
	enum class Priority
	{
		Invalid = -1, // 無効値
		Inactive = 0, // 処理されない
		SystemIdle,
		ApplicationIdle,
		ContextIdle,
		Background,
		Input,
		Loaded,
		Render,
		DataBind,
		Normal,
		Send,
	};
};