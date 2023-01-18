// Class /Script/FortniteGame.FortHealthSet
// Size: 0x630
class UFortHealthSet : public UFortAttributeSet
{
	struct FFortGameplayAttributeData Health; // 0x30 (0x28)
	struct FFortGameplayAttributeData MaxHealth; // 0x58 (0x28)
	struct FFortGameplayAttributeData Shield; // 0x80 (0x28)
	struct FFortGameplayAttributeData CurrentShield; // 0xa8 (0x28)
	struct FFortGameplayAttributeData MaxOvershield; // 0xd0 (0x28)
	struct FFortGameplayAttributeData CurrentOvershield; // 0xf8 (0x28)
	struct FFortGameplayAttributeData SignalInStorm; // 0x120 (0x28)
	struct FFortGameplayAttributeData MaxSignalInStorm; // 0x148 (0x28)
	struct FFortGameplayAttributeData Armor; // 0x170 (0x28)
	struct FFortGameplayAttributeData DamageResistance; // 0x198 (0x28)
	struct FFortGameplayAttributeData DamageVulnerability; // 0x1c0 (0x28)
	struct FFortGameplayAttributeData ReflectDamageAbsolute; // 0x1e8 (0x28)
	struct FFortGameplayAttributeData ReflectDamageFromSource; // 0x210 (0x28)
	struct FFortGameplayAttributeData HealingSourceBaseMultiplier; // 0x238 (0x28)
	struct FFortGameplayAttributeData DamageScaleLight; // 0x260 (0x28)
	struct FFortGameplayAttributeData DamageScaleNormal; // 0x288 (0x28)
	struct FFortGameplayAttributeData DamageScaleCritical; // 0x2b0 (0x28)
	struct FFortGameplayAttributeData DamageScaleVulnerable; // 0x2d8 (0x28)
	struct FFortGameplayAttributeData DamageScaleInvulnerable; // 0x300 (0x28)
	struct FFortGameplayAttributeData Damage; // 0x328 (0x28)
	struct FFortGameplayAttributeData ShieldDamage; // 0x350 (0x28)
	struct FFortGameplayAttributeData OvershieldDamage; // 0x378 (0x28)
	struct FFortGameplayAttributeData HealingSource; // 0x3a0 (0x28)
	struct FFortGameplayAttributeData HealingBonusTarget; // 0x3c8 (0x28)
	struct FFortGameplayAttributeData Healing; // 0x3f0 (0x28)
	struct FFortGameplayAttributeData BlockingAngle; // 0x418 (0x28)
	struct FFortGameplayAttributeData BlockingDamageResistance; // 0x440 (0x28)
	struct FFortGameplayAttributeData DamageResistanceCap; // 0x468 (0x28)
	struct FFortGameplayAttributeData BlockedDamage; // 0x490 (0x28)
	unsigned char padding_4b8[0x178]; // 0x4b8 (0x178)

	/* Functions */

	// Function /Script/FortniteGame.FortHealthSet.SetDamageDoneOverrideDelegate (Underlying native function: SetDamageDoneOverrideDelegate 0x85a9c10)
	void SetDamageDoneOverrideDelegate(struct FDelegate& InOnDamageDoneOverrideDelegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_SignalInStorm (Underlying native function: OnRep_SignalInStorm 0x20c1af4)
	void OnRepSignalInStorm(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_Shield (Underlying native function: OnRep_Shield 0x20c181c)
	void OnRepShield(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_MaxSignalInStorm (Underlying native function: OnRep_MaxSignalInStorm 0x85a70f0)
	void OnRepMaxSignalInStorm(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_MaxOvershield (Underlying native function: OnRep_MaxOvershield 0x85a7024)
	void OnRepMaxOvershield(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_MaxHealth (Underlying native function: OnRep_MaxHealth 0x20c1264)
	void OnRepMaxHealth(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_Health (Underlying native function: OnRep_Health 0x22c1584)
	void OnRepHealth(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_CurrentShield (Underlying native function: OnRep_CurrentShield 0x20c1538)
	void OnRepCurrentShield(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_CurrentOvershield (Underlying native function: OnRep_CurrentOvershield 0x85a5030)
	void OnRepCurrentOvershield(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.OnRep_BlockedDamage (Underlying native function: OnRep_BlockedDamage 0x85a4040)
	void OnRepBlockedDamage(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHealthSet.IsTacticalOvershieldEnabled (Underlying native function: IsTacticalOvershieldEnabled 0x85a3f90)
	static bool IsTacticalOvershieldEnabled(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHealthSet.ClearDamageDoneOverrideDelegate (Underlying native function: ClearDamageDoneOverrideDelegate 0x85a329c)
	void ClearDamageDoneOverrideDelegate(); // (Final | Native | Public | BlueprintCallable)
};

