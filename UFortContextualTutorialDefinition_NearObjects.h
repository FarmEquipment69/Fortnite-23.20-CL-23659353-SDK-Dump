// Class /Script/FortniteGame.FortContextualTutorialDefinition_NearObjects
// Size: 0x178
class UFortContextualTutorialDefinition_NearObjects : public UFortContextualTutorialDefinition
{
	struct FGameplayTagContainer ContainerTags; // 0x100 (0x20)
	float RayCastFarDistance; // 0x120 (0x4)
	float RayCastNearDistance; // 0x124 (0x4)
	bool bInventoryRequirement; // 0x128 (0x1)
	bool bInventoryCanInteract; // 0x129 (0x1)
	unsigned char unreflected_12a[0x6]; // 0x12a (0x6) 
	struct FText MarkerText; // 0x130 (0x18)
	float MarkerTextOffset; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	struct FGameplayTagContainer BlockedByTags; // 0x150 (0x20)
	struct FGameplayTag GamePlayEventTag; // 0x170 (0x4)
	bool bMustBeInteractable; // 0x174 (0x1)
	unsigned char padding_175[0x3]; // 0x175 (0x3)
};

