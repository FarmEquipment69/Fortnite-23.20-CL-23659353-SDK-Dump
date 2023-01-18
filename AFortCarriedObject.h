// Class /Script/FortniteGame.FortCarriedObject
// Size: 0x470
class AFortCarriedObject : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	class UProjectileMovementComponent* ProjectileComp; // 0x2a0 (0x8)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	struct FCarriedObjectAttachmentInfo HolderInfo; // 0x2b0 (0x40)
	unsigned char unreflected_2f0[0x40]; // 0x2f0 (0x40) 
	struct FVector IndicatorRelativeOffset; // 0x330 (0x18)
	unsigned char unreflected_348[0x8]; // 0x348 (0x8) 
	struct FSlateBrush Indicator; // 0x350 (0xc0)
	struct FSlateColor DefaultIndicatorColor; // 0x410 (0x14)
	unsigned char unreflected_424[0x4]; // 0x424 (0x4) 
	struct FVector RelativeTranslation; // 0x428 (0x18)
	struct FRotator RelativeRotation; // 0x440 (0x18)
	bool bPickupOnTouch; // 0x458 (0x1)
	unsigned char Team; // 0x459 (0x1)
	unsigned char unreflected_45a[0x6]; // 0x45a (0x6) 
	class ABuildingFlagSpawn* SpawnPointActor; // 0x460 (0x8)
	unsigned char padding_468[0x8]; // 0x468 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCarriedObject.ReturnToSpawnPoint (Underlying native function: ReturnToSpawnPoint 0x868c9f8)
	void ReturnToSpawnPoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCarriedObject.OnRep_HolderInfo (Underlying native function: OnRep_HolderInfo 0x868c89c)
	void OnRepHolderInfo(struct FCarriedObjectAttachmentInfo& PreviousInfo); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCarriedObject.GetHoldingActor (Underlying native function: GetHoldingActor 0x868bed0)
	class AActor* GetHoldingActor(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

