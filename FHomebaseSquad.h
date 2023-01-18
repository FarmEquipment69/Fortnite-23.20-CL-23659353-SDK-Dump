// ScriptStruct /Script/FortniteGame.HomebaseSquad
// Size: 0x80
struct FHomebaseSquad : FTableRowBase
{
	struct FText DisplayName; // 0x8 (0x18)
	struct FText ShortDisplayName; // 0x20 (0x18)
	enum EFortHomebaseSquadType SquadType; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FGameplayTag ManagerSynergyTag; // 0x3c (0x4)
	struct TArray<struct FHomebaseSquadSlot> CrewSlots; // 0x40 (0x10)
	struct FGameplayTagContainer RequiredTheaterTags; // 0x50 (0x20)
	int MaxNumDefendersAllowedInLevel; // 0x70 (0x4)
	int MaxNumDefendersAllowedInGroupLevel; // 0x74 (0x4)
	bool bConsiderNumPlayersForMaxNumDefenders; // 0x78 (0x1)
	bool bAlwaysRemoveOldestDefenderWhenReplacing; // 0x79 (0x1)
	unsigned char padding_7a[0x6]; // 0x7a (0x6)
};

