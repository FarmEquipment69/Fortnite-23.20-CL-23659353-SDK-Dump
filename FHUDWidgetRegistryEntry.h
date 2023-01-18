// ScriptStruct /Script/FortniteUI.HUDWidgetRegistryEntry
// Size: 0x48
struct FHUDWidgetRegistryEntry
{
	struct FGameplayTag HUDWidgetTag; // 0x0 (0x4)
	bool bIsMandatory; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float MandatoryOnScreenPercent; // 0x8 (0x4)
	int MaximumAmountOfInstances; // 0xc (0x4)
	int ZOrder; // 0x10 (0x4)
	bool bHasDynamicUIUniqueID; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FName DynamicUIUniqueID; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UClass* HUDWidgetClass; // 0x20 (0x8)
	class UClass* HUDWidgetProxyClass; // 0x28 (0x8)
	class UClass* HUDWidgetPreviewClass; // 0x30 (0x8)
	struct TArray<class UFortMobileHUDWidgetCustomPropertyModel*> CustomPropertyModels; // 0x38 (0x10)
};

