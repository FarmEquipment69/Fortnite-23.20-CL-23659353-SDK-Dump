// ScriptStruct /Script/FortniteUI.FortUIPerk
// Size: 0x98
struct FFortUIPerk
{
	struct FFortSpecializationSlot SpecializationSlot; // 0x0 (0x88)
	class UFortHero* Hero; // 0x88 (0x8)
	enum EFortItemTier Tier; // 0x90 (0x1)
	enum EFortSupportBonusType SupportBonusType; // 0x91 (0x1)
	bool bIsTierPerk; // 0x92 (0x1)
	bool bIsUpgrade; // 0x93 (0x1)
	bool bIsEvolution; // 0x94 (0x1)
	bool bIsEvolutionBranch; // 0x95 (0x1)
	unsigned char padding_96[0x2]; // 0x96 (0x2)
};

