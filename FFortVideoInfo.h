// ScriptStruct /Script/FortniteUI.FortVideoInfo
// Size: 0x30
struct FFortVideoInfo
{
	struct FName ID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UTexture2D* PreviewImage; // 0x8 (0x8)
	class UMediaSource* VideoSource; // 0x10 (0x8)
	class ULocalizedOverlays* SubtitleOverlays; // 0x18 (0x8)
	struct FName QuestObjectiveName; // 0x20 (0x4)
	struct FPrimaryAssetId* RequiredActiveQuest; // 0x24 (0x8)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

