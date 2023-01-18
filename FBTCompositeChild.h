// ScriptStruct /Script/AIModule.BTCompositeChild
// Size: 0x30
struct FBTCompositeChild
{
	class UBTCompositeNode* ChildComposite; // 0x0 (0x8)
	class UBTTaskNode* ChildTask; // 0x8 (0x8)
	struct TArray<class UBTDecorator*> Decorators; // 0x10 (0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20 (0x10)
};

