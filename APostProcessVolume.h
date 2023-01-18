// Class /Script/Engine.PostProcessVolume
// Size: 0x9c0
class APostProcessVolume : public AVolume
{
	unsigned char unreflected_2c0[0x10]; // 0x2c0 (0x10) 
	struct FPostProcessSettings Settings; // 0x2d0 (0x6e0)
	float Priority; // 0x9b0 (0x4)
	float BlendRadius; // 0x9b4 (0x4)
	float BlendWeight; // 0x9b8 (0x4)
	unsigned char bEnabled; // 0x9bc (0x1)
	unsigned char bUnbound; // 0x9bc (0x1)
	unsigned char padding_9bd[0x3]; // 0x9bd (0x3)

	/* Functions */

	// Function /Script/Engine.PostProcessVolume.AddOrUpdateBlendable (Underlying native function: AddOrUpdateBlendable 0x9f19310)
	void AddOrUpdateBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject, float& InWeight); // (Final | Native | Public | BlueprintCallable)
};

