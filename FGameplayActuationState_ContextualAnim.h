// ScriptStruct /Script/GameplayInteractionsModule.GameplayActuationState_ContextualAnim
// Size: 0x58
struct FGameplayActuationState_ContextualAnim : FGameplayActuationStateBase
{
	struct FName InteractorRole; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class AActor* InteractableObject; // 0x30 (0x8)
	struct FName InteractableObjectRole; // 0x38 (0x4)
	struct FName SectionName; // 0x3c (0x4)
	struct FName ExitSectionName; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	class UContextualAnimSceneAsset* SceneAsset; // 0x48 (0x8)
	class UContextualAnimSceneInstance* SceneInstance; // 0x50 (0x8)
};

