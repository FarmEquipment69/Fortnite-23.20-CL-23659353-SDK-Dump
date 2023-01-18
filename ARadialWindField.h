// Class /Script/WindRuntime.RadialWindField
// Size: 0x4e8
class ARadialWindField : public AWindField
{
	struct FScalableFloat FieldRadius; // 0x398 (0x28)
	struct FScalableFloat FieldStrength; // 0x3c0 (0x28)
	struct FScalableFloat ForceRadius; // 0x3e8 (0x28)
	struct FScalableFloat ForceStrength; // 0x410 (0x28)
	class UCurveFloat* ForceStrengthDistanceFalloff; // 0x438 (0x8)
	struct FName PawnForceName; // 0x440 (0x4)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	struct FScalableFloat PawnForceStrength; // 0x448 (0x28)
	class UCurveFloat* PawnForceStrengthDistanceFalloff; // 0x470 (0x8)
	bool bPawnForceIsPush; // 0x478 (0x1)
	unsigned char unreflected_479[0x7]; // 0x479 (0x7) 
	class URadialVector* RadialVector; // 0x480 (0x8)
	class URadialFalloff* RadialFalloff; // 0x488 (0x8)
	class UOperatorField* OperatorField; // 0x490 (0x8)
	unsigned char padding_498[0x50]; // 0x498 (0x50)
};

