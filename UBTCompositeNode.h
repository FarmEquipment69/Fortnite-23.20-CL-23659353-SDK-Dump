// Class /Script/AIModule.BTCompositeNode
// Size: 0x90
class UBTCompositeNode : public UBTNode
{
	struct TArray<struct FBTCompositeChild> Children; // 0x58 (0x10)
	struct TArray<class UBTService*> Services; // 0x68 (0x10)
	unsigned char unreflected_78[0x10]; // 0x78 (0x10) 
	unsigned char bApplyDecoratorScope; // 0x88 (0x1)
	unsigned char padding_89[0x7]; // 0x89 (0x7)
};

