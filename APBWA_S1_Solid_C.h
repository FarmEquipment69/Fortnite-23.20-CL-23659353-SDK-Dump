// BlueprintGeneratedClass /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Solid.PBWA_S1_Solid_C
// Size: 0x1050
class APBWA_S1_Solid_C : public ABuildingWall
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1028 (0x8)
	int GnomeWallChance; // 0x1030 (0x4)
	int GnomeWallMax; // 0x1034 (0x4)
	bool Gnomed; // 0x1038 (0x1)
	unsigned char unreflected_1039[0x7]; // 0x1039 (0x7) 
	class UMaterialInstanceConstant* GnomeMaterial; // 0x1040 (0x8)
	class UStaticMesh* GnomeWall; // 0x1048 (0x8)

	/* Functions */

	// Function /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& CallFuncHasAuthorityReturnValue, int& CallFuncRandomIntegerInRangeReturnValue, bool& CallFuncLessIntIntReturnValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Solid.PBWA_S1_Solid_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Building/ActorBlueprints/Player/Stone/L1/PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid (Has no native function)
	void ExecuteUbergraphPBWAS1Solid(int& EntryPoint, struct FAnimatingMaterialPair& K2NodeMakeStructAnimatingMaterialPair, int& CallFuncArrayAddReturnValue); // (Final | 0x00008000 | HasDefaults)
};

