// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cccc : ModuleRules
{
	public cccc(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
