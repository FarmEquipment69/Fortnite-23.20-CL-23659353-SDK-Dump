// Class /Script/CommonUI.CommonUISettings
// Size: 0x1c0
class UCommonUISettings : public UObject
{
	bool bAutoLoadData; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TWeakObjectPtr<class UObject> DefaultImageResourceObject; // 0x30 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> DefaultThrobberMaterial; // 0x58 (0x28)
	struct TWeakObjectPtr<class UClass> DefaultRichTextDataClass; // 0x80 (0x28)
	struct TArray<struct FGameplayTag> PlatformTraits; // 0xa8 (0x10)
	unsigned char unreflected_b8[0x28]; // 0xb8 (0x28) 
	class UObject* DefaultImageResourceObjectInstance; // 0xe0 (0x8)
	class UMaterialInterface* DefaultThrobberMaterialInstance; // 0xe8 (0x8)
	struct FSlateBrush DefaultThrobberBrush; // 0xf0 (0xc0)
	class UCommonUIRichTextData* RichTextDataInstance; // 0x1b0 (0x8)
	unsigned char padding_1b8[0x8]; // 0x1b8 (0x8)
};

