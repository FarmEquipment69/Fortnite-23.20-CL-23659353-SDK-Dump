// ScriptStruct /Script/FortniteGame.VehicleModBuildingGameplayActorAttachmentData
// Size: 0x90
struct FVehicleModBuildingGameplayActorAttachmentData
{
	class UClass* AttachBGA; // 0x0 (0x8)
	struct FName AttachSocketName; // 0x8 (0x4)
	enum EAttachmentRule LocationRule; // 0xc (0x1)
	enum EAttachmentRule RotationRule; // 0xd (0x1)
	enum EAttachmentRule ScaleRule; // 0xe (0x1)
	bool bWeldSimulatedBodies; // 0xf (0x1)
	bool bBuildingGameplayActorDestroyedDisablesMod; // 0x10 (0x1)
	bool bOverrideScale; // 0x11 (0x1)
	unsigned char unreflected_12[0x6]; // 0x12 (0x6) 
	struct FVector OverrideScale; // 0x18 (0x18)
	struct TArray<struct FName> ToggleablePhysicsShapeNames; // 0x30 (0x10)
	struct TSet<struct FName> ToggleablePhysicsShapeNamesIgnoringLandscape; // 0x40 (0x50)
};

