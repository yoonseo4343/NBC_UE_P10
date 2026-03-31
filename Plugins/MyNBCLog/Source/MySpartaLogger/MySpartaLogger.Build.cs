// MySpartaLog.Build.cs

using UnrealBuildTool;

public class MySpartaLogger : ModuleRules
{
	public MySpartaLogger(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
			{
				// Initial Modules
				"Core", "CoreUObject", "Engine", "InputCore",
			}
		);

		PrivateDependencyModuleNames.AddRange(new string[] { });

	}
}