// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Donkeykong_SIS457 : ModuleRules
{
	public Donkeykong_SIS457(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
