// Class /Script/FortniteGame.HUDLayoutToolConfigurations
// Size: 0xa0
class UHUDLayoutToolConfigurations : public UDeveloperSettings
{
	struct TWeakObjectPtr<class UClass> LegacyLayoutConverterClass; // 0x30 (0x28)
	int MaximumCustomLayoutSaveSlots; // 0x58 (0x4)
	struct FGameplayTag DefaultHUDProfilePresetTag; // 0x5c (0x4)
	struct FGameplayTag ActiveHUDPresetContainer; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct TArray<class UClass*> HUDPresetContainerClasses; // 0x68 (0x10)
	struct TArray<struct FFortMobileHUDPresetHotfix> HUDProfilePresetHotfixes; // 0x78 (0x10)
	float DefaultButtonVisualSize; // 0x88 (0x4)
	unsigned char padding_8c[0x14]; // 0x8c (0x14)
};

