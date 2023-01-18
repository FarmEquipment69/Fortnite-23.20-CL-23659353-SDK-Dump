// Class /Script/Procedural.ProceduralParameterModifier
// Size: 0x38
class UProceduralParameterModifier : public UObject
{
	bool bEnabled; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float Contribution; // 0x2c (0x4)
	enum EProceduralParameterModifierBlendMode BlendMode; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)

	/* Functions */

	// Function /Script/Procedural.ProceduralParameterModifier.GetContribution (Underlying native function: GetContribution 0x7f92458)
	float GetContribution(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

