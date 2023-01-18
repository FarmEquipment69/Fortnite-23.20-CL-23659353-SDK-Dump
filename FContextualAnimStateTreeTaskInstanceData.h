// ScriptStruct /Script/GameplayInteractionsModule.ContextualAnimStateTreeTaskInstanceData
// Size: 0x38
struct FContextualAnimStateTreeTaskInstanceData
{
	class AActor* Actor; // 0x0 (0x8)
	class UContextualAnimSceneAsset* ContextualAnimAsset; // 0x8 (0x8)
	class AActor* InteractableObject; // 0x10 (0x8)
	class UGameplayTask_PlayContextualAnim* Task; // 0x18 (0x8)
	float Duration; // 0x20 (0x4)
	float Time; // 0x24 (0x4)
	struct FName InteractorRole; // 0x28 (0x4)
	struct FName InteractableObjectRole; // 0x2c (0x4)
	struct FGameplayInteractionAbortContext AbortContext; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

