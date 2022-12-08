#pragma once

constexpr int KEYWORD_STRING_SIZE = 256;
constexpr int JSON_STRING_SIZE = 4096;

/// <summary>
/// System::Collections::Generic::ReadOnlyListから受け取ったリストを格納するクラス
/// </summary>
template <typename T>
class ReadOnlyList
{
public:
	virtual ~ReadOnlyList() {};
	virtual T Get(int index) = 0;
	virtual int Count() const = 0;
};

/// <summary>
/// ReadOnlyListクラスのインスタンスを生成する関数
/// </summary>
template <typename T>
ReadOnlyList<T>* CreateReadOnlyList(int count, T* items);

/// <summary>
/// System::Collections::Generic::Listから受け取ったリストを格納するクラス
/// </summary>
template <typename T>
class List : public ReadOnlyList<T>
{
public:
	virtual void Add(const T item) = 0;
	virtual void Remove(int index) = 0;
	virtual ~List() {};
};
/// <summary>
/// Listクラスのインスタンスを生成する関数
/// </summary>
template <typename T>
List<T>* CreateList();
/// <summary>
/// ReadOnlyListのインスタンスを生成する関数
/// 生成時に値を格納する際に使用する
/// </summary>
template <typename T>
List<T>* CreateList(int count, T* items);

/// <summary>
/// System::Collections::Generic::Dictionaryから受け取ったリストを格納するクラス
/// </summary>
template <typename T>
class Dictionary
{
public:
	virtual void Add(const char* key, T value) = 0;
	virtual void Remove(const char* key) = 0;
	virtual T Get(const char* key) = 0;
	virtual bool Contains(const char* key) const = 0;
	virtual ReadOnlyList<const char*>* GetKeys() const = 0;

	virtual ~Dictionary() {};
};

/// <summary>
/// Dictionaryクラスのインスタンスを生成する関数
/// </summary>
template <typename T>
Dictionary<T>* CreateDictionary();

/// <summary>
/// System::Collections::Generic::Listから受け取ったリストを格納するクラス
/// 格納する値がStringの際に使用する
/// </summary>
class StringList : public List<const char*> 
{
};

/// <summary>
/// System::Collections::Generic::Dictionaryから受け取ったリストを格納するクラス
/// 格納するキーと値の組み合わせが[String,object]の際に使用する
/// </summary>
class StringDictionary : public Dictionary<const char*> 
{
};
