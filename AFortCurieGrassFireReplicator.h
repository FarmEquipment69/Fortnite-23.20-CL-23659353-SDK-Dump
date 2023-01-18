// Class /Script/FortniteGame.FortCurieGrassFireReplicator
// Size: 0x468
class AFortCurieGrassFireReplicator : public AFortStaticReplicatedActor
{
	class UFortPlaysetItemDefinition* PlaysetUsedForGrassFX; // 0x288 (0x8)
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FFortCuriePackedGrassDataArray PackedDataArray; // 0x298 (0x118)
	unsigned char unreflected_3b0[0x10]; // 0x3b0 (0x10) 
	struct FFortSpatialCellIndex MinGrassGridIndex; // 0x3c0 (0xc)
	struct FFortSpatialCellIndex MaxGrassGridIndex; // 0x3cc (0xc)
	struct FVector GrassGridOrigin; // 0x3d8 (0x18)
	struct FVector GrassGridCellSize; // 0x3f0 (0x18)
	unsigned char padding_408[0x60]; // 0x408 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieGrassFireReplicator.OnRep_PackedDataArray (Underlying native function: OnRep_PackedDataArray 0x228d540)
	void OnRepPackedDataArray(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCurieGrassFireReplicator.OnRep_MinGrassGridIndex (Underlying native function: OnRep_MinGrassGridIndex 0x2c0d420)
	void OnRepMinGrassGridIndex(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCurieGrassFireReplicator.OnRep_MaxGrassGridIndex (Underlying native function: OnRep_MaxGrassGridIndex 0x2c0d43c)
	void OnRepMaxGrassGridIndex(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCurieGrassFireReplicator.OnRep_GrassGridOrigin (Underlying native function: OnRep_GrassGridOrigin 0x2c0d458)
	void OnRepGrassGridOrigin(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCurieGrassFireReplicator.OnRep_GrassGridCellSize (Underlying native function: OnRep_GrassGridCellSize 0x2c0d474)
	void OnRepGrassGridCellSize(); // (Final | Native | Private)
};

