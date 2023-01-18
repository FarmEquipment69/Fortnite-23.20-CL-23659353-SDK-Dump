// Class /Script/FortniteGame.FortGameplayCueNotifyAthena_AIFleeState
// Size: 0x9e0
class AFortGameplayCueNotifyAthena_AIFleeState : public AFortGameplayCueNotify_Loop
{
	class UStaticMeshComponent* SpriteMeshComponent; // 0x960 (0x8)
	struct FName SpriteMeshAttachSocketName; // 0x968 (0x4)
	unsigned char unreflected_96c[0x4]; // 0x96c (0x4) 
	struct FTransform SpriteMeshTransform; // 0x970 (0x60)
	struct FGameplayTag FleeStateTag; // 0x9d0 (0x4)
	unsigned char padding_9d4[0xc]; // 0x9d4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotifyAthena_AIFleeState.FleeStateTagUpdateCallback (Underlying native function: FleeStateTagUpdateCallback 0x8264930)
	void FleeStateTagUpdateCallback(struct FGameplayTag& tag, int& NewCount); // (Final | Native | Private)
};

