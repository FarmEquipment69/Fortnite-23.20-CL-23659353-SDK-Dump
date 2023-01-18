// Class /Script/FortniteUI.FortSettingVisualData
// Size: 0x170
class UFortSettingVisualData : public UDataAsset
{
	struct TMap<class UClass*, class UClass*> EntryWidgetForClass; // 0x30 (0x50)
	struct TMap<struct FString, class UClass*> EntryWidgetForName; // 0x80 (0x50)
	struct TMap<class UClass*, struct FFortSettingClassExtensions> ExtensionsForClasses; // 0xd0 (0x50)
	struct TMap<struct FString, struct FFortSettingNameExtensions> ExtensionsForName; // 0x120 (0x50)
};

