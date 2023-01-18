// Class /Script/FortniteGame.FortWeap_BuildingToolBase
// Size: 0x1070
class AFortWeap_BuildingToolBase : public AFortWeapon
{
	class UStaticMeshComponent* PencilMeshComponent; // 0x1040 (0x8)
	struct FName BlueprintPaperSocket; // 0x1048 (0x4)
	struct FName BlueprintPencilSocket; // 0x104c (0x4)
	class AFortPlayerController* InstigatorController; // 0x1050 (0x8)
	class AFortAthenaAIBotController* InstigatorBotController; // 0x1058 (0x8)
	unsigned char padding_1060[0x10]; // 0x1060 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortWeap_BuildingToolBase.GetPencilMeshComponent (Underlying native function: GetPencilMeshComponent 0x900d50c)
	class UStaticMeshComponent* GetPencilMeshComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

