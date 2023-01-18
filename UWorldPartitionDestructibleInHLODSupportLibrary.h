// Class /Script/Engine.WorldPartitionDestructibleInHLODSupportLibrary
// Size: 0x28
class UWorldPartitionDestructibleInHLODSupportLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.WorldPartitionDestructibleInHLODSupportLibrary.DestroyInHLOD (Underlying native function: DestroyInHLOD 0x9fdee08)
	static void DestroyInHLOD(struct TScriptInterface<class IWorldPartitionDestructibleInHLODInterface>& DestructibleInHLOD); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionDestructibleInHLODSupportLibrary.DamageInHLOD (Underlying native function: DamageInHLOD 0x9fded34)
	static void DamageInHLOD(struct TScriptInterface<class IWorldPartitionDestructibleInHLODInterface>& DestructibleInHLOD, float& DamagePercent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

