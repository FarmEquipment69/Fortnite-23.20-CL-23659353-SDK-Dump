// ScriptStruct /Script/Engine.LinkedAnimLayerInstanceData
// Size: 0x58
struct FLinkedAnimLayerInstanceData
{
	class UAnimInstance* Instance; // 0x0 (0x8)
	struct TMap<struct FName, struct TWeakObjectPtr<class UAnimInstance>> LinkedFunctions; // 0x8 (0x50)
};

