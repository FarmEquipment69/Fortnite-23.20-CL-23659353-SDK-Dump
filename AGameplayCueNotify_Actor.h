// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x2e0
class AGameplayCueNotify_Actor : public AActor
{
	bool bAutoDestroyOnRemove; // 0x288 (0x1)
	unsigned char unreflected_289[0x3]; // 0x289 (0x3) 
	float AutoDestroyDelay; // 0x28c (0x4)
	bool WarnIfTimelineIsStillRunning; // 0x290 (0x1)
	bool WarnIfLatentActionIsStillRunning; // 0x291 (0x1)
	unsigned char unreflected_292[0x2]; // 0x292 (0x2) 
	struct FGameplayTag GameplayCueTag; // 0x294 (0x4)
	struct FName GameplayCueName; // 0x298 (0x4)
	bool bAutoAttachToOwner; // 0x29c (0x1)
	bool IsOverride; // 0x29d (0x1)
	bool bUniqueInstancePerInstigator; // 0x29e (0x1)
	bool bUniqueInstancePerSourceObject; // 0x29f (0x1)
	bool bAllowMultipleOnActiveEvents; // 0x2a0 (0x1)
	bool bAllowMultipleWhileActiveEvents; // 0x2a1 (0x1)
	unsigned char unreflected_2a2[0x2]; // 0x2a2 (0x2) 
	int NumPreallocatedInstances; // 0x2a4 (0x4)
	unsigned char padding_2a8[0x38]; // 0x2a8 (0x38)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive (Underlying native function: WhileActive 0xec9d68)
	bool WhileActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove (Underlying native function: OnRemove 0x11860c8)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed (Underlying native function: OnOwnerDestroyed 0x24a0d58)
	void OnOwnerDestroyed(class AActor*& DestroyedActor); // (Native | Public)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute (Underlying native function: OnExecute 0x1eaff6c)
	bool OnExecute(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive (Underlying native function: OnActive 0xec9558)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue (Underlying native function: K2_EndGameplayCue 0x6b13cb8)
	void K2EndGameplayCue(); // (Native | Public | BlueprintCallable)
};

