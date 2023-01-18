// Class /Script/SpecialEventGameplayRuntime.DamageRecordEntry
// Size: 0x148
class UDamageRecordEntry : public UObject
{
	float DamageTotal; // 0x28 (0x4)
	float EndReplicationTime; // 0x2c (0x4)
	struct FGameplayTagContainer DamageTags; // 0x30 (0x20)
	struct FGameplayEffectContextHandle EffectContext; // 0x50 (0x18)
	struct FGameplayCueParameters GameplayCueParams; // 0x68 (0xd0)
	unsigned char padding_138[0x10]; // 0x138 (0x10)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal (Underlying native function: OnRep_DamageTotal 0x76c5614)
	void OnRepDamageTotal(); // (Final | Native | Public)
};

