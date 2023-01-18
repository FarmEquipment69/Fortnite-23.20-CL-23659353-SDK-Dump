// Class /Script/CustomizableObject.CustomizableSkeletalComponent
// Size: 0x2e0
class UCustomizableSkeletalComponent : public USceneComponent
{
	unsigned char unreflected_2a0[0x4]; // 0x2a0 (0x4) 
	float SkippedLastRenderTime; // 0x2a4 (0x4)
	class UCustomizableObjectInstance* CustomizableObjectInstance; // 0x2a8 (0x8)
	int ComponentIndex; // 0x2b0 (0x4)
	unsigned char padding_2b4[0x2c]; // 0x2b4 (0x2c)

	/* Functions */

	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync (Underlying native function: UpdateSkeletalMeshAsync 0x7506ba8)
	void UpdateSkeletalMeshAsync(bool& bNeverSkipUpdate); // (Final | Native | Public | BlueprintCallable)
};

