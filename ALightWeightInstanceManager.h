// Class /Script/Engine.LightWeightInstanceManager
// Size: 0x328
class ALightWeightInstanceManager : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class UClass* RepresentedClass; // 0x298 (0x8)
	class UClass* AcceptedClass; // 0x2a0 (0x8)
	struct TArray<struct FTransform> InstanceTransforms; // 0x2a8 (0x10)
	unsigned char unreflected_2b8[0x50]; // 0x2b8 (0x50) 
	struct TArray<int> FreeIndices; // 0x308 (0x10)
	struct TArray<bool> ValidIndices; // 0x318 (0x10)

	/* Functions */

	// Function /Script/Engine.LightWeightInstanceManager.OnRep_Transforms (Underlying native function: OnRep_Transforms 0x6b13cb8)
	void OnRepTransforms(); // (Native | Protected)
};

