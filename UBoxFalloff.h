// Class /Script/FieldSystemEngine.BoxFalloff
// Size: 0x120
class UBoxFalloff : public UFieldNodeFloat
{
	float Magnitude; // 0xa0 (0x4)
	float MinRange; // 0xa4 (0x4)
	float MaxRange; // 0xa8 (0x4)
	float Default; // 0xac (0x4)
	struct FTransform Transform; // 0xb0 (0x60)
	struct TEnumAsByte<EFieldFalloffType> Falloff; // 0x110 (0x1)
	unsigned char padding_111[0xf]; // 0x111 (0xf)

	/* Functions */

	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff (Underlying native function: SetBoxFalloff 0x99a3eb4)
	class UBoxFalloff* SetBoxFalloff(float& Magnitude, float& MinRange, float& MaxRange, float& Default, struct FTransform& Transform, struct TEnumAsByte<EFieldFalloffType>& Falloff); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

