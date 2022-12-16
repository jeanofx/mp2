// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mp2 : ModuleRules
{
	public mp2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "OnlineSubsystemSteam", "OnlineSubsystem" });
	}
}
