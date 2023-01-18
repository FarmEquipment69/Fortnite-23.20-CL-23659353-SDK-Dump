// ScriptStruct /Script/FortniteGame.BuildingGameplayActorAbilityDeliveryInfo
// Size: 0xa0
struct FBuildingGameplayActorAbilityDeliveryInfo
{
	struct TArray<struct FBuildingGameplayActorAbilityDeliveryBucket> DeliveryBuckets; // 0x0 (0x10)
	struct FScalableFloat ProximityPulseInterval; // 0x10 (0x28)
	struct FScalableFloat ProximityPrePulseTime; // 0x38 (0x28)
	unsigned char bHasGEsToApplyOnTouch; // 0x60 (0x1)
	unsigned char bHasGEsToApplyOnExit; // 0x60 (0x1)
	unsigned char bHasGEsToApplyOnPulseTimer; // 0x60 (0x1)
	unsigned char bHasPersistentEffects; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	class ABuildingGameplayActor* OwningActor; // 0x68 (0x8)
	struct TArray<class AActor*> DeferredTouchActorsToProcess; // 0x70 (0x10)
	unsigned char padding_80[0x20]; // 0x80 (0x20)
};

