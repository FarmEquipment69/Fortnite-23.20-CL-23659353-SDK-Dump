// Class /Script/GameplayInteractionsModule.GameplayTask_PlayContextualAnim
// Size: 0x220
class UGameplayTask_PlayContextualAnim : public UGameplayTask
{
	unsigned char unreflected_60[0x80]; // 0x60 (0x80) 
	struct FMulticastInlineDelegate OnRequestFailed; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnCompleted; // 0xf0 (0x10)
	int SectionIdx; // 0x100 (0x4)
	int AnimSetIdx; // 0x104 (0x4)
	struct TArray<struct FTransform> Pivots; // 0x108 (0x10)
	class UContextualAnimSceneAsset* SceneAsset; // 0x118 (0x8)
	struct FName InteractorRole; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	class AActor* InteractableObject; // 0x128 (0x8)
	struct FName InteractableObjectRole; // 0x130 (0x4)
	struct FName ExitSectionName; // 0x134 (0x4)
	class UContextualAnimSceneInstance* SceneInstance; // 0x138 (0x8)
	class UGameplayActuationComponent* ActuationComponent; // 0x140 (0x8)
	struct FContextualAnimStartSceneParams SceneParams; // 0x148 (0x68)
	struct FTransform SafeExitPoint; // 0x1b0 (0x60)
	enum EPlayContextualAnimStatus Status; // 0x210 (0x1)
	bool bTeleportOnTaskEnd; // 0x211 (0x1)
	unsigned char padding_212[0xe]; // 0x212 (0xe)

	/* Functions */

	// Function /Script/GameplayInteractionsModule.GameplayTask_PlayContextualAnim.SetExit (Underlying native function: SetExit 0x7f1cfa4)
	void SetExit(enum EPlayContextualAnimExitMode& ExitMode, struct FName& NewExitSectionName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayInteractionsModule.GameplayTask_PlayContextualAnim.PlayContextualAnim (Underlying native function: PlayContextualAnim 0x7f1cd84)
	static class UGameplayTask_PlayContextualAnim* PlayContextualAnim(class AActor*& Interactor, struct FName& InteractorRole, class AActor*& InteractableObject, struct FName& InteractableObjectRole, struct FName& SectionName, struct FName& ExitSectionName, class UContextualAnimSceneAsset*& SceneAsset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayInteractionsModule.GameplayTask_PlayContextualAnim.OnSectionEndTimeReached (Underlying native function: OnSectionEndTimeReached 0x7f1cd04)
	void OnSectionEndTimeReached(class UContextualAnimSceneInstance*& SceneInstance); // (Final | Native | Protected)

	// Function /Script/GameplayInteractionsModule.GameplayTask_PlayContextualAnim.GetStatus (Underlying native function: GetStatus 0x7f1c8cc)
	enum EPlayContextualAnimStatus GetStatus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

