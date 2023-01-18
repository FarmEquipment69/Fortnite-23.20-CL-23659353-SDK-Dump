// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xe0
class UAbilityTask_MoveToLocation : public UAbilityTask
{
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x78 (0x10)
	unsigned char unreflected_88[0x8]; // 0x88 (0x8) 
	struct FVector StartLocation; // 0x90 (0x18)
	struct FVector TargetLocation; // 0xa8 (0x18)
	float DurationOfMovement; // 0xc0 (0x4)
	unsigned char unreflected_c4[0xc]; // 0xc4 (0xc) 
	class UCurveFloat* LerpCurve; // 0xd0 (0x8)
	class UCurveVector* LerpCurveVector; // 0xd8 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation (Underlying native function: MoveToLocation 0x6ae606c)
	static class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FVector& Location, float& Duration, class UCurveFloat*& OptionalInterpolationCurve, class UCurveVector*& OptionalVectorInterpolationCurve); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

