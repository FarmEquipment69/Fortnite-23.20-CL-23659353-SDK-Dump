// Class /Script/CampsiteRuntime.FortQueryTest_AbandonedCampsite
// Size: 0x260
class UFortQueryTest_AbandonedCampsite : public UEnvQueryTest
{
	float TraceRadius; // 0x1f8 (0x4)
	unsigned char unreflected_1fc[0x4]; // 0x1fc (0x4) 
	struct FVector TraceStartOffset; // 0x200 (0x18)
	struct FVector TraceEndOffset; // 0x218 (0x18)
	struct TEnumAsByte<ECollisionChannel> BlockingChannel; // 0x230 (0x1)
	unsigned char unreflected_231[0x7]; // 0x231 (0x7) 
	struct TWeakObjectPtr<class UPhysicalMaterial> BlockingMaterial; // 0x238 (0x28)
};

