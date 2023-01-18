// ScriptStruct /Script/FortniteGame.XPEventEntry
// Size: 0xa8
struct FXPEventEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FText SimulatedXpEvent; // 0x10 (0x18)
	struct FText SimulatedXpName; // 0x28 (0x18)
	class UFortQuestItemDefinition* QuestDef; // 0x40 (0x8)
	class UFortAccoladeItemDefinition* AccoladeDef; // 0x48 (0x8)
	struct FPrimaryAssetId* Accolade; // 0x50 (0x8)
	float Time; // 0x58 (0x4)
	int OldXPValue; // 0x5c (0x4)
	int OldLevel; // 0x60 (0x4)
	int NewXPValue; // 0x64 (0x4)
	int NewLevel; // 0x68 (0x4)
	int EventXpValue; // 0x6c (0x4)
	int TotalXpEarnedInMatch; // 0x70 (0x4)
	int RemainingRestXP; // 0x74 (0x4)
	struct TWeakObjectPtr<class UTexture2D> AccoladeLargePreviewImageOverride; // 0x78 (0x28)
	enum EFortSimulatedXPSize SimulatedXpSize; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)
};

