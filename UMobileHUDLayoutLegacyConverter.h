// Class /Script/FortniteGame.MobileHUDLayoutLegacyConverter
// Size: 0xe0
class UMobileHUDLayoutLegacyConverter : public UObject
{
	struct FText ConvertedProfiletName; // 0x28 (0x18)
	struct TMap<struct FGameplayTag, struct FGameplayTag> GlobalTagClassOverrides; // 0x40 (0x50)
	struct TArray<struct FWidgetMappingContainer> TagMappings; // 0x90 (0x10)
	struct TArray<struct FWidgetVisibilityOverride> VisibilityOverrides; // 0xa0 (0x10)
	struct TArray<struct FWidgetPropertyUpgradeData> PropertyUpgradeMappings; // 0xb0 (0x10)
	struct TArray<struct FWidgetLayoutProxy> WidgetLayoutProxies; // 0xc0 (0x10)
	struct FVector2D LegacyCanvasSize; // 0xd0 (0x10)
};

