// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase
// Size: 0xc8
class UFortAthenaAIRuntimeParameters_SmartObjectBase : public UFortAthenaAIRuntimeParameters
{
	unsigned char bEnabled; // 0x30 (0x1)
	unsigned char bChooseClosestSmartObject; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float UnreachableBanDuration; // 0x34 (0x4)
	float SelectedSmartObjectExpirationDelay; // 0x38 (0x4)
	float GlobalSmartObjectCooldownOnFinished; // 0x3c (0x4)
	float GlobalSmartObjectCooldownOnInterrupted; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FAIRuntimeParametersSmartObjectActivity> SmartObjectActivities; // 0x48 (0x10)
	struct TArray<struct FSmartObjectRecentlyUsed> SmartObjectsMostRecentlyUsed; // 0x58 (0x10)
	struct TArray<struct FSmartObjectBanned*> SmartObjectsBannedList; // 0x68 (0x10)
	int SelectedActivityID; // 0x78 (0x4)
	struct FSmartObjectRequestResult SelectedResult; // 0x7c (0xc)
	float LastSelectedSmartObjectTimestamp; // 0x88 (0x4)
	struct FSmartObjectClaimHandle ClaimedHandle; // 0x8c (0x10)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	class UGameplayBehaviorConfig* BehaviorConfig; // 0xa0 (0x8)
	class UGameplayBehavior* GameplayBehavior; // 0xa8 (0x8)
	class UGameplayInteractionSmartObjectBehaviorDefinition* GameplayInteractionBehaviorDefinition; // 0xb0 (0x8)
	float GlobalSmartObjectLastUseTimestamp; // 0xb8 (0x4)
	float GlobalSmartObjectCooldown; // 0xbc (0x4)
	int ActivitiesIDCount; // 0xc0 (0x4)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.SetChooseClosestSmartObject (Underlying native function: SetChooseClosestSmartObject 0xa3ad160)
	void SetChooseClosestSmartObject(bool& bInChooseClosestSmartObject); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.GetChooseClosestSmartObject (Underlying native function: GetChooseClosestSmartObject 0xa3abbf0)
	bool GetChooseClosestSmartObject(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

