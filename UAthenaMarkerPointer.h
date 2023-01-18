// Class /Script/FortniteUI.AthenaMarkerPointer
// Size: 0x170
class UAthenaMarkerPointer : public UWidget
{
	class UMaterialInterface* LineMeshMaterial; // 0x148 (0x8)
	struct FVector2D TargetScreenPosition; // 0x150 (0x10)
	unsigned char padding_160[0x10]; // 0x160 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMarkerPointer.SetTargetScreenPosition (Underlying native function: SetTargetScreenPosition 0xa4b0c9c)
	void SetTargetScreenPosition(struct FVector2D& InTargetScreenPosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaMarkerPointer.SetLineMeshMaterial (Underlying native function: SetLineMeshMaterial 0xa4b0b0c)
	void SetLineMeshMaterial(class UMaterialInterface*& Material); // (Final | Native | Public | BlueprintCallable)
};

