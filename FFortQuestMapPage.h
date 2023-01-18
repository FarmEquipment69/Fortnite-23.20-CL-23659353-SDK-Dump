// ScriptStruct /Script/FortniteGame.FortQuestMapPage
// Size: 0x60
struct FFortQuestMapPage : FTableRowBase
{
	struct FText PageTitle; // 0x8 (0x18)
	int PageIndex; // 0x20 (0x4)
	int ChapterPageCount; // 0x24 (0x4)
	struct FString QuestEventFlag; // 0x28 (0x10)
	enum EFrontEndCamera CameraMode; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class UClass* QuestNodeLayoutLegacy; // 0x40 (0x8)
	class UClass* QuestNodeLayoutLeto; // 0x48 (0x8)
	struct TArray<struct FFortQuestMapNode> QuestList; // 0x50 (0x10)
};

