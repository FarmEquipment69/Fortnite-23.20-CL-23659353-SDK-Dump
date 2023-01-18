// Class /Script/AIModule.BehaviorTreeManager
// Size: 0x50
class UBehaviorTreeManager : public UObject
{
	int MaxDebuggerSteps; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30 (0x10)
	struct TArray<class UBehaviorTreeComponent*> ActiveComponents; // 0x40 (0x10)
};

