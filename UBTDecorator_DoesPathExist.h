// Class /Script/AIModule.BTDecorator_DoesPathExist
// Size: 0xc8
class UBTDecorator_DoesPathExist : public UBTDecorator
{
	struct FBlackboardKeySelector BlackboardKeyA; // 0x68 (0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x90 (0x28)
	unsigned char bUseSelf; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	struct TEnumAsByte<EPathExistanceQueryType> PathQueryType; // 0xbc (0x1)
	unsigned char unreflected_bd[0x3]; // 0xbd (0x3) 
	class UClass* FilterClass; // 0xc0 (0x8)
};

