// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Astrogate : ModuleRules
{
	public Astrogate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        MinFilesUsingPrecompiledHeaderOverride = 1;
        bFasterWithoutUnity = true;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ProceduralMeshComponent" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		PrivateDependencyModuleNames.Add("OnlineSubsystem");
        DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
    }
}
