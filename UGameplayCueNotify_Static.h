// Class /Script/GameplayAbilities.GameplayCueNotify_Static
// Size: 0x38
class UGameplayCueNotify_Static : public UObject
{
	struct FGameplayTag GameplayCueTag; // 0x28 (0x4)
	struct FName GameplayCueName; // 0x2c (0x4)
	bool IsOverride; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive (Underlying native function: WhileActive 0x237e498)
	bool WhileActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove (Underlying native function: OnRemove 0x23820f4)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute (Underlying native function: OnExecute 0x1eb0624)
	bool OnExecute(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive (Underlying native function: OnActive 0x23c5be8)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent | Const)
};

