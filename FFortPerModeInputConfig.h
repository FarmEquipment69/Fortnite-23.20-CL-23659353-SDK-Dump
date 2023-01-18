// ScriptStruct /Script/FortniteGame.FortPerModeInputConfig
// Size: 0x58
struct FFortPerModeInputConfig
{
	struct FName InputConfigName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString DefaultKeyboardMouseLayoutPresetName; // 0x8 (0x10)
	struct TArray<struct FString> ResetKeyboardMouseLayoutPresetNames; // 0x18 (0x10)
	struct FString DefaultControllerLayoutPresetName; // 0x28 (0x10)
	struct FString CustomControllerLayoutPresetName; // 0x38 (0x10)
	struct TArray<struct FString> FortPlayerInputSettingsNames; // 0x48 (0x10)
};

