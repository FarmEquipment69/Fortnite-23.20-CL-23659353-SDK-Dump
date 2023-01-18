// Class /Script/AIModule.BTDecorator_IsAtLocation
// Size: 0xd8
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
	float AcceptableRadius; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98 (0x38)
	enum FAIDistanceType GeometricDistanceType; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x3]; // 0xd1 (0x3) 
	unsigned char bUseParametrizedRadius; // 0xd4 (0x1)
	unsigned char bUseNavAgentGoalLocation; // 0xd4 (0x1)
	unsigned char bPathFindingBasedTest; // 0xd4 (0x1)
	unsigned char padding_d5[0x3]; // 0xd5 (0x3)
};

