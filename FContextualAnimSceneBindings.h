// ScriptStruct /Script/ContextualAnimation.ContextualAnimSceneBindings
// Size: 0x30
struct FContextualAnimSceneBindings
{
	unsigned char ID; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct TWeakObjectPtr<class UContextualAnimSceneAsset> SceneAsset; // 0x4 (0x8)
	int SectionIdx; // 0xc (0x4)
	int AnimSetIdx; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FContextualAnimSceneBinding> Data; // 0x18 (0x10)
	struct TWeakObjectPtr<class UContextualAnimSceneInstance> SceneInstancePtr; // 0x28 (0x8)
};

