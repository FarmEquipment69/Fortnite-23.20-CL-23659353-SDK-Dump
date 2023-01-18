// Class /Script/Engine.AutomationTestSettings
// Size: 0x350
class UAutomationTestSettings : public UObject
{
	struct TArray<struct FString> EngineTestModules; // 0x28 (0x10)
	struct TArray<struct FString> EditorTestModules; // 0x38 (0x10)
	struct FSoftObjectPath AutomationTestmap; // 0x48 (0x18)
	struct TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60 (0x10)
	struct TArray<struct FString> AssetsToOpen; // 0x70 (0x10)
	struct TArray<struct FString> MapsToPIETest; // 0x80 (0x10)
	bool bUseAllProjectMapsToPlayInPIE; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FBuildPromotionTestSettings BuildPromotionTest; // 0x98 (0x1f0)
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x288 (0x30)
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2b8 (0x10)
	struct FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2c8 (0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2f8 (0x10)
	struct TArray<struct FExternalToolDefinition> ExternalTools; // 0x308 (0x10)
	struct TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x318 (0x10)
	struct TArray<struct FLaunchOnTestSettings> LaunchOnSettings; // 0x328 (0x10)
	struct FIntPoint* DefaultScreenshotResolution; // 0x338 (0x8)
	float PIETestDuration; // 0x340 (0x4)
	float DefaultInteractiveFramerate; // 0x344 (0x4)
	float DefaultInteractiveFramerateWaitTime; // 0x348 (0x4)
	float DefaultInteractiveFramerateDuration; // 0x34c (0x4)
};

