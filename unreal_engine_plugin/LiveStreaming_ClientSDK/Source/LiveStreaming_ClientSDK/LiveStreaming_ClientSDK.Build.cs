// Copyright 2022 RICOH Company, Ltd. All rights reserved.

using UnrealBuildTool;
using System;
using System.Collections.Generic;
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
		var thirdPartyPath = Path.Combine(PluginDirectory, "Source/ThirdParty/bin/Win64");
		List<string> dllNames = new List<string>();
		dllNames.AddRange(Directory.GetFiles(thirdPartyPath, "*.dll", SearchOption.TopDirectoryOnly));
		dllNames.Add("log4net.Config.xml");

		foreach (var dllName in dllNames.ToArray())
		{
			string fullPath = Path.Combine(thirdPartyPath, dllName);
			PublicDelayLoadDLLs.Add(dllName);
			RuntimeDependencies.Add(fullPath);
		}
	}
}
