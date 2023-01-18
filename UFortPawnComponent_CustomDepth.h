// Class /Script/FortniteGame.FortPawnComponent_CustomDepth
// Size: 0xc8
class UFortPawnComponent_CustomDepth : public UFortPawnComponent
{
	unsigned char bEnableRenderCustomDepth; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x17]; // 0xa1 (0x17) 
	struct TArray<struct TWeakObjectPtr<class UPrimitiveComponent>> CustomDepthMatchedComponents; // 0xb8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnComponent_CustomDepth.Update (Underlying native function: Update 0x1fdd06c)
	void Update(float& DeltaTime, bool& bForcedUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_CustomDepth.OnRep_EnableRenderCustomDepth (Underlying native function: OnRep_EnableRenderCustomDepth 0x180526c)
	void OnRepEnableRenderCustomDepth(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawnComponent_CustomDepth.IsRenderCustomDepthEnabled (Underlying native function: IsRenderCustomDepthEnabled 0x2214948)
	bool IsRenderCustomDepthEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

