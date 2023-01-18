// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotDisguise
// Size: 0xd0
class UFortAthenaAIRuntimeParameters_AIBotDisguise : public UFortAthenaAIRuntimeParameters
{
	bool bShouldApplyDisguise; // 0x30 (0x1)
	bool bRevealDisguiseOnDamage; // 0x31 (0x1)
	bool bRevealOnDamageExcludeAIPawnDamage; // 0x32 (0x1)
	bool bRevealDisguiseOnPlayerProximity; // 0x33 (0x1)
	float RevealPlayerProximityDistanceSqr; // 0x34 (0x4)
	float RevealPlayerProximityMinDuration; // 0x38 (0x4)
	float RevealPlayerProximityMaxDuration; // 0x3c (0x4)
	class UFortBotNameSettings* NameSettingsAfterReveal; // 0x40 (0x8)
	struct FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x48 (0x20)
	struct FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x68 (0x20)
	struct TArray<class UClass*> DisguiseGameplayEffectBeforeReveal; // 0x88 (0x10)
	struct TArray<class UClass*> DisguiseGameplayEffectAfterReveal; // 0x98 (0x10)
	struct TArray<struct FItemAndCount> DisguiseInventory; // 0xa8 (0x10)
	struct FDataTableRowHandle DisguiseLootInfo; // 0xb8 (0x10)
	class UClass* DisguiseConversationComponentOverride; // 0xc8 (0x8)
};

