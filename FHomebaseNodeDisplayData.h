// ScriptStruct /Script/SaveTheWorldUI.HomebaseNodeDisplayData
// Size: 0x90
struct FHomebaseNodeDisplayData : FTableRowBase
{
	struct FText Title; // 0x8 (0x18)
	struct FText Description; // 0x20 (0x18)
	struct TWeakObjectPtr<class UTexture2D> LargePreviewImage; // 0x38 (0x28)
	struct TWeakObjectPtr<class UTexture2D> SmallPreviewImage; // 0x60 (0x28)
	class UMediaSource* PreviewVideoMediaSource; // 0x88 (0x8)
};

