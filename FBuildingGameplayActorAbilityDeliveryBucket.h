// ScriptStruct /Script/FortniteGame.BuildingGameplayActorAbilityDeliveryBucket
// Size: 0x90
struct FBuildingGameplayActorAbilityDeliveryBucket
{
	struct FGameplayTag tag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FProximityBasedGEDeliveryInfoHard> ProximityEffectBuckets; // 0x8 (0x10)
	struct TArray<struct FFortAbilitySetDeliveryInfo> PawnPersistentAbilitySetBuckets; // 0x18 (0x10)
	struct TArray<struct FFortAbilitySetHandle> PersistentlyAppliedAbilitySets; // 0x28 (0x10)
	unsigned char bEnabled; // 0x38 (0x1)
	unsigned char bEnabledByDefault; // 0x38 (0x1)
	unsigned char bHasGEsToApplyOnTouch; // 0x38 (0x1)
	unsigned char bHasGEsToApplyOnExit; // 0x38 (0x1)
	unsigned char bHasGEsToApplyOnPulseTimer; // 0x38 (0x1)
	unsigned char bHasPersistentEffects; // 0x38 (0x1)
	unsigned char padding_39[0x57]; // 0x39 (0x57)
};

