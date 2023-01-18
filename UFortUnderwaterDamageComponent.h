// Class /Script/FortniteGame.FortUnderwaterDamageComponent
// Size: 0x118
class UFortUnderwaterDamageComponent : public UActorComponent
{
	class UClass* GEUnderwaterDamage; // 0xa0 (0x8)
	struct FScalableFloat DamageDelay; // 0xa8 (0x28)
	struct FScalableFloat LevelDuration; // 0xd0 (0x28)
	bool bIsUnderWater; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x3]; // 0xf9 (0x3) 
	float UnderWaterStartTime; // 0xfc (0x4)
	int CurrentLevel; // 0x100 (0x4)
	bool bResetFromDBNO; // 0x104 (0x1)
	unsigned char unreflected_105[0x3]; // 0x105 (0x3) 
	struct FActiveGameplayEffectHandle* GEUnderWaterDamageHandle; // 0x108 (0x8)
	struct TWeakObjectPtr<class UAbilitySystemComponent> OwnerAbilityComp; // 0x110 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortUnderwaterDamageComponent.SetUnderWater (Underlying native function: SetUnderWater 0x871bbb4)
	void SetUnderWater(bool& bNewUnderWater); // (Final | Native | Public | BlueprintCallable)
};

