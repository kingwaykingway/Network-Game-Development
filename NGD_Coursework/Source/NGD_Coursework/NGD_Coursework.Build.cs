// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NGD_Coursework : ModuleRules
{
	public NGD_Coursework(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		MinFilesUsingPrecompiledHeaderOverride = 1;
		bFasterWithoutUnity = true;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", 
			//"Engine", 
			"InputCore" });
	}
}
