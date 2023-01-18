// ScriptStruct /Script/FortniteGame.XPEventInfo
// Size: 0x98
struct FXPEventInfo
{
	struct FName EventName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText SimulatedText; // 0x8 (0x18)
	struct FText SimulatedName; // 0x20 (0x18)
	class UFortQuestItemDefinition* QuestDef; // 0x38 (0x8)
	enum EXPEventPriorityType Priority; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int EventXpValue; // 0x44 (0x4)
	int TotalXpEarnedInMatch; // 0x48 (0x4)
	struct FPrimaryAssetId* Accolade; // 0x4c (0x8)
	int RestedValuePortion; // 0x54 (0x4)
	int SeasonBoostValuePortion; // 0x58 (0x4)
	int RestedXPRemaining; // 0x5c (0x4)
	class AFortPlayerController* PlayerController; // 0x60 (0x8)
	struct TWeakObjectPtr<class UTexture2D> AccoladeLargePreviewImageOverride; // 0x68 (0x28)
	enum EFortSimulatedXPSize SimulatedXpSize; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};

