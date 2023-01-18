// ScriptStruct /Script/FortniteGame.HomebaseSquadSlot
// Size: 0x68
struct FHomebaseSquadSlot
{
	struct FText DisplayName; // 0x0 (0x18)
	struct TArray<enum EFortItemType> ValidSlottableItemTypes; // 0x18 (0x10)
	struct FGameplayTagContainer TagFilter; // 0x28 (0x20)
	struct TArray<struct FHomebaseSquadAttributeBonus> SlottingBonuses; // 0x48 (0x10)
	class UCurveTable* PersonalityMatchBonusTable; // 0x58 (0x8)
	enum ESquadSlotType SlotType; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

