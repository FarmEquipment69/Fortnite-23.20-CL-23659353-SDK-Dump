// Class /Script/FortniteUI.FortMobileHUDWidgetRegistry
// Size: 0x80
class UFortMobileHUDWidgetRegistry : public UFortMobileHUDWidgetRegistryBase
{
	struct TArray<struct FHUDWidgetBehaviorRegistryEntry> HUDWidgetBehaviorRegistry; // 0x30 (0x10)
	struct TArray<struct FHUDWidgetRegistryEntry> HUDWidgetRegistry; // 0x40 (0x10)
	struct TArray<class UFortMobileHUDContextModel*> ContextLayoutModels; // 0x50 (0x10)
	struct TArray<struct FFortMobileHUDContextModelExtension> ContextLayoutModelExtensions; // 0x60 (0x10)
	struct TArray<struct FHUDWidgetBehaviorExtensionsRegistryEntry> HUDWidgetBehaviorExtensions; // 0x70 (0x10)
};

