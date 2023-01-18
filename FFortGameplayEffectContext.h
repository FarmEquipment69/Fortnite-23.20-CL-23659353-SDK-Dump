// ScriptStruct /Script/FortniteGame.FortGameplayEffectContext
// Size: 0xe8
struct FFortGameplayEffectContext : FGameplayEffectContext
{
	bool bIsFatalHit; // 0x80 (0x1)
	bool bIsCriticalHit; // 0x81 (0x1)
	bool bIsDiceCritical; // 0x82 (0x1)
	bool bIsFullBodyHit; // 0x83 (0x1)
	float KnockbackMagnitude; // 0x84 (0x4)
	float KnockbackZAngle; // 0x88 (0x4)
	float StunTime; // 0x8c (0x4)
	float TotalChargeTime; // 0x90 (0x4)
	float ChargeMagnitude; // 0x94 (0x4)
	float EffectDirectionX; // 0x98 (0x4)
	float EffectDirectionY; // 0x9c (0x4)
	struct FGameplayTagContainer TooltipTags; // 0xa0 (0x20)
	int CartridgeID; // 0xc0 (0x4)
	struct FGuid ItemGuid; // 0xc4 (0x10)
	struct TWeakObjectPtr<class UObject> DamageSourceObject; // 0xd4 (0x8)
	float SourceLevel; // 0xdc (0x4)
	float UnmodifiedDamage; // 0xe0 (0x4)
	float ModifiedDamage; // 0xe4 (0x4)
};

