#pragma once
#include "Collections.h"

#include <vector>
#include <map>
#include <string>

#pragma region List

template <typename T>
class ListImpl : public List<typename T>
{
public:

	virtual void Add(const T item) override
	{
		this->vec.push_back(item);
	};

	virtual void Remove(int index) override
	{
		this->vec.erase(this->vec.begin() + index);
	};

	virtual T Get(int index) override
	{
		auto item = this->vec[index];
		return item;
	}

	virtual int Count() const override
	{
		return (int)this->vec.size();
	}

private:
	std::vector<T> vec;
};

template <typename T>
ReadOnlyList<T>* CreateReadOnlyList(int count, T* items)
{
	return CreateList(count, items);
}


template <typename T>
List<T>* CreateList(int count, T* items)
{
	auto list = new ListImpl<T>();
	for (int i = 0; i < count; i++)
	{
		list->Add(items[i]);
	}

	return list;
}

class StringListImpl : public StringList
{
public:
	StringListImpl() {}

	void Add(const char* item) override
	{
		std::string str(item);
		this->vec.push_back(str);
	}

	void Remove(int index) override
	{
		this->vec.erase(this->vec.begin() + index);
	}

	const char* Get(int index) override
	{
		std::string item = this->vec[index];
		strcpy_s(this->buffer, KEYWORD_STRING_SIZE, item.c_str());
		return this->buffer;
	}

	int Count() const override
	{
		return (int)this->vec.size();
	}
private:
	std::vector<std::string> vec;
	char buffer[KEYWORD_STRING_SIZE] = {};
};


template <typename T>
List<T>* CreateList()
{
	return new ListImpl<T>();
}

#pragma endregion

#pragma region Dictionary

template <typename T>
class DictionaryImpl : public Dictionary<typename T>
{
public:
	virtual void Add(const char* key, T value) override
	{
		std::string keyStr(key);
		this->dic.insert(std::make_pair(keyStr, value));
	};

	virtual void Remove(const char* key) override
	{
		std::string keyStr(key);
		this->dic.erase(keyStr);
	};

	virtual T Get(const char* key) override
	{
		std::string keyStr(key);
		auto value = this->dic.find(keyStr);
		return (*value).second;
	};

	virtual bool Contains(const char* key) const override
	{
		std::string keyStr(key);
		return this->dic.find(keyStr) != this->dic.end();
	};

	virtual ReadOnlyList<const char*>* GetKeys() const override
	{
		auto keys = new StringListImpl();

		for each (std::pair<std::string, T> p in this->dic)
		{
			std::string key = p.first;
			keys->Add(key.c_str());
		}
		return keys;
	}
private:
	std::map<std::string, T> dic;
};

template <typename T>
Dictionary<T>* CreateDictionary()
{
	return new DictionaryImpl<T>();
};

#pragma endregion