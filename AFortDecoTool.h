// Class /Script/FortniteGame.FortDecoTool
// Size: 0x1098
class AFortDecoTool : public AFortWeapon
{
	bool bButtonDown; // 0x1040 (0x1)
	unsigned char unreflected_1041[0x7]; // 0x1041 (0x7) 
	class UFortItemDefinition* ItemDefinition; // 0x1048 (0x8)
	class AFortDecoHelper* DecoHelper; // 0x1050 (0x8)
	class AActor* CarriedActor; // 0x1058 (0x8)
	bool bPlaceCarriedActor; // 0x1060 (0x1)
	unsigned char unreflected_1061[0x7]; // 0x1061 (0x7) 
	struct TWeakObjectPtr<class UParticleSystem> SpawnEffect; // 0x1068 (0x28)
	bool bPreventExecutionOnOwningPlayerFalling; // 0x1090 (0x1)
	unsigned char unreflected_1091[0x1]; // 0x1091 (0x1) 
	bool bIsEquipped; // 0x1092 (0x1)
	unsigned char padding_1093[0x5]; // 0x1093 (0x5)

	/* Functions */

	// Function /Script/FortniteGame.FortDecoTool.TryToPlace (Underlying native function: TryToPlace 0x90432b8)
	bool TryToPlace(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.SetHelper (Underlying native function: SetHelper 0x9041d24)
	void SetHelper(class AFortDecoHelper*& InHelper); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.SetDecoObjectPreview (Underlying native function: SetDecoObjectPreview 0x9041ac4)
	void SetDecoObjectPreview(class UFortItemDefinition*& InItemDefinition, bool& bUpdatePreviewPosition); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.ServerSpawnDeco (Underlying native function: ServerSpawnDeco 0x904157c)
	void ServerSpawnDeco(struct FVector& Location, struct FRotator& Rotation, class ABuildingSMActor*& AttachedActor, struct TEnumAsByte<EBuildingAttachmentType>& InBuildingAttachmentType); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortDecoTool.ServerCreateBuildingAndSpawnDeco (Underlying native function: ServerCreateBuildingAndSpawnDeco 0x9040e74)
	void ServerCreateBuildingAndSpawnDeco(struct FVector_NetQuantize10& BuildingLocation, struct FRotator& BuildingRotation, struct FVector_NetQuantize10& Location, struct FRotator& Rotation, struct TEnumAsByte<EBuildingAttachmentType>& InBuildingAttachmentType, bool& bSpawnDecoOnExtraPiece, struct FVector& BuildingExtraPieceLocation); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortDecoTool.OnUnEquip (Underlying native function: OnUnEquip 0x2423558)
	void OnUnEquip(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.OnRep_ItemDefinition (Underlying native function: OnRep_ItemDefinition 0x9040acc)
	void OnRepItemDefinition(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortDecoTool.OnRep_CarriedActor (Underlying native function: OnRep_CarriedActor 0x9040a30)
	void OnRepCarriedActor(class AActor*& OldCarriedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortDecoTool.OnCarriedActorDestroyed (Underlying native function: OnCarriedActorDestroyed 0x90406a8)
	void OnCarriedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortDecoTool.ClientDestroyDecoPreview (Underlying native function: ClientDestroyDecoPreview 0x903ec10)
	void ClientDestroyDecoPreview(); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

