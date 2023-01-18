// ScriptStruct /Script/FortniteGame.PhysicsMagneticForceData
// Size: 0x50
struct FPhysicsMagneticForceData
{
	float Magnitude; // 0x4 (0x4)
	float FallOffBias; // 0x8 (0x4)
	float FallOffExponent; // 0xc (0x4)
	struct FVector_NetQuantize Location; // 0x10 (0x18)
	unsigned char bShouldAffectOwner; // 0x28 (0x1)
	unsigned char bAtLocation; // 0x28 (0x1)
	unsigned char bLocationIsRelative; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class UTargetingPreset* TargetingPreset; // 0x30 (0x8)
	struct FTargetingRequestHandle TargetingHandle; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct TWeakObjectPtr<class AActor>> TargetActors; // 0x40 (0x10)
};

