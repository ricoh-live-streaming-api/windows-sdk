// Copyright 2022 RICOH Company, Ltd. All rights reserved.

#pragma once

#include "LiveStreaming_ClientSDK.h"
#include "CoreMinimal.h"

class LSUtility
{
public:
    static TMap<FString, FString> ConvertStrDicToTMap(StringDictionary* source)
    {
        TMap<FString, FString> target;

        if (source)
        {
            auto keys = source->GetKeys();
            for (int i = 0; i < keys->Count(); i++)
            {
                auto key = keys->Get(i);
                auto val = source->Get(key);
                target.Add(key, val);
            }
        }

        return target;
    }

    template <class Target, class Source>
    static TMap<FString, Target*>ConvertDicToTMap(Dictionary<Source*>* source)
    {
        TMap<FString, Target*> target;

        if (source)
        {
            auto keys = source->GetKeys();
            for (int i = 0; i < keys->Count(); i++)
            {
                auto key = keys->Get(i);
                Target* targetObj = NewObject<Target>();
                targetObj->Set(source->Get(key));
                target.Add(key, targetObj);
            }
        }

        return target;
    }

    template <class Target, class Source>
    static TArray<Target*>ConvertListToTArray(ReadOnlyList<Source*>* source)
    {
        TArray<Target*> target;

        if (source)
        {
            for (int i = 0; i < source->Count(); i++)
            {
                Target* targetObj = NewObject<Target>();
                targetObj->Set(source->Get(i));
                target.Add(targetObj);
            }
        }

        return target;
    }

    static void ConvertTMapToStrDic(const TMap<FString, FString>& source, StringDictionary* target)
    {
        for (const auto& entry : source)
        {
            target->Add(TCHAR_TO_ANSI(*entry.Key), TCHAR_TO_ANSI(*entry.Value));
        }
    }

    template <class Target, class Source>
    static List<Target*>* ConvertTArrayToList(const TArray<Source*>& source)
    {
        auto target = CreateList<LSTrack*>();

        for (const auto& entry : source)
        {
            target->Add(entry->Get());
        }

        return target;
    }
};
