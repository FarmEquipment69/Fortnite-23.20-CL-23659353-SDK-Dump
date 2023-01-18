// Class /Script/GameplayInteractionsModule.GameplayTask_MoveToContextualAnim
// Size: 0x268
class UGameplayTask_MoveToContextualAnim : public UGameplayTask_MoveTo
{
	struct FGameplayActuationState_ContextualAnim NextState; // 0x210 (0x58)

	/* Functions */

	// Function /Script/GameplayInteractionsModule.GameplayTask_MoveToContextualAnim.EnterContextualAnim (Underlying native function: EnterContextualAnim 0x7f1c6c8)
	static class UGameplayTask_MoveToContextualAnim* EnterContextualAnim(class AActor*& Interactor, struct FName& InteractorRole, class AActor*& InteractableObject, struct FName& InteractableObjectRole, struct FName& SectionName, struct FName& ExitSectionName, class UContextualAnimSceneAsset*& SceneAsset); // (Final | Native | Static | Public | BlueprintCallable)
};

