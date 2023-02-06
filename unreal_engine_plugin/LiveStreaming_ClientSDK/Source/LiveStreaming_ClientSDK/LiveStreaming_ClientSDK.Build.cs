// Copyright 2022 RICOH Company, Ltd. All rights reserved.

using UnrealBuildTool;
using System;
using System.IO;

public class LiveStreaming_ClientSDK : ModuleRules
{
	public LiveStreaming_ClientSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bEnableExceptions = true;

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				Path.Combine(ModuleDirectory, "./Public/event"),
				Path.Combine(ModuleDirectory, "./Public/webrtc"),
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Projects"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			LoadDll();
		}
	}

	private void LoadDll()
	{
		string[] dllNames = {
			"AssemblyResolve.dll",
			"ClientSDK.dll",
			"log4net.Config.xml",
			"log4net.dll",
			"Newtonsoft.Json.dll",
			"UnrealEngineClient.dll",
			"webrtc_wrapper.dll",
			"websocket-sharp.dll",
		};

		foreach (var dllName in dllNames)
		{
			string fullPath = Path.Combine("$(PluginDir)/Source/ThirdParty/Bin/Win64", dllName);
			PublicDelayLoadDLLs.Add(dllName);
			RuntimeDependencies.Add(fullPath);
		}
	}
}
