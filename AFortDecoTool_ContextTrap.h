// Class /Script/FortniteGame.FortDecoTool_ContextTrap
// Size: 0x10a8
class AFortDecoTool_ContextTrap : public AFortTrapTool
{
	class UFortContextTrapItemDefinition* ContextTrapItemDefinition; // 0x10a0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortDecoTool_ContextTrap.SetContextTrapItemDefinition (Underlying native function: SetContextTrapItemDefinition 0x9041a44)
	void SetContextTrapItemDefinition(class UFortContextTrapItemDefinition*& InContextTrapItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool_ContextTrap.ServerSpawnDeco_Implementation (Underlying native function: ServerSpawnDeco_Implementation 0x904174c)
	void ServerSpawnDecoImplementation(struct FVector& Location, struct FRotator& Rotation, class ABuildingSMActor*& AttachedActor, struct TEnumAsByte<EBuildingAttachmentType>& InBuildingAttachmentType); // (Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortDecoTool_ContextTrap.ServerCreateBuildingAndSpawnDeco_Implementation (Underlying native function: ServerCreateBuildingAndSpawnDeco_Implementation 0x90411b8)
	void ServerCreateBuildingAndSpawnDecoImplementation(struct FVector_NetQuantize10& BuildingLocation, struct FRotator& BuildingRotation, struct FVector_NetQuantize10& Location, struct FRotator& Rotation, struct TEnumAsByte<EBuildingAttachmentType>& InBuildingAttachmentType, bool& bSpawnDecoOnExtraPiece, struct FVector& BuildingExtraPieceLocation); // (Native | Public | HasDefaults)
};

