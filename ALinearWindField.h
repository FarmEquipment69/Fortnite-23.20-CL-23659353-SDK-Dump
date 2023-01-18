// Class /Script/WindRuntime.LinearWindField
// Size: 0x428
class ALinearWindField : public AWindField
{
	struct FVector Direction; // 0x398 (0x18)
	float FieldStrength; // 0x3b0 (0x4)
	float ForceStrength; // 0x3b4 (0x4)
	struct FName PawnForceName; // 0x3b8 (0x4)
	float PawnForceStrength; // 0x3bc (0x4)
	class URadialVector* RadialVector; // 0x3c0 (0x8)
	class URadialFalloff* RadialFalloff; // 0x3c8 (0x8)
	class UOperatorField* OperatorField; // 0x3d0 (0x8)
	unsigned char padding_3d8[0x50]; // 0x3d8 (0x50)
};

