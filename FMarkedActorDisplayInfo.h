// ScriptStruct /Script/FortniteGame.MarkedActorDisplayInfo
// Size: 0x98
struct FMarkedActorDisplayInfo : FTableRowBase
{
	struct FText DisplayName; // 0x8 (0x18)
	struct TWeakObjectPtr<class UTexture2D> Icon; // 0x20 (0x28)
	class UClass* CustomIndicatorClass; // 0x48 (0x8)
	struct TWeakObjectPtr<class UClass> CustomDetailsClass; // 0x50 (0x28)
	struct FLinearColor PrimaryColor; // 0x78 (0x10)
	class USoundBase* sound; // 0x88 (0x8)
	enum EFortMarkedActorScreenClamping ScreenClamping; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};

