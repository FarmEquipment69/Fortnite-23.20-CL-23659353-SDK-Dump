// Class /Script/FortniteGame.FortGameplayAbility_AITurnTransition
// Size: 0xbf8
class UFortGameplayAbility_AITurnTransition : public UFortGameplayAbility
{
	struct FGameplayTagContainer RequiredWeaponTags; // 0xb20 (0x20)
	float MinTurnTransitionYawAngle; // 0xb40 (0x4)
	unsigned char unreflected_b44[0x4]; // 0xb44 (0x4) 
	struct TArray<struct FMinTurnTransitionYawAngleCondition*> MinTurnTransitionYawAngleConditions; // 0xb48 (0x10)
	struct TArray<struct FTurnTransitionData> TransitionPriorityList; // 0xb58 (0x10)
	bool bPickedTurnTransitionUsesMontage; // 0xb68 (0x1)
	bool bPickedUseCurveForRotation; // 0xb69 (0x1)
	unsigned char unreflected_b6a[0x2]; // 0xb6a (0x2) 
	struct FName PickedCurveNameForRotation; // 0xb6c (0x4)
	struct FName PickedMontageSectionName; // 0xb70 (0x4)
	float PickedTurnYawRotationRate; // 0xb74 (0x4)
	float StartingDesiredRotationYawDelta; // 0xb78 (0x4)
	float PickedTurnTime; // 0xb7c (0x4)
	struct FPickedTurnTransitionData PickedData; // 0xb80 (0x78)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_AITurnTransition.GetTurnTransitionMontageSectionNameAndYawRotationRate (Underlying native function: GetTurnTransitionMontageSectionNameAndYawRotationRate 0x8122950)
	void GetTurnTransitionMontageSectionNameAndYawRotationRate(struct FName& MontageSectionName, float& TurnYawRotationRate, float& DesiredRotationYawDelta, float& TurnTime, bool& bTurnTransitionUsesMontage); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

