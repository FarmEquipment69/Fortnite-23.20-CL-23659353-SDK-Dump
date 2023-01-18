// ScriptStruct /Script/FortniteGame.VehicleCosmeticInfo
// Size: 0x38
struct FVehicleCosmeticInfo
{
	class AFortPlayerPawn* MostRecentCosmeticSourcePawn; // 0x0 (0x8)
	class UAthenaVehicleCosmeticItemDefinition* ActiveCosmeticItem; // 0x8 (0x8)
	class AFortPlayerPawn* PawnAssociatedWithWrap; // 0x10 (0x8)
	class UAthenaItemWrapDefinition* ActiveCosmeticWrap; // 0x18 (0x8)
	struct TArray<class USceneComponent*> SpawnedCosmeticComponents; // 0x20 (0x10)
	class ACustomItemWrapModifier* ItemWrapModifier; // 0x30 (0x8)
};

