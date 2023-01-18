// Class /Script/FortniteGame.FortTrapItemDefinition
// Size: 0xea0
class UFortTrapItemDefinition : public UFortDecoItemDefinition
{
	struct FRotator KnockbackDirOverride; // 0xe30 (0x18)
	bool bKnockBackUsingPawnDir; // 0xe48 (0x1)
	unsigned char unreflected_e49[0x7]; // 0xe49 (0x7) 
	struct TWeakObjectPtr<class USoundBase> EquipSound; // 0xe50 (0x28)
	struct FGameplayTagContainer OverrideAutoEquipTags; // 0xe78 (0x20)
	unsigned char padding_e98[0x8]; // 0xe98 (0x8)
};

