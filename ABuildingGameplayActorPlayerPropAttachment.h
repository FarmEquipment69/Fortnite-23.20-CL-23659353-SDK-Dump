// Class /Script/FortniteGame.BuildingGameplayActorPlayerPropAttachment
// Size: 0x9e0
class ABuildingGameplayActorPlayerPropAttachment : public ABuildingGameplayActor
{
	bool bClientAttachmentErrorCorrectionEnabled; // 0x9d8 (0x1)
	bool bUseTransformedCalcBounds; // 0x9d9 (0x1)
	unsigned char padding_9da[0x6]; // 0x9da (0x6)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorPlayerPropAttachment.LogState (Underlying native function: LogState 0x85df528)
	void LogState(struct FString& CallingContext); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorPlayerPropAttachment.InitProp (Underlying native function: InitProp 0x85dedb8)
	void InitProp(class AActor*& PropActorToAttach); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorPlayerPropAttachment.DoesMeshComponentHaveVisibleMaterial (Underlying native function: DoesMeshComponentHaveVisibleMaterial 0x85de1f4)
	bool DoesMeshComponentHaveVisibleMaterial(class UStaticMeshComponent*& StaticMeshComponent); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorPlayerPropAttachment.CalcWorldSpaceBounds (Underlying native function: CalcWorldSpaceBounds 0x85dd91c)
	void CalcWorldSpaceBounds(class AActor*& PropActor, struct FVector& Origin, struct FVector& Extent); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActorPlayerPropAttachment.AttachProp (Underlying native function: AttachProp 0x85dd858)
	void AttachProp(class AActor*& PropActorToAttach); // (Final | Native | Public | BlueprintCallable)
};

