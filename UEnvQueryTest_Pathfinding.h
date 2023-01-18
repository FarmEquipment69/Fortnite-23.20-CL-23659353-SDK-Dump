// Class /Script/AIModule.EnvQueryTest_Pathfinding
// Size: 0x280
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
	struct TEnumAsByte<EEnvTestPathfinding> TestMode; // 0x1f8 (0x1)
	unsigned char unreflected_1f9[0x7]; // 0x1f9 (0x7) 
	class UClass* Context; // 0x200 (0x8)
	struct FAIDataProviderBoolValue PathFromContext; // 0x208 (0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x240 (0x38)
	class UClass* FilterClass; // 0x278 (0x8)
};

