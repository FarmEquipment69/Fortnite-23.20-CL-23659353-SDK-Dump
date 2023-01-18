// ScriptStruct /Script/MotherGameplayRuntime.PaddleGingerPropData
// Size: 0x30
struct FPaddleGingerPropData
{
	struct FText CategoryLabelText; // 0x0 (0x18)
	int PropIndex; // 0x18 (0x4)
	int MaxPropCount; // 0x1c (0x4)
	int CategoryIndex; // 0x20 (0x4)
	int MaxCategoryCount; // 0x24 (0x4)
	struct TWeakObjectPtr<class APlayerState> Sender; // 0x28 (0x8)
};

