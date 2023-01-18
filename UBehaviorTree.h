// Class /Script/AIModule.BehaviorTree
// Size: 0x68
class UBehaviorTree : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class UBTCompositeNode* RootNode; // 0x30 (0x8)
	class UBlackboardData* BlackboardAsset; // 0x38 (0x8)
	struct TArray<class UBTDecorator*> RootDecorators; // 0x40 (0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x50 (0x10)
	unsigned char padding_60[0x8]; // 0x60 (0x8)
};

