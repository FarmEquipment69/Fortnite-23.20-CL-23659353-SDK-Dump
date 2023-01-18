// Class /Script/FortniteGame.BuildingProp
// Size: 0xee8
class ABuildingProp : public ABuildingTimeOfDayLights
{
	unsigned char unreflected_e00[0x8]; // 0xe00 (0x8) 
	struct FGameplayTagContainer AnalyticsTags; // 0xe08 (0x20)
	unsigned char bSuppressSimpleInteractionWidgetForTouch; // 0xe28 (0x1)
	unsigned char bUseDamageSet; // 0xe28 (0x1)
	unsigned char bIsBuildingVolume; // 0xe28 (0x1)
	unsigned char bCanBeMarked; // 0xe28 (0x1)
	unsigned char bBlockMarking; // 0xe28 (0x1)
	unsigned char unreflected_e29[0x7]; // 0xe29 (0x7) 
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xe30 (0x98)
	struct FVector MarkerPositionOffset; // 0xec8 (0x18)
	unsigned char bDoNotBlockMarkerTraceWhenOverlappingPlayer; // 0xee0 (0x1)
	unsigned char padding_ee1[0x7]; // 0xee1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp.SetAsBuildingVolume (Underlying native function: SetAsBuildingVolume 0x860ccfc)
	void SetAsBuildingVolume(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp.IsBuildingVolume (Underlying native function: IsBuildingVolume 0x860a4e0)
	bool IsBuildingVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingProp.GetBoundingBoxWithIgnoredComponents (Underlying native function: GetBoundingBoxWithIgnoredComponents 0x8608680)
	struct FBox GetBoundingBoxWithIgnoredComponents(struct TArray<class UPrimitiveComponent*>& IgnoredComponents, bool& bNonColliding, bool& bIncludeFromChildActors); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingProp.BP_GetEyesViewpoint (Underlying native function: BP_GetEyesViewpoint 0x86070e0)
	void BPGetEyesViewpoint(struct FVector& OutLocation, struct FRotator& OutRotation); // (0x00000002 | Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingProp.BP_GetComponentsBoundingBox (Underlying native function: BP_GetComponentsBoundingBox 0x1add9a4)
	struct FBox BPGetComponentsBoundingBox(bool& bNonColliding, bool& bIncludeFromChildActors); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingProp.BlueprintModifyIncomingDamage (Underlying native function: BlueprintModifyIncomingDamage 0x86073f0)
	float BlueprintModifyIncomingDamage(float& Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent)
};

