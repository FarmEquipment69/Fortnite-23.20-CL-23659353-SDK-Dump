// ScriptStruct /Script/FortniteUI.FortSettingsFilterState
// Size: 0x3b8
struct FFortSettingsFilterState
{
	bool bIncludeDisabled; // 0x0 (0x1)
	bool bIncludeHidden; // 0x1 (0x1)
	bool bIncludeResetable; // 0x2 (0x1)
	bool bIncludeNestedPages; // 0x3 (0x1)
	unsigned char unreflected_4[0x394]; // 0x4 (0x394) 
	struct TArray<class UFortSetting*> SettingRootList; // 0x398 (0x10)
	struct TArray<class UFortSetting*> SettingWhiteList; // 0x3a8 (0x10)
};

