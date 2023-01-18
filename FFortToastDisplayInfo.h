// ScriptStruct /Script/FortniteUI.FortToastDisplayInfo
// Size: 0x60
struct FFortToastDisplayInfo
{
	struct FText Header; // 0x0 (0x18)
	struct FText Body; // 0x18 (0x18)
	struct TWeakObjectPtr<class UTexture2D> Image; // 0x30 (0x28)
	enum EFortToastType Type; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

