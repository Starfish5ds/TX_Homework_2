// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TX_Homework_2 : ModuleRules
{
	public TX_Homework_2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
