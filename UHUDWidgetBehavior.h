// Class /Script/FortniteUI.HUDWidgetBehavior
// Size: 0xb0
class UHUDWidgetBehavior : public UObject
{
	struct FText HUDLayoutToolName; // 0x28 (0x18)
	struct TArray<class UFortMobileHudWidgetContentComponent*> HudWidgetContentComponents; // 0x40 (0x10)
	struct TMap<struct FGameplayTag, struct FString> CustomPropertyDefaultOverrides; // 0x50 (0x50)
	struct TArray<class UFortMobileHUDWidgetBehaviorExtension*> BehaviorExtensions; // 0xa0 (0x10)
};

