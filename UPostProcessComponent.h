// Class /Script/Engine.PostProcessComponent
// Size: 0x9a0
class UPostProcessComponent : public USceneComponent
{
	unsigned char unreflected_2a0[0x10]; // 0x2a0 (0x10) 
	struct FPostProcessSettings Settings; // 0x2b0 (0x6e0)
	float Priority; // 0x990 (0x4)
	float BlendRadius; // 0x994 (0x4)
	float BlendWeight; // 0x998 (0x4)
	unsigned char bEnabled; // 0x99c (0x1)
	unsigned char bUnbound; // 0x99c (0x1)
	unsigned char padding_99d[0x3]; // 0x99d (0x3)

	/* Functions */

	// Function /Script/Engine.PostProcessComponent.AddOrUpdateBlendable (Underlying native function: AddOrUpdateBlendable 0x9cf6524)
	void AddOrUpdateBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject, float& InWeight); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

