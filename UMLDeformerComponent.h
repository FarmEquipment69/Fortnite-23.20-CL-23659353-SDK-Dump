// Class /Script/MLDeformerFramework.MLDeformerComponent
// Size: 0xe0
class UMLDeformerComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x28]; // 0xa0 (0x28) 
	class UMLDeformerAsset* DeformerAsset; // 0xc8 (0x8)
	float Weight; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	class UMLDeformerModelInstance* ModelInstance; // 0xd8 (0x8)

	/* Functions */

	// Function /Script/MLDeformerFramework.MLDeformerComponent.UpdateSkeletalMeshComponent (Underlying native function: UpdateSkeletalMeshComponent 0x563ba40)
	void UpdateSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetWeight (Underlying native function: SetWeight 0x563b9a0)
	void SetWeight(float& NormalizedWeightValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetDeformerAsset (Underlying native function: SetDeformerAsset 0x563b790)
	void SetDeformerAsset(class UMLDeformerAsset*& InDeformerAsset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetWeight (Underlying native function: GetWeight 0x563b770)
	float GetWeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetSkeletalMeshComponent (Underlying native function: GetSkeletalMeshComponent 0x563b750)
	class USkeletalMeshComponent* GetSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetDeformerAsset (Underlying native function: GetDeformerAsset 0x55a72f0)
	class UMLDeformerAsset* GetDeformerAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MLDeformerFramework.MLDeformerComponent.FindSkeletalMeshComponent (Underlying native function: FindSkeletalMeshComponent 0x563b5d0)
	class USkeletalMeshComponent* FindSkeletalMeshComponent(class UMLDeformerAsset*& Asset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

